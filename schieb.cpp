#include "schieb.h"
#include "ui_schieb.h"

schieb::schieb(QWidget *parent) :
    QMainWindow(parent)

{
    this->myqw=new QWidget();

    this->myqsl=new QSlider(Qt::Horizontal,this->myqw);
    this->myqsl->setGeometry(10,10,180,30);

    this->myqcldn=new QLCDNumber(2,this->myqw);
    this->myqcldn->display(20);

    connect(this->myqsl,SIGNAL(valueChanged(int)),this->myqcldn,SLOT(display(int)));



    this->myqpb1=new QPushButton("<",this->myqw);
    this->myqpb1->setGeometry(10,110,50,30);
    this->myqpb1->setFont(QFont("Times",18,QFont::Bold));
    QObject::connect(this->myqpb1,SIGNAL(clicked(bool)),this->myqcldn,SLOT(addstep));


     this->myqpb2=new QPushButton(">",this->myqw);
     this->myqpb2->setGeometry(140,110,50,30);
     this->myqpb2->setFont(QFont("Times",18,QFont::Bold));

    this->vLayout=new QVBoxLayout();


    this->vLayout->addWidget(this->myqsl);
    this->vLayout->addWidget(this->myqcldn);
    this->vLayout->addWidget(this->myqpb1);
    this->vLayout->addWidget(this->myqpb2);
    myqw->setLayout(this->vLayout);
    this->setCentralWidget(myqw);
}

schieb::~schieb()
{

}
