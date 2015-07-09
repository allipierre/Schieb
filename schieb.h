#ifndef SCHIEB_H
#define SCHIEB_H

#include <QMainWindow>
#include<QLabel>
#include<QVBoxLayout>
#include<QPushButton>
#include<QSlider>
#include<QLCDNumber>
#include<QApplication>
#include <qlineedit.h>
#include <qbuttongroup.h>
#include <qradiobutton.h>
#include <qtabbar.h>
#include <qpushbutton.h>
#include <qcolordialog.h>

namespace Ui {
class schieb;
}

class schieb : public QMainWindow
{
    Q_OBJECT

public:
    explicit schieb(QWidget *parent = 0);
    ~schieb();

private:
    QWidget *myqw;
    QSlider *myqsl;
    QLCDNumber *myqcldn;
    QPushButton *myqpb1;
    QPushButton *myqpb2;
    QVBoxLayout *vLayout;

};

#endif // SCHIEB_H
