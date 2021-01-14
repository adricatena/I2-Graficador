/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created: Tue 4. Dec 03:15:31 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRINCIPAL_H
#define UI_VENTANAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_VentanaPrincipal
{
public:
    QAction *actionNuevo;
    QAction *actionArchivo1;
    QAction *actionArchivo2;
    QAction *actionArchivo3;
    QAction *actionArchivo4;
    QAction *actionArchivo5;
    QAction *actionSalir;
    QAction *actionNueva_grafica;
    QAction *actionSuperponer_grafica;
    QAction *actionValMax;
    QAction *actionValMin;
    QAction *actionGrafica1;
    QAction *actionGrafica2;
    QAction *actionGrafica3;
    QAction *actionGrafica4;
    QAction *actionGrafica5;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QwtPlot *qwtPlot;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *labGrafica1;
    QLabel *labGrafica2;
    QLabel *labGrafica3;
    QLabel *labGrafica4;
    QLabel *labGrafica5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuGrafica;
    QMenu *menuCantidad_de_puntos;
    QMenu *menuGrafica_1;
    QMenu *menuGrafica_2;
    QMenu *menuGrafica_3;
    QMenu *menuGrafica_4;
    QMenu *menuGrafica_5;
    QMenu *menuValor_maximo;
    QMenu *menuValor_minimo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QString::fromUtf8("VentanaPrincipal"));
        VentanaPrincipal->resize(690, 416);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(30);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VentanaPrincipal->sizePolicy().hasHeightForWidth());
        VentanaPrincipal->setSizePolicy(sizePolicy);
        actionNuevo = new QAction(VentanaPrincipal);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/New-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon);
        actionArchivo1 = new QAction(VentanaPrincipal);
        actionArchivo1->setObjectName(QString::fromUtf8("actionArchivo1"));
        actionArchivo2 = new QAction(VentanaPrincipal);
        actionArchivo2->setObjectName(QString::fromUtf8("actionArchivo2"));
        actionArchivo3 = new QAction(VentanaPrincipal);
        actionArchivo3->setObjectName(QString::fromUtf8("actionArchivo3"));
        actionArchivo4 = new QAction(VentanaPrincipal);
        actionArchivo4->setObjectName(QString::fromUtf8("actionArchivo4"));
        actionArchivo5 = new QAction(VentanaPrincipal);
        actionArchivo5->setObjectName(QString::fromUtf8("actionArchivo5"));
        actionSalir = new QAction(VentanaPrincipal);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/Exit-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon1);
        actionNueva_grafica = new QAction(VentanaPrincipal);
        actionNueva_grafica->setObjectName(QString::fromUtf8("actionNueva_grafica"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/Brushes-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNueva_grafica->setIcon(icon2);
        actionSuperponer_grafica = new QAction(VentanaPrincipal);
        actionSuperponer_grafica->setObjectName(QString::fromUtf8("actionSuperponer_grafica"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/Graphique (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSuperponer_grafica->setIcon(icon3);
        actionValMax = new QAction(VentanaPrincipal);
        actionValMax->setObjectName(QString::fromUtf8("actionValMax"));
        actionValMin = new QAction(VentanaPrincipal);
        actionValMin->setObjectName(QString::fromUtf8("actionValMin"));
        actionGrafica1 = new QAction(VentanaPrincipal);
        actionGrafica1->setObjectName(QString::fromUtf8("actionGrafica1"));
        actionGrafica2 = new QAction(VentanaPrincipal);
        actionGrafica2->setObjectName(QString::fromUtf8("actionGrafica2"));
        actionGrafica3 = new QAction(VentanaPrincipal);
        actionGrafica3->setObjectName(QString::fromUtf8("actionGrafica3"));
        actionGrafica4 = new QAction(VentanaPrincipal);
        actionGrafica4->setObjectName(QString::fromUtf8("actionGrafica4"));
        actionGrafica5 = new QAction(VentanaPrincipal);
        actionGrafica5->setObjectName(QString::fromUtf8("actionGrafica5"));
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(13, 13, 359, 235));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        qwtPlot = new QwtPlot(layoutWidget);
        qwtPlot->setObjectName(QString::fromUtf8("qwtPlot"));

        horizontalLayout->addWidget(qwtPlot);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        labGrafica1 = new QLabel(layoutWidget);
        labGrafica1->setObjectName(QString::fromUtf8("labGrafica1"));

        verticalLayout->addWidget(labGrafica1);

        labGrafica2 = new QLabel(layoutWidget);
        labGrafica2->setObjectName(QString::fromUtf8("labGrafica2"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        labGrafica2->setPalette(palette);

        verticalLayout->addWidget(labGrafica2);

        labGrafica3 = new QLabel(layoutWidget);
        labGrafica3->setObjectName(QString::fromUtf8("labGrafica3"));
        QPalette palette1;
        QBrush brush2(QColor(0, 170, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        labGrafica3->setPalette(palette1);

        verticalLayout->addWidget(labGrafica3);

        labGrafica4 = new QLabel(layoutWidget);
        labGrafica4->setObjectName(QString::fromUtf8("labGrafica4"));
        QPalette palette2;
        QBrush brush3(QColor(0, 0, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        labGrafica4->setPalette(palette2);

        verticalLayout->addWidget(labGrafica4);

        labGrafica5 = new QLabel(layoutWidget);
        labGrafica5->setObjectName(QString::fromUtf8("labGrafica5"));
        QPalette palette3;
        QBrush brush4(QColor(255, 255, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        labGrafica5->setPalette(palette3);

        verticalLayout->addWidget(labGrafica5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        VentanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VentanaPrincipal);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 690, 21));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuGrafica = new QMenu(menuBar);
        menuGrafica->setObjectName(QString::fromUtf8("menuGrafica"));
        menuCantidad_de_puntos = new QMenu(menuGrafica);
        menuCantidad_de_puntos->setObjectName(QString::fromUtf8("menuCantidad_de_puntos"));
        menuGrafica_1 = new QMenu(menuCantidad_de_puntos);
        menuGrafica_1->setObjectName(QString::fromUtf8("menuGrafica_1"));
        menuGrafica_2 = new QMenu(menuCantidad_de_puntos);
        menuGrafica_2->setObjectName(QString::fromUtf8("menuGrafica_2"));
        menuGrafica_3 = new QMenu(menuCantidad_de_puntos);
        menuGrafica_3->setObjectName(QString::fromUtf8("menuGrafica_3"));
        menuGrafica_4 = new QMenu(menuCantidad_de_puntos);
        menuGrafica_4->setObjectName(QString::fromUtf8("menuGrafica_4"));
        menuGrafica_5 = new QMenu(menuCantidad_de_puntos);
        menuGrafica_5->setObjectName(QString::fromUtf8("menuGrafica_5"));
        menuValor_maximo = new QMenu(menuGrafica);
        menuValor_maximo->setObjectName(QString::fromUtf8("menuValor_maximo"));
        menuValor_minimo = new QMenu(menuGrafica);
        menuValor_minimo->setObjectName(QString::fromUtf8("menuValor_minimo"));
        VentanaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VentanaPrincipal);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        VentanaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        VentanaPrincipal->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(VentanaPrincipal);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VentanaPrincipal->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuGrafica->menuAction());
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionArchivo1);
        menuArchivo->addAction(actionArchivo2);
        menuArchivo->addAction(actionArchivo3);
        menuArchivo->addAction(actionArchivo4);
        menuArchivo->addAction(actionArchivo5);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuGrafica->addAction(actionNueva_grafica);
        menuGrafica->addAction(actionSuperponer_grafica);
        menuGrafica->addSeparator();
        menuGrafica->addAction(menuCantidad_de_puntos->menuAction());
        menuGrafica->addAction(menuValor_maximo->menuAction());
        menuGrafica->addAction(menuValor_minimo->menuAction());
        menuCantidad_de_puntos->addAction(menuGrafica_1->menuAction());
        menuCantidad_de_puntos->addAction(menuGrafica_2->menuAction());
        menuCantidad_de_puntos->addAction(menuGrafica_3->menuAction());
        menuCantidad_de_puntos->addAction(menuGrafica_4->menuAction());
        menuCantidad_de_puntos->addAction(menuGrafica_5->menuAction());
        menuGrafica_1->addAction(actionGrafica1);
        menuGrafica_2->addAction(actionGrafica2);
        menuGrafica_3->addAction(actionGrafica3);
        menuGrafica_4->addAction(actionGrafica4);
        menuGrafica_5->addAction(actionGrafica5);
        menuValor_maximo->addAction(actionValMax);
        menuValor_minimo->addAction(actionValMin);
        mainToolBar->addAction(actionNuevo);
        mainToolBar->addAction(actionNueva_grafica);
        mainToolBar->addAction(actionSuperponer_grafica);
        mainToolBar->addAction(actionSalir);

        retranslateUi(VentanaPrincipal);

        QMetaObject::connectSlotsByName(VentanaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaPrincipal)
    {
        VentanaPrincipal->setWindowTitle(QApplication::translate("VentanaPrincipal", "VentanaPrincipal", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("VentanaPrincipal", "Nuevo archivo", 0, QApplication::UnicodeUTF8));
        actionArchivo1->setText(QString());
        actionArchivo2->setText(QString());
        actionArchivo3->setText(QString());
        actionArchivo4->setText(QString());
        actionArchivo5->setText(QString());
        actionSalir->setText(QApplication::translate("VentanaPrincipal", "Salir", 0, QApplication::UnicodeUTF8));
        actionNueva_grafica->setText(QApplication::translate("VentanaPrincipal", "Nueva grafica", 0, QApplication::UnicodeUTF8));
        actionSuperponer_grafica->setText(QApplication::translate("VentanaPrincipal", "Superponer grafica", 0, QApplication::UnicodeUTF8));
        actionValMax->setText(QString());
        actionValMin->setText(QString());
        actionGrafica1->setText(QString());
        actionGrafica2->setText(QString());
        actionGrafica3->setText(QString());
        actionGrafica4->setText(QString());
        actionGrafica5->setText(QString());
        labGrafica1->setText(QApplication::translate("VentanaPrincipal", "Grafica 1", 0, QApplication::UnicodeUTF8));
        labGrafica2->setText(QApplication::translate("VentanaPrincipal", "Grafica 2", 0, QApplication::UnicodeUTF8));
        labGrafica3->setText(QApplication::translate("VentanaPrincipal", "Grafica 3", 0, QApplication::UnicodeUTF8));
        labGrafica4->setText(QApplication::translate("VentanaPrincipal", "Grafica 4", 0, QApplication::UnicodeUTF8));
        labGrafica5->setText(QApplication::translate("VentanaPrincipal", "Grafica 5", 0, QApplication::UnicodeUTF8));
        menuArchivo->setTitle(QApplication::translate("VentanaPrincipal", "Archivo", 0, QApplication::UnicodeUTF8));
        menuGrafica->setTitle(QApplication::translate("VentanaPrincipal", "Grafica", 0, QApplication::UnicodeUTF8));
        menuCantidad_de_puntos->setTitle(QApplication::translate("VentanaPrincipal", "Cantidad de puntos", 0, QApplication::UnicodeUTF8));
        menuGrafica_1->setTitle(QApplication::translate("VentanaPrincipal", "Grafica 1", 0, QApplication::UnicodeUTF8));
        menuGrafica_2->setTitle(QApplication::translate("VentanaPrincipal", "Grafica 2", 0, QApplication::UnicodeUTF8));
        menuGrafica_3->setTitle(QApplication::translate("VentanaPrincipal", "Grafica 3", 0, QApplication::UnicodeUTF8));
        menuGrafica_4->setTitle(QApplication::translate("VentanaPrincipal", "Grafica 4", 0, QApplication::UnicodeUTF8));
        menuGrafica_5->setTitle(QApplication::translate("VentanaPrincipal", "Grafica 5", 0, QApplication::UnicodeUTF8));
        menuValor_maximo->setTitle(QApplication::translate("VentanaPrincipal", "Valor m\303\241ximo", 0, QApplication::UnicodeUTF8));
        menuValor_minimo->setTitle(QApplication::translate("VentanaPrincipal", "Valor m\303\255nimo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
