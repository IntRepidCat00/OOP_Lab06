/********************************************************************************
** Form generated from reading UI file 'lab06_pnr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB06_PNR_H
#define UI_LAB06_PNR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab06_pnr
{
public:
    QWidget *centralwidget;
    QLabel *scalarProdLabel_pnr;
    QGroupBox *vector1Group_pnr;
    QLabel *axisXLabelV1_pnr;
    QLabel *axisYLabelV1_pnr;
    QLabel *axisZLabelV1_pnr;
    QLabel *lengthLabelV1_pnr;
    QLabel *lengthValueLabelV1_pnr;
    QLabel *axisZValueLabelV1_pnr;
    QLabel *axisYValueLabelV1_pnr;
    QLabel *axisXValueLabelV1_pnr;
    QLabel *vectorProdLabel_pnr;
    QGroupBox *Lab6Addition_pnr;
    QLabel *greaterThanLabel_pnr;
    QLabel *lessThanLabel_pnr;
    QLabel *equalsLabel_pnr;
    QLabel *greaterValLabel_pnr;
    QLabel *lessValLabel_pnr;
    QLabel *equalsValLabel_pnr;
    QPushButton *btnCompare_pnr;
    QLabel *numOfObjectsLabel_pnr;
    QLabel *numOfObjectsValLabel_pnr;
    QPushButton *btnNumOfObj_pnr;
    QGroupBox *operationGroup_pnr;
    QLabel *vectorForOperLabel_pnr;
    QRadioButton *radioButtonV1_pnr;
    QRadioButton *radioButtonV2_pnr;
    QLabel *axisZLabelOper_pnr_2;
    QLabel *axisXLabelOper_pnr_2;
    QLabel *axisYLabelOper_pnr_2;
    QLineEdit *lineEditAxisX_pnr;
    QLineEdit *lineEditAxisY_pnr;
    QLineEdit *lineEditAxisZ_pnr;
    QPushButton *btnSetX_pnr;
    QPushButton *btnSetY_pnr;
    QPushButton *btnSetZ_pnr;
    QPushButton *btnSetAll_pnr;
    QPushButton *btnAddVector_pnr;
    QPushButton *btnSubtrVector_pnr;
    QPushButton *btnMultByScalar_pnr;
    QPushButton *btnCalcLength_pnr;
    QPushButton *btnCalcScalarProd_pnr;
    QPushButton *btnCalcVectorProd_pnr;
    QLineEdit *lineEditNum_pnr;
    QLabel *numLabelOper_pnr;
    QGroupBox *vector2Group_pnr;
    QLabel *axisZLabelV2_pnr;
    QLabel *axisYLabelV2_pnr;
    QLabel *axisXLabelV2_pnr;
    QLabel *lengthLabelV2_pnr;
    QLabel *lengthValueLabelV2_pnr;
    QLabel *axisYValueLabelV2_pnr;
    QLabel *axisXValueLabelV2_pnr;
    QLabel *axisZValueLabelV2_pnr;
    QLabel *scalarProdValueLabel_pnr;
    QLabel *vectorProdValueLabel_pnr;

    void setupUi(QMainWindow *Lab06_pnr)
    {
        if (Lab06_pnr->objectName().isEmpty())
            Lab06_pnr->setObjectName(QString::fromUtf8("Lab06_pnr"));
        Lab06_pnr->resize(800, 658);
        centralwidget = new QWidget(Lab06_pnr);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scalarProdLabel_pnr = new QLabel(centralwidget);
        scalarProdLabel_pnr->setObjectName(QString::fromUtf8("scalarProdLabel_pnr"));
        scalarProdLabel_pnr->setGeometry(QRect(10, 220, 131, 31));
        QFont font;
        font.setPointSize(12);
        scalarProdLabel_pnr->setFont(font);
        vector1Group_pnr = new QGroupBox(centralwidget);
        vector1Group_pnr->setObjectName(QString::fromUtf8("vector1Group_pnr"));
        vector1Group_pnr->setGeometry(QRect(0, 0, 291, 211));
        vector1Group_pnr->setFont(font);
        axisXLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisXLabelV1_pnr->setObjectName(QString::fromUtf8("axisXLabelV1_pnr"));
        axisXLabelV1_pnr->setGeometry(QRect(10, 40, 63, 31));
        axisYLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisYLabelV1_pnr->setObjectName(QString::fromUtf8("axisYLabelV1_pnr"));
        axisYLabelV1_pnr->setGeometry(QRect(10, 80, 63, 31));
        axisZLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisZLabelV1_pnr->setObjectName(QString::fromUtf8("axisZLabelV1_pnr"));
        axisZLabelV1_pnr->setGeometry(QRect(10, 120, 63, 31));
        lengthLabelV1_pnr = new QLabel(vector1Group_pnr);
        lengthLabelV1_pnr->setObjectName(QString::fromUtf8("lengthLabelV1_pnr"));
        lengthLabelV1_pnr->setGeometry(QRect(10, 160, 63, 31));
        lengthValueLabelV1_pnr = new QLabel(vector1Group_pnr);
        lengthValueLabelV1_pnr->setObjectName(QString::fromUtf8("lengthValueLabelV1_pnr"));
        lengthValueLabelV1_pnr->setGeometry(QRect(90, 160, 191, 31));
        axisZValueLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisZValueLabelV1_pnr->setObjectName(QString::fromUtf8("axisZValueLabelV1_pnr"));
        axisZValueLabelV1_pnr->setGeometry(QRect(90, 120, 191, 31));
        axisYValueLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisYValueLabelV1_pnr->setObjectName(QString::fromUtf8("axisYValueLabelV1_pnr"));
        axisYValueLabelV1_pnr->setGeometry(QRect(90, 80, 191, 31));
        axisXValueLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisXValueLabelV1_pnr->setObjectName(QString::fromUtf8("axisXValueLabelV1_pnr"));
        axisXValueLabelV1_pnr->setGeometry(QRect(90, 40, 191, 31));
        vectorProdLabel_pnr = new QLabel(centralwidget);
        vectorProdLabel_pnr->setObjectName(QString::fromUtf8("vectorProdLabel_pnr"));
        vectorProdLabel_pnr->setGeometry(QRect(300, 220, 141, 31));
        vectorProdLabel_pnr->setFont(font);
        Lab6Addition_pnr = new QGroupBox(centralwidget);
        Lab6Addition_pnr->setObjectName(QString::fromUtf8("Lab6Addition_pnr"));
        Lab6Addition_pnr->setGeometry(QRect(600, 0, 191, 651));
        Lab6Addition_pnr->setFont(font);
        greaterThanLabel_pnr = new QLabel(Lab6Addition_pnr);
        greaterThanLabel_pnr->setObjectName(QString::fromUtf8("greaterThanLabel_pnr"));
        greaterThanLabel_pnr->setGeometry(QRect(10, 40, 181, 31));
        lessThanLabel_pnr = new QLabel(Lab6Addition_pnr);
        lessThanLabel_pnr->setObjectName(QString::fromUtf8("lessThanLabel_pnr"));
        lessThanLabel_pnr->setGeometry(QRect(10, 100, 181, 31));
        equalsLabel_pnr = new QLabel(Lab6Addition_pnr);
        equalsLabel_pnr->setObjectName(QString::fromUtf8("equalsLabel_pnr"));
        equalsLabel_pnr->setGeometry(QRect(10, 160, 181, 31));
        greaterValLabel_pnr = new QLabel(Lab6Addition_pnr);
        greaterValLabel_pnr->setObjectName(QString::fromUtf8("greaterValLabel_pnr"));
        greaterValLabel_pnr->setGeometry(QRect(10, 70, 181, 31));
        lessValLabel_pnr = new QLabel(Lab6Addition_pnr);
        lessValLabel_pnr->setObjectName(QString::fromUtf8("lessValLabel_pnr"));
        lessValLabel_pnr->setGeometry(QRect(10, 130, 181, 31));
        equalsValLabel_pnr = new QLabel(Lab6Addition_pnr);
        equalsValLabel_pnr->setObjectName(QString::fromUtf8("equalsValLabel_pnr"));
        equalsValLabel_pnr->setGeometry(QRect(10, 190, 181, 31));
        btnCompare_pnr = new QPushButton(Lab6Addition_pnr);
        btnCompare_pnr->setObjectName(QString::fromUtf8("btnCompare_pnr"));
        btnCompare_pnr->setGeometry(QRect(10, 240, 171, 51));
        numOfObjectsLabel_pnr = new QLabel(Lab6Addition_pnr);
        numOfObjectsLabel_pnr->setObjectName(QString::fromUtf8("numOfObjectsLabel_pnr"));
        numOfObjectsLabel_pnr->setGeometry(QRect(10, 310, 181, 31));
        numOfObjectsValLabel_pnr = new QLabel(Lab6Addition_pnr);
        numOfObjectsValLabel_pnr->setObjectName(QString::fromUtf8("numOfObjectsValLabel_pnr"));
        numOfObjectsValLabel_pnr->setGeometry(QRect(10, 350, 181, 31));
        btnNumOfObj_pnr = new QPushButton(Lab6Addition_pnr);
        btnNumOfObj_pnr->setObjectName(QString::fromUtf8("btnNumOfObj_pnr"));
        btnNumOfObj_pnr->setGeometry(QRect(10, 400, 171, 51));
        QFont font1;
        font1.setPointSize(8);
        btnNumOfObj_pnr->setFont(font1);
        operationGroup_pnr = new QGroupBox(centralwidget);
        operationGroup_pnr->setObjectName(QString::fromUtf8("operationGroup_pnr"));
        operationGroup_pnr->setGeometry(QRect(0, 250, 591, 401));
        operationGroup_pnr->setFont(font);
        vectorForOperLabel_pnr = new QLabel(operationGroup_pnr);
        vectorForOperLabel_pnr->setObjectName(QString::fromUtf8("vectorForOperLabel_pnr"));
        vectorForOperLabel_pnr->setGeometry(QRect(10, 40, 211, 31));
        radioButtonV1_pnr = new QRadioButton(operationGroup_pnr);
        radioButtonV1_pnr->setObjectName(QString::fromUtf8("radioButtonV1_pnr"));
        radioButtonV1_pnr->setGeometry(QRect(220, 40, 110, 31));
        radioButtonV1_pnr->setChecked(true);
        radioButtonV2_pnr = new QRadioButton(operationGroup_pnr);
        radioButtonV2_pnr->setObjectName(QString::fromUtf8("radioButtonV2_pnr"));
        radioButtonV2_pnr->setGeometry(QRect(340, 40, 110, 31));
        axisZLabelOper_pnr_2 = new QLabel(operationGroup_pnr);
        axisZLabelOper_pnr_2->setObjectName(QString::fromUtf8("axisZLabelOper_pnr_2"));
        axisZLabelOper_pnr_2->setGeometry(QRect(10, 170, 63, 31));
        axisXLabelOper_pnr_2 = new QLabel(operationGroup_pnr);
        axisXLabelOper_pnr_2->setObjectName(QString::fromUtf8("axisXLabelOper_pnr_2"));
        axisXLabelOper_pnr_2->setGeometry(QRect(10, 90, 63, 31));
        axisYLabelOper_pnr_2 = new QLabel(operationGroup_pnr);
        axisYLabelOper_pnr_2->setObjectName(QString::fromUtf8("axisYLabelOper_pnr_2"));
        axisYLabelOper_pnr_2->setGeometry(QRect(10, 130, 63, 31));
        lineEditAxisX_pnr = new QLineEdit(operationGroup_pnr);
        lineEditAxisX_pnr->setObjectName(QString::fromUtf8("lineEditAxisX_pnr"));
        lineEditAxisX_pnr->setGeometry(QRect(80, 90, 501, 31));
        lineEditAxisY_pnr = new QLineEdit(operationGroup_pnr);
        lineEditAxisY_pnr->setObjectName(QString::fromUtf8("lineEditAxisY_pnr"));
        lineEditAxisY_pnr->setGeometry(QRect(80, 130, 501, 31));
        lineEditAxisZ_pnr = new QLineEdit(operationGroup_pnr);
        lineEditAxisZ_pnr->setObjectName(QString::fromUtf8("lineEditAxisZ_pnr"));
        lineEditAxisZ_pnr->setGeometry(QRect(80, 170, 501, 31));
        btnSetX_pnr = new QPushButton(operationGroup_pnr);
        btnSetX_pnr->setObjectName(QString::fromUtf8("btnSetX_pnr"));
        btnSetX_pnr->setGeometry(QRect(20, 250, 131, 41));
        btnSetY_pnr = new QPushButton(operationGroup_pnr);
        btnSetY_pnr->setObjectName(QString::fromUtf8("btnSetY_pnr"));
        btnSetY_pnr->setGeometry(QRect(160, 250, 131, 41));
        btnSetZ_pnr = new QPushButton(operationGroup_pnr);
        btnSetZ_pnr->setObjectName(QString::fromUtf8("btnSetZ_pnr"));
        btnSetZ_pnr->setGeometry(QRect(300, 250, 131, 41));
        btnSetAll_pnr = new QPushButton(operationGroup_pnr);
        btnSetAll_pnr->setObjectName(QString::fromUtf8("btnSetAll_pnr"));
        btnSetAll_pnr->setGeometry(QRect(440, 250, 131, 41));
        btnAddVector_pnr = new QPushButton(operationGroup_pnr);
        btnAddVector_pnr->setObjectName(QString::fromUtf8("btnAddVector_pnr"));
        btnAddVector_pnr->setGeometry(QRect(20, 300, 131, 41));
        btnSubtrVector_pnr = new QPushButton(operationGroup_pnr);
        btnSubtrVector_pnr->setObjectName(QString::fromUtf8("btnSubtrVector_pnr"));
        btnSubtrVector_pnr->setGeometry(QRect(160, 300, 131, 41));
        QFont font2;
        font2.setPointSize(9);
        btnSubtrVector_pnr->setFont(font2);
        btnMultByScalar_pnr = new QPushButton(operationGroup_pnr);
        btnMultByScalar_pnr->setObjectName(QString::fromUtf8("btnMultByScalar_pnr"));
        btnMultByScalar_pnr->setGeometry(QRect(300, 300, 131, 41));
        btnMultByScalar_pnr->setFont(font2);
        btnCalcLength_pnr = new QPushButton(operationGroup_pnr);
        btnCalcLength_pnr->setObjectName(QString::fromUtf8("btnCalcLength_pnr"));
        btnCalcLength_pnr->setGeometry(QRect(440, 300, 131, 41));
        btnCalcScalarProd_pnr = new QPushButton(operationGroup_pnr);
        btnCalcScalarProd_pnr->setObjectName(QString::fromUtf8("btnCalcScalarProd_pnr"));
        btnCalcScalarProd_pnr->setGeometry(QRect(20, 350, 271, 41));
        btnCalcScalarProd_pnr->setFont(font);
        btnCalcVectorProd_pnr = new QPushButton(operationGroup_pnr);
        btnCalcVectorProd_pnr->setObjectName(QString::fromUtf8("btnCalcVectorProd_pnr"));
        btnCalcVectorProd_pnr->setGeometry(QRect(300, 350, 271, 41));
        btnCalcVectorProd_pnr->setFont(font);
        lineEditNum_pnr = new QLineEdit(operationGroup_pnr);
        lineEditNum_pnr->setObjectName(QString::fromUtf8("lineEditNum_pnr"));
        lineEditNum_pnr->setGeometry(QRect(80, 210, 501, 31));
        numLabelOper_pnr = new QLabel(operationGroup_pnr);
        numLabelOper_pnr->setObjectName(QString::fromUtf8("numLabelOper_pnr"));
        numLabelOper_pnr->setGeometry(QRect(10, 210, 63, 31));
        vector2Group_pnr = new QGroupBox(centralwidget);
        vector2Group_pnr->setObjectName(QString::fromUtf8("vector2Group_pnr"));
        vector2Group_pnr->setGeometry(QRect(300, 0, 291, 211));
        vector2Group_pnr->setFont(font);
        axisZLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisZLabelV2_pnr->setObjectName(QString::fromUtf8("axisZLabelV2_pnr"));
        axisZLabelV2_pnr->setGeometry(QRect(10, 120, 63, 31));
        axisYLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisYLabelV2_pnr->setObjectName(QString::fromUtf8("axisYLabelV2_pnr"));
        axisYLabelV2_pnr->setGeometry(QRect(10, 80, 63, 31));
        axisXLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisXLabelV2_pnr->setObjectName(QString::fromUtf8("axisXLabelV2_pnr"));
        axisXLabelV2_pnr->setGeometry(QRect(10, 40, 63, 31));
        lengthLabelV2_pnr = new QLabel(vector2Group_pnr);
        lengthLabelV2_pnr->setObjectName(QString::fromUtf8("lengthLabelV2_pnr"));
        lengthLabelV2_pnr->setGeometry(QRect(10, 160, 63, 31));
        lengthValueLabelV2_pnr = new QLabel(vector2Group_pnr);
        lengthValueLabelV2_pnr->setObjectName(QString::fromUtf8("lengthValueLabelV2_pnr"));
        lengthValueLabelV2_pnr->setGeometry(QRect(90, 160, 191, 31));
        axisYValueLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisYValueLabelV2_pnr->setObjectName(QString::fromUtf8("axisYValueLabelV2_pnr"));
        axisYValueLabelV2_pnr->setGeometry(QRect(90, 80, 191, 31));
        axisXValueLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisXValueLabelV2_pnr->setObjectName(QString::fromUtf8("axisXValueLabelV2_pnr"));
        axisXValueLabelV2_pnr->setGeometry(QRect(90, 40, 191, 31));
        axisZValueLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisZValueLabelV2_pnr->setObjectName(QString::fromUtf8("axisZValueLabelV2_pnr"));
        axisZValueLabelV2_pnr->setGeometry(QRect(90, 120, 191, 31));
        scalarProdValueLabel_pnr = new QLabel(centralwidget);
        scalarProdValueLabel_pnr->setObjectName(QString::fromUtf8("scalarProdValueLabel_pnr"));
        scalarProdValueLabel_pnr->setGeometry(QRect(150, 220, 141, 31));
        scalarProdValueLabel_pnr->setFont(font);
        vectorProdValueLabel_pnr = new QLabel(centralwidget);
        vectorProdValueLabel_pnr->setObjectName(QString::fromUtf8("vectorProdValueLabel_pnr"));
        vectorProdValueLabel_pnr->setGeometry(QRect(450, 220, 141, 31));
        vectorProdValueLabel_pnr->setFont(font);
        Lab06_pnr->setCentralWidget(centralwidget);

        retranslateUi(Lab06_pnr);

        QMetaObject::connectSlotsByName(Lab06_pnr);
    } // setupUi

    void retranslateUi(QMainWindow *Lab06_pnr)
    {
        Lab06_pnr->setWindowTitle(QCoreApplication::translate("Lab06_pnr", "Lab06_pnr", nullptr));
        scalarProdLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Scalar Product:", nullptr));
        vector1Group_pnr->setTitle(QCoreApplication::translate("Lab06_pnr", "Vector 1", nullptr));
        axisXLabelV1_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Axis X:", nullptr));
        axisYLabelV1_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Axis Y:", nullptr));
        axisZLabelV1_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Axis Z:", nullptr));
        lengthLabelV1_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Length:", nullptr));
        lengthValueLabelV1_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        axisZValueLabelV1_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        axisYValueLabelV1_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        axisXValueLabelV1_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        vectorProdLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Vector Product:", nullptr));
        Lab6Addition_pnr->setTitle(QCoreApplication::translate("Lab06_pnr", "Lab6 Addition", nullptr));
        greaterThanLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "V1 Greater than V2:", nullptr));
        lessThanLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "V1 Less than V2:", nullptr));
        equalsLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "V1 Equals V2:", nullptr));
        greaterValLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        lessValLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        equalsValLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        btnCompare_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Compare", nullptr));
        numOfObjectsLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Number of objects:", nullptr));
        numOfObjectsValLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        btnNumOfObj_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Check Number of Objects", nullptr));
        operationGroup_pnr->setTitle(QCoreApplication::translate("Lab06_pnr", "Operation", nullptr));
        vectorForOperLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Vector for operation:", nullptr));
        radioButtonV1_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Vector 1", nullptr));
        radioButtonV2_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Vector 2", nullptr));
        axisZLabelOper_pnr_2->setText(QCoreApplication::translate("Lab06_pnr", "Axis Z:", nullptr));
        axisXLabelOper_pnr_2->setText(QCoreApplication::translate("Lab06_pnr", "Axis X:", nullptr));
        axisYLabelOper_pnr_2->setText(QCoreApplication::translate("Lab06_pnr", "Axis Y:", nullptr));
        btnSetX_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Set X", nullptr));
        btnSetY_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Set Y", nullptr));
        btnSetZ_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Set Z", nullptr));
        btnSetAll_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Set All", nullptr));
        btnAddVector_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Add Vector", nullptr));
        btnSubtrVector_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Subtract Vector", nullptr));
        btnMultByScalar_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Multiply by Scalar", nullptr));
        btnCalcLength_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Calc Length", nullptr));
        btnCalcScalarProd_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Calc Scalar Product", nullptr));
        btnCalcVectorProd_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Calc Vector Product", nullptr));
        lineEditNum_pnr->setText(QString());
        numLabelOper_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Num:", nullptr));
        vector2Group_pnr->setTitle(QCoreApplication::translate("Lab06_pnr", "Vector 2", nullptr));
        axisZLabelV2_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Axis Z:", nullptr));
        axisYLabelV2_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Axis Y:", nullptr));
        axisXLabelV2_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Axis X:", nullptr));
        lengthLabelV2_pnr->setText(QCoreApplication::translate("Lab06_pnr", "Length:", nullptr));
        lengthValueLabelV2_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        axisYValueLabelV2_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        axisXValueLabelV2_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        axisZValueLabelV2_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        scalarProdValueLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
        vectorProdValueLabel_pnr->setText(QCoreApplication::translate("Lab06_pnr", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab06_pnr: public Ui_Lab06_pnr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB06_PNR_H
