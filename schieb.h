#ifndef SCHIEB_H
#define SCHIEB_H

#include <QMainWindow>

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
    Ui::schieb *ui;
};

#endif // SCHIEB_H
