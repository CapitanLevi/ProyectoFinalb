#ifndef NIVEL1_H
#define NIVEL1_H

//#include <QMediaPlayer>
#include <QDialog>
#include <QMovie>

namespace Ui {
class Nivel1;
}

class Nivel1 : public QDialog
{
    Q_OBJECT

public:
    explicit Nivel1(QWidget *parent = 0);
    ~Nivel1();

//    QMediaPlayer * music1;
    QMovie *movie;
private:
    Ui::Nivel1 *ui;
};

#endif // NIVEL1_H
