#include "lab06_pnr.h"
#include "ui_lab06_pnr.h"
#include <cmath>

Lab06_pnr::Lab06_pnr(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lab06_pnr)
{
    ui->setupUi(this);
}

Lab06_pnr::~Lab06_pnr()
{
    delete ui;
}

int Vector::objNum = 0;

void Vector::addVector(double x2, double y2, double z2)
{
    axisX += x2;
    axisY += y2;
    axisZ += z2;
}

void Vector::subtractVector(double x2, double y2, double z2)
{
    axisX -= x2;
    axisY -= y2;
    axisZ -= z2;
}

void Vector::multiplyByScalar(double mult)
{
    axisX *= mult;
    axisY *= mult;
    axisZ *= mult;
}

double Vector::calcVectorLength()
{
    return sqrt(axisX*axisX + axisY*axisY + axisZ*axisZ);
}

double Vector::calcScalarProduct(double x2, double y2, double z2)
{
    return (axisX*x2 + axisY*y2 + axisZ*z2);
}

double Vector::calcVectorProduct(double x2, double y2, double z2)
{
    double newX, newY, newZ;

    newX = axisY * z2 - y2 * axisZ;
    newY = (axisX * z2 - x2 * axisZ)*(-1);
    newZ = axisX * y2 - x2 * axisY;

    axisX = newX;
    axisY = newY;
    axisZ = newZ;

    return calcVectorLength();
}

void Lab06_pnr::updateData()
{
    ui->axisXValueLabelV1_pnr->setText(QString::number(v1.getAxisX()));
    ui->axisXValueLabelV2_pnr->setText(QString::number(v2.getAxisX()));

    ui->axisYValueLabelV1_pnr->setText(QString::number(v1.getAxisY()));
    ui->axisYValueLabelV2_pnr->setText(QString::number(v2.getAxisY()));

    ui->axisZValueLabelV1_pnr->setText(QString::number(v1.getAxisZ()));
    ui->axisZValueLabelV2_pnr->setText(QString::number(v2.getAxisZ()));
}

void Lab06_pnr::on_btnSetX_pnr_clicked()
{
    double number;
    if(!ui->lineEditAxisX_pnr->text().isEmpty())
    {
        number = ui->lineEditAxisX_pnr->text().toDouble();
        if(ui->radioButtonV1_pnr->isChecked())
        {
            v1.setAxisX(number);
        } else if(ui->radioButtonV2_pnr->isChecked())
        {
            v2.setAxisX(number);
        }
        updateData();
    }

}


void Lab06_pnr::on_btnSetY_pnr_clicked()
{
    double number;
    if(!ui->lineEditAxisY_pnr->text().isEmpty())
    {
        number = ui->lineEditAxisY_pnr->text().toDouble();
        if(ui->radioButtonV1_pnr->isChecked())
        {
            v1.setAxisY(number);
        } else if(ui->radioButtonV2_pnr->isChecked())
        {
            v2.setAxisY(number);
        }
        updateData();
    }

}


void Lab06_pnr::on_btnSetZ_pnr_clicked()
{
    double number;
    if(!ui->lineEditAxisZ_pnr->text().isEmpty())
    {
        number = ui->lineEditAxisZ_pnr->text().toDouble();
        if(ui->radioButtonV1_pnr->isChecked())
        {
            v1.setAxisZ(number);
        } else if(ui->radioButtonV2_pnr->isChecked())
        {
            v2.setAxisZ(number);
        }
        updateData();
    }

}


void Lab06_pnr::on_btnSetAll_pnr_clicked()
{
//    double numberX, numberY, numberZ;
//    if(!ui->lineEditAxisX_pnr->text().isEmpty() ||
//            !ui->lineEditAxisY_pnr->text().isEmpty() ||
//            !ui->lineEditAxisZ_pnr->text().isEmpty())
//    {
//        numberX = ui->lineEditAxisX_pnr->text().toDouble();
//        numberY = ui->lineEditAxisY_pnr->text().toDouble();
//        numberZ = ui->lineEditAxisZ_pnr->text().toDouble();
//        if(ui->radioButtonV1_pnr->isChecked())
//        {
//            v1.setAxisX(numberX);
//            v1.setAxisY(numberY);
//            v1.setAxisZ(numberZ);
//        } else if(ui->radioButtonV2_pnr->isChecked())
//        {
//            v2.setAxisX(numberX);
//            v2.setAxisY(numberY);
//            v2.setAxisZ(numberZ);
//        }
//        updateData();
//    }

    QLabel *labels[3];
    QLineEdit *edits[3];

    edits[0] = ui->lineEditAxisX_pnr;
    edits[1] = ui->lineEditAxisY_pnr;
    edits[2] = ui->lineEditAxisZ_pnr;

    if(!ui->lineEditAxisX_pnr->text().isEmpty() ||
            !ui->lineEditAxisY_pnr->text().isEmpty() ||
            !ui->lineEditAxisZ_pnr->text().isEmpty())
    {
        if(ui->radioButtonV1_pnr->isChecked())
        {
            labels[0] = ui->axisXValueLabelV1_pnr;
            labels[1] = ui->axisYValueLabelV1_pnr;
            labels[2] = ui->axisZValueLabelV1_pnr;

            v1 << edits;

            v1 >> labels;
        } else
        {
            labels[0] = ui->axisXValueLabelV2_pnr;
            labels[1] = ui->axisYValueLabelV2_pnr;
            labels[2] = ui->axisZValueLabelV2_pnr;

            v2 << edits;

            v2 >> labels;
        }
    }



}


void Lab06_pnr::on_btnAddVector_pnr_clicked()
{
//    double numberX, numberY, numberZ;
//    if(ui->radioButtonV1_pnr->isChecked())
//    {
//        numberX = v2.getAxisX();
//        numberY = v2.getAxisY();
//        numberZ = v2.getAxisZ();

//        v1.addVector(numberX, numberY, numberZ);
//    } else if(ui->radioButtonV2_pnr->isChecked())
//    {
//        numberX = v1.getAxisX();
//        numberY = v1.getAxisY();
//        numberZ = v1.getAxisZ();

//        v2.addVector(numberX, numberY, numberZ);
//    }

    if(ui->radioButtonV1_pnr->isChecked())
    {
        v1=v1+v2;
    } else if(ui->radioButtonV2_pnr->isChecked())
    {
        v2=v1+v2;
    }


    updateData();
}


void Lab06_pnr::on_btnSubtrVector_pnr_clicked()
{
//    double numberX, numberY, numberZ;
//    if(ui->radioButtonV1_pnr->isChecked())
//    {
//        numberX = v2.getAxisX();
//        numberY = v2.getAxisY();
//        numberZ = v2.getAxisZ();

//        v1.subtractVector(numberX, numberY, numberZ);
//    } else if(ui->radioButtonV2_pnr->isChecked())
//    {
//        numberX = v1.getAxisX();
//        numberY = v1.getAxisY();
//        numberZ = v1.getAxisZ();

//        v2.subtractVector(numberX, numberY, numberZ);
//    }

    if(ui->radioButtonV1_pnr->isChecked())
    {
        v1=v1-v2;
    } else if(ui->radioButtonV2_pnr->isChecked())
    {
        v2=v2-v1;
    }

    updateData();
}


void Lab06_pnr::on_btnMultByScalar_pnr_clicked()
{
//    double mult;

//    if(!ui->lineEditNum_pnr->text().isEmpty())
//    {
//        mult = ui->lineEditNum_pnr->text().toDouble();
//        if(ui->radioButtonV1_pnr->isChecked())
//        {
//            v1.multiplyByScalar(mult);
//        } else if(ui->radioButtonV2_pnr->isChecked())
//        {
//            v2.multiplyByScalar(mult);
//        }

//        updateData();
//    }
    double mult;

    if(!ui->lineEditNum_pnr->text().isEmpty())
    {
        mult = ui->lineEditNum_pnr->text().toDouble();
        if(ui->radioButtonV1_pnr->isChecked())
        {
            v1 % mult;
        } else if(ui->radioButtonV2_pnr->isChecked())
        {
            v2 % mult;
        }

        updateData();
    }
}


void Lab06_pnr::on_btnCalcLength_pnr_clicked()
{
    double length;

    updateData();
    if(ui->radioButtonV1_pnr->isChecked())
    {
        length = v1.calcVectorLength();
        ui->lengthValueLabelV1_pnr->setText(QString::number(length));
    } else if(ui->radioButtonV2_pnr->isChecked())
    {
        length = v2.calcVectorLength();
        ui->lengthValueLabelV2_pnr->setText(QString::number(length));
    }
}


void Lab06_pnr::on_btnCalcScalarProd_pnr_clicked()
{
    //    double scalarProd, numberX, numberY, numberZ;

//    updateData();
//    if(ui->radioButtonV1_pnr->isChecked())
//    {
//        numberX = v2.getAxisX();
//        numberY = v2.getAxisY();
//        numberZ = v2.getAxisZ();

//        scalarProd = v1.calcScalarProduct(numberX, numberY, numberZ);
//        ui->scalarProdValueLabel_pnr->setText(QString::number(scalarProd));
//    } else if(ui->radioButtonV2_pnr->isChecked())
//    {
//        numberX = v1.getAxisX();
//        numberY = v1.getAxisY();
//        numberZ = v1.getAxisZ();

//        scalarProd = v2.calcScalarProduct(numberX, numberY, numberZ);
//        ui->scalarProdValueLabel_pnr->setText(QString::number(scalarProd));
//    }

    double scalarProd;

    updateData();
    if(ui->radioButtonV1_pnr->isChecked())
    {
        scalarProd = v1*v2;
        ui->scalarProdValueLabel_pnr->setText(QString::number(scalarProd));
    } else if(ui->radioButtonV2_pnr->isChecked())
    {
        scalarProd = v1*v2;
        ui->scalarProdValueLabel_pnr->setText(QString::number(scalarProd));
    }
}


void Lab06_pnr::on_btnCalcVectorProd_pnr_clicked()
{
//    double vectorProd, numberX, numberY, numberZ;

//    updateData();
//    if(ui->radioButtonV1_pnr->isChecked())
//    {
//        numberX = v2.getAxisX();
//        numberY = v2.getAxisY();
//        numberZ = v2.getAxisZ();

//        vectorProd = v1.calcVectorProduct(numberX, numberY, numberZ);
//        ui->vectorProdValueLabel_pnr->setText(QString::number(vectorProd));
//        updateData();
//    } else if(ui->radioButtonV2_pnr->isChecked())
//    {
//        numberX = v1.getAxisX();
//        numberY = v1.getAxisY();
//        numberZ = v1.getAxisZ();

//        vectorProd = v2.calcVectorProduct(numberX, numberY, numberZ);
//        ui->vectorProdValueLabel_pnr->setText(QString::number(vectorProd));
//        updateData();
//    }

    double vectorProd;

    updateData();
    if(ui->radioButtonV1_pnr->isChecked())
    {
        v1 = v1^v2;

        vectorProd = v1.calcVectorLength();
        ui->vectorProdValueLabel_pnr->setText(QString::number(vectorProd));
        updateData();
    } else if(ui->radioButtonV2_pnr->isChecked())
    {
        v2 = v2^v1;

        vectorProd = v2.calcVectorLength();
        ui->vectorProdValueLabel_pnr->setText(QString::number(vectorProd));
        updateData();
    }
}

Vector Vector::operator+(Vector b)
{
    double x, y, z;

    x = this->getAxisX() + b.getAxisX();
    y = this->getAxisY() + b.getAxisY();
    z = this->getAxisZ() + b.getAxisZ();

    Vector c(x, y, z);

    return c;
}

Vector Vector::operator-(Vector b)
{
    double x, y, z;

    x = this->getAxisX() - b.getAxisX();
    y = this->getAxisY() - b.getAxisY();
    z = this->getAxisZ() - b.getAxisZ();

    Vector c(x, y, z);

    return c;
}

double Vector::operator*(Vector b)
{
    double scalarProd = this->getAxisX() * b.getAxisX() +
            this->getAxisY() * b.getAxisY() + this->getAxisZ() * b.getAxisZ();

    return scalarProd;
}

Vector Vector::operator^(Vector b)
{
    double newX, newY, newZ;

    newX = this->axisY * b.getAxisZ() - b.getAxisY() * this->axisZ;
    newY = (this->axisX * b.getAxisZ() - b.getAxisX() * this->axisZ)*(-1);
    newZ = this->axisX * b.getAxisY() - b.getAxisX() * this->axisY;

    Vector c(newX, newY, newZ);

    return c;
}

void Vector::addVector(Vector b)
{
    axisX += b.axisX;
    axisY += b.axisY;
    axisZ += b.axisZ;
}

void Vector::subtractVector(Vector b)
{
    axisX -= b.axisX;
    axisY -= b.axisY;
    axisZ -= b.axisZ;
}

double Vector::calcScalarProduct(Vector b)
{
    double scalarProd;

    scalarProd = axisX * b.axisX + axisY * b.axisY + axisZ * axisZ;

    return scalarProd;
}

void operator<<(Vector &a, QLineEdit *lineEdit[3])
{
    a.axisX = lineEdit[0]->text().toDouble();
    a.axisY = lineEdit[1]->text().toDouble();
    a.axisZ = lineEdit[2]->text().toDouble();
}

void operator>>(Vector &a, QLabel *label[3])
{
    label[0]->setText(QString::number(a.axisX));
    label[1]->setText(QString::number(a.axisY));
    label[2]->setText(QString::number(a.axisZ));
}

void operator%(Vector &a, double mult)
{
    a.axisX *= mult;
    a.axisY *= mult;
    a.axisZ *= mult;
}

bool operator<(Vector a, Vector b)
{
    if(a.calcVectorLength() < b.calcVectorLength())
    {
        return true;
    } else
    {
        return false;
    }
}
bool operator>(Vector a, Vector b)
{
    if(a.calcVectorLength() > b.calcVectorLength())
    {
        return true;
    } else
    {
        return false;
    }
}
bool operator==(Vector a, Vector b)
{
    if(a.calcVectorLength() == b.calcVectorLength())
    {
        return true;
    } else
    {
        return false;
    }
}




void Lab06_pnr::on_btnCompare_pnr_clicked()
{
    if(v1 > v2)
    {
        ui->greaterValLabel_pnr->setText("True");
    } else
    {
        ui->greaterValLabel_pnr->setText("False");
    }

    if(v1 < v2)
    {
        ui->lessValLabel_pnr->setText("True");
    } else
    {
        ui->lessValLabel_pnr->setText("False");
    }

    if(v1 == v2)
    {
        ui->equalsValLabel_pnr->setText("True");
    } else
    {
        ui->equalsValLabel_pnr->setText("False");
    }
}


void Lab06_pnr::on_btnNumOfObj_pnr_clicked()
{
    ui->numOfObjectsValLabel_pnr->setText(QString::number(Vector::numOfExistingObjs()));
}



