#ifndef VENTANANUEVOARCHIVO_H
#define VENTANANUEVOARCHIVO_H

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <ctime>
#include <iostream>
#include <cmath>
#include <QMessageBox>

namespace Ui {
class ventanaNuevoArchivo;
}

class ventanaNuevoArchivo : public QDialog
{
    Q_OBJECT
    
public:
    explicit ventanaNuevoArchivo(QWidget *parent = 0);
    ~ventanaNuevoArchivo();
    
private slots:
    void on_btnCarpeta_clicked();

    void on_btnGenerar_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::ventanaNuevoArchivo *ui;
    int cantPtos, aleatorio;
    double valMax, valMin, diferencia, aux, aumento;
    double *x, *y;
    QString direccion;
    QString nombre;
    QMessageBox msj;
};

#endif // VENTANANUEVOARCHIVO_H
