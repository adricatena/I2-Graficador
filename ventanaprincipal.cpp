#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"

VentanaPrincipal::VentanaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaPrincipal)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->layoutWidget);
    ui->qwtPlot->setTitle("Grafica");
    ui->qwtPlot->setAxisTitle(QwtPlot::xBottom, "Eje x");
    ui->qwtPlot->setAxisTitle(QwtPlot::yLeft, "Eje y");
    ui->qwtPlot->setAutoReplot(true);
    ui->qwtPlot->setCanvasBackground(Qt::black);
    cantA = 0;
    flagArchivo = false;
    configuracion = new QSettings("Informatica II", "Actividad 1", this);
    inicio();
    actualizar();
}

VentanaPrincipal::~VentanaPrincipal()
{
    if(grafica)
        delete grafica;
    delete x;
    delete y;
    delete configuracion;
    delete ui;
}

void VentanaPrincipal::resizeEvent(QResizeEvent *event)
{
    if(grafica)
        ui->layoutWidget->adjustSize();
}

void VentanaPrincipal::on_actionNueva_grafica_triggered()
{
    if(cantA >= 1)
        reiniciarGrafica = true;
    else
        reiniciarGrafica = false;
    flag = procesar();
    if(flag == true)
    {
        pen.setColor(Qt::white);
        grafica->setPen(pen);
        ui->qwtPlot->replot();
        ui->labGrafica1->setText(nombresArchivos[cantA].mid(nombresArchivos[cantA].lastIndexOf('/')+1));
        cantA++;
        cantG++;
        ui->menuCantidad_de_puntos->setEnabled(true);
        ui->menuGrafica_1->setEnabled(true);
        ui->actionGrafica1->setText(QString::number(cantPtos));
    }
    else
        ui->statusBar->showMessage("Nueva grafica: cancelado");
}

void VentanaPrincipal::on_actionSuperponer_grafica_triggered()
{
    if(cantG > 0 && cantG < 5)
    {
        flag = procesar();
        if(flag == true)
        {
            switch(cantG)
            {
                case 1:
                    pen.setColor(Qt::red);
                    ui->labGrafica2->setText(nombresArchivos[cantA].mid(nombresArchivos[cantA].lastIndexOf('/')+1));
                    ui->menuGrafica_2->setEnabled(true);
                    ui->actionGrafica2->setText(QString::number(cantPtos));
                    break;
                case 2:
                    pen.setColor(Qt::green);
                    ui->labGrafica3->setText(nombresArchivos[cantA].mid(nombresArchivos[cantA].lastIndexOf('/')+1));
                    ui->menuGrafica_3->setEnabled(true);
                    ui->actionGrafica3->setText(QString::number(cantPtos));
                    break;
                case 3:
                    pen.setColor(Qt::blue);
                    ui->labGrafica4->setText(nombresArchivos[cantA].mid(nombresArchivos[cantA].lastIndexOf('/')+1));
                    ui->menuGrafica_4->setEnabled(true);
                    ui->actionGrafica4->setText(QString::number(cantPtos));
                    break;
                case 4:
                    pen.setColor(Qt::yellow);
                    ui->labGrafica5->setText(nombresArchivos[cantA].mid(nombresArchivos[cantA].lastIndexOf('/')+1));
                    ui->menuGrafica_5->setEnabled(true);
                    ui->actionGrafica5->setText(QString::number(cantPtos));
                    break;
            }
            grafica->setPen(pen);
            ui->qwtPlot->replot();
            cantA++;
            cantG++;
        }
        else
            ui->statusBar->showMessage("Superponer grafica: cancelado");
    }
    else if(cantG == 0)
    {
        msj.setText("Para superponer primero se debe crear una Nueva grafica!");
        msj.exec();
    }
    else
    {
        msj.setText("Solamente se pueden superponer 5 graficas!");
        msj.exec();
    }
}

bool VentanaPrincipal::procesar(void)
{
    if(flagArchivo == false)
    {
        QString dir = QApplication::applicationDirPath();
        QString filtro = "Todos los archivos (*.*);;Archivos de texto (*.txt)";
        nuevaGrafica = QFileDialog::getOpenFileName(this, "Nueva Grafica", dir, filtro);
    }
    QFile archivo;
    if(nuevaGrafica != NULL)
    {
        archivo.setFileName(nuevaGrafica);
        archivo.open(QIODevice::ReadOnly | QIODevice::Text);
        if(!archivo.isOpen())
        {
            msj.setText("Error! El archivo no existe, se renombro o se cambio su ruta.");
            msj.exec();
            return false;
        }
        else
        {
            if(reiniciarGrafica == true)
            {
                inicio();
                ui->qwtPlot->detachItems();
                ui->labGrafica1->setText("Grafica 1");
                ui->labGrafica2->setText("Grafica 2");
                ui->labGrafica3->setText("Grafica 3");
                ui->labGrafica4->setText("Grafica 4");
                ui->labGrafica5->setText("Grafica 5");
            }
            x = new double[30000];
            y = new double[30000];
            QTextStream txt(&archivo);
            QString renglon;
            QStringList valores;
            int i=0;
            nombresArchivos[cantA] = nuevaGrafica;
            renglon = txt.readLine();
            while(!renglon.isNull())
            {
                if(renglon.indexOf('#') != 0)
                {
                    valores = renglon.split(';');
                    x[i] = valores.at(0).toDouble();
                    y[i] = valores.at(1).toDouble();
                    if(x[i] > xMax)
                        xMax = x[i];
                    if(x[i] < xMin)
                        xMin = x[i];
                    if(y[i] > yMax)
                        yMax = y[i];
                    if(y[i] < yMin)
                        yMin = y[i];
                    i++;
                }
                renglon = txt.readLine();
            }
            archivo.close();
            cantPtos = i;
            grafica = new QwtPlotCurve("Grafica");
            grafica->setRawSamples(x, y, cantPtos);
            grafica->attach(ui->qwtPlot);
            ui->statusBar->showMessage("Ultima grafica: " + nombresArchivos[cantA]);
            configuracion->setValue("Grafica/5/Ruta",configuracion->value("Grafica/4/Ruta"));
            configuracion->setValue("Grafica/5/Nombre",configuracion->value("Grafica/4/Nombre"));
            configuracion->setValue("Grafica/4/Ruta",configuracion->value("Grafica/3/Ruta"));
            configuracion->setValue("Grafica/4/Nombre",configuracion->value("Grafica/3/Nombre"));
            configuracion->setValue("Grafica/3/Ruta",configuracion->value("Grafica/2/Ruta"));
            configuracion->setValue("Grafica/3/Nombre",configuracion->value("Grafica/2/Nombre"));
            configuracion->setValue("Grafica/2/Ruta",configuracion->value("Grafica/1/Ruta"));
            configuracion->setValue("Grafica/2/Nombre",configuracion->value("Grafica/1/Nombre"));
            configuracion->setValue("Grafica/1/Ruta",nombresArchivos[cantA]);
            configuracion->setValue("Grafica/1/Nombre",nombresArchivos[cantA].mid(nombresArchivos[cantA].lastIndexOf('/')+1));
            actualizar();
            if(xMax > yMax)
                valMax = xMax;
            else
                valMax = yMax;
            if(xMin < yMin)
                valMin = xMin;
            else
                valMin = yMin;
            ui->menuValor_maximo->setEnabled(true);
            ui->menuValor_minimo->setEnabled(true);
            ui->actionValMax->setText(QString::number(valMax));
            ui->actionValMin->setText(QString::number(valMin));
            return true;
        }
    }
    else
        return false;
}

void VentanaPrincipal::actualizar(void)
{
    ui->actionArchivo1->setText(configuracion->value("Grafica/1/Nombre","").toString());
    ui->actionArchivo2->setText(configuracion->value("Grafica/2/Nombre","").toString());
    ui->actionArchivo3->setText(configuracion->value("Grafica/3/Nombre","").toString());
    ui->actionArchivo4->setText(configuracion->value("Grafica/4/Nombre","").toString());
    ui->actionArchivo5->setText(configuracion->value("Grafica/5/Nombre","").toString());
}

void VentanaPrincipal::on_actionArchivo1_triggered()
{
    flagArchivo = true;
    nuevaGrafica = configuracion->value("Grafica/1/Ruta").toString();
    ui->actionNueva_grafica->trigger();
    flagArchivo = false;
}

void VentanaPrincipal::on_actionArchivo2_triggered()
{
    flagArchivo = true;
    nuevaGrafica = configuracion->value("Grafica/2/Ruta").toString();
    ui->actionNueva_grafica->trigger();
    flagArchivo = false;
}

void VentanaPrincipal::on_actionArchivo3_triggered()
{
    flagArchivo = true;
    nuevaGrafica = configuracion->value("Grafica/3/Ruta").toString();
    ui->actionNueva_grafica->trigger();
    flagArchivo = false;
}

void VentanaPrincipal::on_actionArchivo4_triggered()
{
    flagArchivo = true;
    nuevaGrafica = configuracion->value("Grafica/4/Ruta").toString();
    ui->actionNueva_grafica->trigger();
    flagArchivo = false;
}

void VentanaPrincipal::on_actionArchivo5_triggered()
{
    flagArchivo = true;
    nuevaGrafica = configuracion->value("Grafica/5/Ruta").toString();
    ui->actionNueva_grafica->trigger();
    flagArchivo = false;
}

void VentanaPrincipal::inicio(void)
{
    cantG = 0;
    xMax = -1000;
    yMax = -1000;
    xMin = 1000;
    yMin = 1000;
    ui->menuGrafica_1->setEnabled(false);
    ui->menuGrafica_2->setEnabled(false);
    ui->menuGrafica_3->setEnabled(false);
    ui->menuGrafica_4->setEnabled(false);
    ui->menuGrafica_5->setEnabled(false);
    ui->menuCantidad_de_puntos->setEnabled(false);
    ui->menuValor_maximo->setEnabled(false);
    ui->menuValor_minimo->setEnabled(false);
}

void VentanaPrincipal::on_actionNuevo_triggered()
{
    ventanaNuevoArchivo *ventana = new ventanaNuevoArchivo(this);
    if(ventana->exec() == QDialog::Accepted)
        ui->statusBar->showMessage("Archivo generado");
    else
        ui->statusBar->showMessage("Cancelado");
}

void VentanaPrincipal::on_actionSalir_triggered()
{
    close();
}
