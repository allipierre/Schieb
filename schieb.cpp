#include "schieb.h"
#include "ui_schieb.h"

schieb::schieb(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::schieb)
{
    ui->setupUi(this);
}

schieb::~schieb()
{
    delete ui;
}
