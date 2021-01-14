#include "ventananuevoarchivo.h"
#include "ui_ventananuevoarchivo.h"

ventanaNuevoArchivo::ventanaNuevoArchivo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaNuevoArchivo)
{
    ui->setupUi(this);
    ui->labCarpeta->setText(QApplication::applicationDirPath());
}

ventanaNuevoArchivo::~ventanaNuevoArchivo()
{
    delete x;
    delete y;
    delete ui;
}

void ventanaNuevoArchivo::on_btnCarpeta_clicked()
{
    ui->labCarpeta->setText(QFileDialog::getExistingDirectory());
}

void ventanaNuevoArchivo::on_btnGenerar_clicked()
{
    bool ok;
    msj.setText("Error en la carga de archivos!");
    valMax = ui->leValorMaximo->text().toDouble(&ok);
    if(!ok)
    {
        msj.exec();
        return;
    }
    valMin = ui->leValorMinimo->text().toDouble(&ok);
    if(!ok)
    {
        msj.exec();
        return;
    }
    cantPtos = ui->leCantPtos->text().toInt(&ok);
    if(!ok)
    {
        msj.exec();
        return;
    }
    direccion = ui->labCarpeta->text();
    nombre = ui->leNombreArchivo->text();
    nombre = direccion + '/' + nombre;
    QFile archivo(nombre);
    int i;
    if(archivo.exists() == true)
    {
        msj.setText("El archivo ya existe! Renombre el archivo.");
        msj.exec();
        return;
    }
    archivo.open(QIODevice::Truncate | QIODevice::WriteOnly | QIODevice::Text);
    if(!archivo.isOpen())
    {
        msj.setText("Error! No se pudo abrir el archivo.");
        msj.exec();
        return;
    }
    srand(time(NULL));
    QTextStream texto(&archivo);
    x = new double[ui->leCantPtos->text().toInt()];
    y = new double[ui->leCantPtos->text().toInt()];
    diferencia = valMax - valMin;
    aumento = diferencia/cantPtos;
    aux = valMin;
    x[0] = (valMin*M_PI)/180;
    if(ui->checkBoxAleatorio->isChecked())
        aleatorio = rand()%2;
    if(ui->checkBoxSeno->isChecked() || aleatorio == 0)
    {
        y[0] = sin(x[0]);
        for(i = 1; i < cantPtos; i++)
        {
            x[i] = x[i-1] + (aumento*M_PI)/180;
            y[i] = sin(x[i]);
        }
    }
    else if(ui->checkBoxCoseno->isChecked() || aleatorio == 1)
    {
        y[0] = cos(x[0]);
        for(i = 1; i < cantPtos; i++)
        {
            x[i] = x[i-1] + (aumento*M_PI)/180;
            y[i] = cos(x[i]);
        }
    }
    else
    {
        msj.setText("Error en la seleccion de la función a utilizar!");
        msj.exec();
        archivo.close();
        return;
    }
    for(i=0; i<cantPtos; i++)
    {
        x[i] = (x[i]*180)/M_PI;
        texto << x[i] << ";" << y[i] << endl;
    }
    archivo.close();
    msj.setText("Nuevo archivo generado");
    msj.exec();
    QDialog::accept();
}

void ventanaNuevoArchivo::on_btnCancelar_clicked()
{
    QDialog::close();
}
