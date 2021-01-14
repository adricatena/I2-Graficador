/********************************************************************************
** Form generated from reading UI file 'ventananuevoarchivo.ui'
**
** Created: Tue 4. Dec 03:34:36 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANANUEVOARCHIVO_H
#define UI_VENTANANUEVOARCHIVO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaNuevoArchivo
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxSeno;
    QCheckBox *checkBoxCoseno;
    QCheckBox *checkBoxAleatorio;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labValorMaximo;
    QLineEdit *leValorMaximo;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labValorMinimo;
    QLineEdit *leValorMinimo;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labCantPtos;
    QLineEdit *leCantPtos;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labNombreArchivo;
    QLineEdit *leNombreArchivo;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnCarpeta;
    QLabel *labCarpeta;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btnGenerar;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnCancelar;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QDialog *ventanaNuevoArchivo)
    {
        if (ventanaNuevoArchivo->objectName().isEmpty())
            ventanaNuevoArchivo->setObjectName(QString::fromUtf8("ventanaNuevoArchivo"));
        ventanaNuevoArchivo->resize(385, 197);
        layoutWidget = new QWidget(ventanaNuevoArchivo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 365, 174));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBoxSeno = new QCheckBox(layoutWidget);
        checkBoxSeno->setObjectName(QString::fromUtf8("checkBoxSeno"));
        checkBoxSeno->setChecked(false);

        verticalLayout->addWidget(checkBoxSeno);

        checkBoxCoseno = new QCheckBox(layoutWidget);
        checkBoxCoseno->setObjectName(QString::fromUtf8("checkBoxCoseno"));

        verticalLayout->addWidget(checkBoxCoseno);

        checkBoxAleatorio = new QCheckBox(layoutWidget);
        checkBoxAleatorio->setObjectName(QString::fromUtf8("checkBoxAleatorio"));
        checkBoxAleatorio->setChecked(true);

        verticalLayout->addWidget(checkBoxAleatorio);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labValorMaximo = new QLabel(layoutWidget);
        labValorMaximo->setObjectName(QString::fromUtf8("labValorMaximo"));

        horizontalLayout->addWidget(labValorMaximo);

        leValorMaximo = new QLineEdit(layoutWidget);
        leValorMaximo->setObjectName(QString::fromUtf8("leValorMaximo"));

        horizontalLayout->addWidget(leValorMaximo);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        labValorMinimo = new QLabel(layoutWidget);
        labValorMinimo->setObjectName(QString::fromUtf8("labValorMinimo"));

        horizontalLayout_2->addWidget(labValorMinimo);

        leValorMinimo = new QLineEdit(layoutWidget);
        leValorMinimo->setObjectName(QString::fromUtf8("leValorMinimo"));

        horizontalLayout_2->addWidget(leValorMinimo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        labCantPtos = new QLabel(layoutWidget);
        labCantPtos->setObjectName(QString::fromUtf8("labCantPtos"));

        horizontalLayout_3->addWidget(labCantPtos);

        leCantPtos = new QLineEdit(layoutWidget);
        leCantPtos->setObjectName(QString::fromUtf8("leCantPtos"));

        horizontalLayout_3->addWidget(leCantPtos);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        labNombreArchivo = new QLabel(layoutWidget);
        labNombreArchivo->setObjectName(QString::fromUtf8("labNombreArchivo"));

        horizontalLayout_4->addWidget(labNombreArchivo);

        leNombreArchivo = new QLineEdit(layoutWidget);
        leNombreArchivo->setObjectName(QString::fromUtf8("leNombreArchivo"));

        horizontalLayout_4->addWidget(leNombreArchivo);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btnCarpeta = new QPushButton(layoutWidget);
        btnCarpeta->setObjectName(QString::fromUtf8("btnCarpeta"));

        horizontalLayout_5->addWidget(btnCarpeta);

        labCarpeta = new QLabel(layoutWidget);
        labCarpeta->setObjectName(QString::fromUtf8("labCarpeta"));

        horizontalLayout_5->addWidget(labCarpeta);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        btnGenerar = new QPushButton(layoutWidget);
        btnGenerar->setObjectName(QString::fromUtf8("btnGenerar"));

        horizontalLayout_6->addWidget(btnGenerar);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        btnCancelar = new QPushButton(layoutWidget);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));

        horizontalLayout_6->addWidget(btnCancelar);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_6);


        retranslateUi(ventanaNuevoArchivo);

        QMetaObject::connectSlotsByName(ventanaNuevoArchivo);
    } // setupUi

    void retranslateUi(QDialog *ventanaNuevoArchivo)
    {
        ventanaNuevoArchivo->setWindowTitle(QApplication::translate("ventanaNuevoArchivo", "Dialog", 0, QApplication::UnicodeUTF8));
        checkBoxSeno->setText(QApplication::translate("ventanaNuevoArchivo", "Seno", 0, QApplication::UnicodeUTF8));
        checkBoxCoseno->setText(QApplication::translate("ventanaNuevoArchivo", "Coseno", 0, QApplication::UnicodeUTF8));
        checkBoxAleatorio->setText(QApplication::translate("ventanaNuevoArchivo", "Aleatorio", 0, QApplication::UnicodeUTF8));
        labValorMaximo->setText(QApplication::translate("ventanaNuevoArchivo", "Valor m\303\241ximo:", 0, QApplication::UnicodeUTF8));
        leValorMaximo->setText(QApplication::translate("ventanaNuevoArchivo", "100", 0, QApplication::UnicodeUTF8));
        labValorMinimo->setText(QApplication::translate("ventanaNuevoArchivo", "Valor m\303\255nimo:", 0, QApplication::UnicodeUTF8));
        leValorMinimo->setText(QApplication::translate("ventanaNuevoArchivo", "-100", 0, QApplication::UnicodeUTF8));
        labCantPtos->setText(QApplication::translate("ventanaNuevoArchivo", "Cantidad de puntos:", 0, QApplication::UnicodeUTF8));
        leCantPtos->setText(QApplication::translate("ventanaNuevoArchivo", "1000", 0, QApplication::UnicodeUTF8));
        labNombreArchivo->setText(QApplication::translate("ventanaNuevoArchivo", "Nombre del archivo:", 0, QApplication::UnicodeUTF8));
        leNombreArchivo->setText(QApplication::translate("ventanaNuevoArchivo", "defecto.txt", 0, QApplication::UnicodeUTF8));
        btnCarpeta->setText(QApplication::translate("ventanaNuevoArchivo", "Carpeta", 0, QApplication::UnicodeUTF8));
        labCarpeta->setText(QApplication::translate("ventanaNuevoArchivo", "...", 0, QApplication::UnicodeUTF8));
        btnGenerar->setText(QApplication::translate("ventanaNuevoArchivo", "Generar", 0, QApplication::UnicodeUTF8));
        btnCancelar->setText(QApplication::translate("ventanaNuevoArchivo", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ventanaNuevoArchivo: public Ui_ventanaNuevoArchivo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANANUEVOARCHIVO_H
