#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QSettings>
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QGraphicsLineItem>
#include <QPen>
#include <qwt_plot_curve.h>
#include <vector>
#include <algorithm>
#include "ventananuevoarchivo.h"
#include "ui_ventananuevoarchivo.h"

namespace Ui {
class VentanaPrincipal;
}

class VentanaPrincipal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit VentanaPrincipal(QWidget *parent = 0);
    ~VentanaPrincipal();
    bool procesar(void);
    void actualizar(void);
    void inicio(void);

protected:
    void resizeEvent(QResizeEvent *event);
    
private slots:
    void on_actionNuevo_triggered();

    void on_actionNueva_grafica_triggered();

    void on_actionSuperponer_grafica_triggered();

    void on_actionArchivo1_triggered();

    void on_actionArchivo2_triggered();

    void on_actionArchivo3_triggered();

    void on_actionArchivo4_triggered();

    void on_actionArchivo5_triggered();

    void on_actionSalir_triggered();

private:
    Ui::VentanaPrincipal *ui;
    bool flag, flagArchivo, reiniciarGrafica;
    int cantG;
    int cantA;
    int cantPtos;
    double xMax, xMin, yMax, yMin, valMax, valMin;
    double *x, *y;
    QString nuevaGrafica;
    QString nombresArchivos[100];
    QwtPlotCurve *grafica;
    QPen pen;
    QMessageBox msj;
    QSettings *configuracion;

};

#endif // VENTANAPRINCIPAL_H
