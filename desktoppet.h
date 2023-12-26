#ifndef DESKTOPPET_H
#define DESKTOPPET_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class DesktopPet; }
QT_END_NAMESPACE

class DesktopPet : public QMainWindow
{
    Q_OBJECT

public:
    DesktopPet(QWidget *parent = nullptr);
    ~DesktopPet();

    void setButtonPosition();

private slots:
    void on_btn_head_clicked();

    void on_btn_stomach_clicked();

    void on_btn_leftfoot_clicked();

    void on_btn_rightfoot_clicked();

    void on_btn_eat_clicked();

    void on_btn_cymbal_clicked();

    void on_btn_drink_clicked();

    void on_btn_fart_clicked();

    void on_btn_pie_clicked();

    void on_btn_scratch_clicked();

    void stopAllTimer();

    void reSetNum();

    void actionHead();

    void actionLeftfoot();

    void actionRightfoot();

    void actionCymbal();

    void actionDrink();

    void actionEat();

    void actionFart();

    void actionPie();

    void actionScratch();

    void actionStomach();

private:
    Ui::DesktopPet *ui;

    QTimer *timer_head;
    QTimer *timer_leftfoot;
    QTimer *timer_rightfoot;
    QTimer *timer_cymbal;
    QTimer *timer_drink;
    QTimer *timer_eat;
    QTimer *timer_fart;
    QTimer *timer_pie;
    QTimer *timer_scratch;
    QTimer *timer_stomach;

    uint headNum = 0;
    uint leftfootNum = 0;
    uint rightfootNum = 0;
    uint cymbalNum = 0;
    uint drinkNum = 0;
    uint eatNum = 0;
    uint fartNum = 0;
    uint pieNum = 0;
    uint scratchNum = 0;
    uint stomachNum = 0;
};
#endif // DESKTOPPET_H
