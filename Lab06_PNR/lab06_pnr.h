#ifndef LAB06_PNR_H
#define LAB06_PNR_H

#include <QMainWindow>


#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>

class Vector
{
private:
    static int objNum;
    double axisX;
    double axisY;
    double axisZ;
public:
    static int numOfExistingObjs() {return objNum;}

    void setAxisX(double x) {axisX = x;}
    void setAxisY(double y) {axisY = y;}
    void setAxisZ(double z) {axisZ = z;}

    double getAxisX() {return axisX;}
    double getAxisY() {return axisY;}
    double getAxisZ() {return axisZ;}

    void addVector(double x2, double y2, double z3);
    void addVector(Vector b);
    void subtractVector(double x2, double y2, double z3);
    void subtractVector(Vector b);
    void multiplyByScalar(double mult);
    double calcScalarProduct(double x2, double y2, double z3);
    double calcScalarProduct(Vector b);
    double calcVectorProduct(double x2, double y2, double z3);
    double calcVectorLength();

    Vector()
    {
        objNum++;
    }
    Vector(double x)
        : axisX{x}
    {
        objNum++;
    }
    Vector(double x, double y)
        : axisX{x}, axisY{y}
    {
        objNum++;
    }
    Vector(double x, double y, double z)
        : axisX{x}, axisY{y}, axisZ{z}
    {
        objNum++;
    }

    Vector(const Vector &a)
        : axisX{a.axisX}, axisY{a.axisY}, axisZ{a.axisZ}
    {
        objNum++;
    }

    ~Vector()
    {
        objNum--;
    }
    Vector operator+(Vector b);
    Vector operator-(Vector b);
    double operator*(Vector b);
    Vector operator^(Vector b);

    friend void operator%(Vector &a, double mult);
    friend void operator<<(Vector &a, QLineEdit *lineEdit[3]);
    friend void operator>>(Vector &a, QLabel *label[3]);
    friend bool operator<(Vector a, Vector b);
    friend bool operator>(Vector a, Vector b);
    friend bool operator==(Vector a, Vector b);
};

QT_BEGIN_NAMESPACE
namespace Ui { class Lab06_pnr; }
QT_END_NAMESPACE

class Lab06_pnr : public QMainWindow
{
    Q_OBJECT

public:
    Lab06_pnr(QWidget *parent = nullptr);
    ~Lab06_pnr();
    void updateData();
private slots:
    void on_btnSetX_pnr_clicked();

    void on_btnSetY_pnr_clicked();

    void on_btnSetZ_pnr_clicked();

    void on_btnSetAll_pnr_clicked();

    void on_btnAddVector_pnr_clicked();

    void on_btnSubtrVector_pnr_clicked();

    void on_btnMultByScalar_pnr_clicked();

    void on_btnCalcLength_pnr_clicked();

    void on_btnCalcScalarProd_pnr_clicked();

    void on_btnCalcVectorProd_pnr_clicked();

    void on_btnCompare_pnr_clicked();

    void on_btnNumOfObj_pnr_clicked();

private:
    Ui::Lab06_pnr *ui;
    Vector v1{0, 0, 0};
    Vector v2{0, 0, 0};
};

void operator<<(Vector &a, QLineEdit *lineEdit);
void operator>>(Vector &a, QLabel *label[3]);
void operator%(Vector &a, double mult);
bool operator<(Vector a, Vector b);
bool operator>(Vector a, Vector b);
bool operator==(Vector a, Vector b);

#endif // LAB06_PNR_H
