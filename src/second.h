#ifndef SECOND_H
#define SECOND_H

#include <QMainWindow>

namespace Ui {
class second;
}

class second : public QMainWindow
{
    Q_OBJECT

public:
    explicit second(QWidget *parent = nullptr);
    ~second();

private:
    Ui::second *ui;
};

#endif // SECOND_H
