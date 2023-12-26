#include "desktoppet.h"
#include "ui_desktoppet.h"
#include <QDebug>

DesktopPet::DesktopPet(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DesktopPet)
{
    ui->setupUi(this);

    timer_head = new QTimer(this);
    timer_leftfoot = new QTimer(this);
    timer_rightfoot = new QTimer(this);
    timer_cymbal = new QTimer(this);
    timer_drink = new QTimer(this);
    timer_eat = new QTimer(this);
    timer_fart = new QTimer(this);
    timer_pie = new QTimer(this);
    timer_scratch = new QTimer(this);
    timer_stomach = new QTimer(this);

    setButtonPosition();

    connect(timer_head,&QTimer::timeout,this,&DesktopPet::actionHead);
    connect(timer_leftfoot,&QTimer::timeout,this,&DesktopPet::actionLeftfoot);
    connect(timer_rightfoot,&QTimer::timeout,this,&DesktopPet::actionRightfoot);
    connect(timer_cymbal,&QTimer::timeout,this,&DesktopPet::actionCymbal);
    connect(timer_drink,&QTimer::timeout,this,&DesktopPet::actionDrink);
    connect(timer_eat,&QTimer::timeout,this,&DesktopPet::actionEat);
    connect(timer_fart,&QTimer::timeout,this,&DesktopPet::actionFart);
    connect(timer_pie,&QTimer::timeout,this,&DesktopPet::actionPie);
    connect(timer_scratch,&QTimer::timeout,this,&DesktopPet::actionScratch);
    connect(timer_stomach,&QTimer::timeout,this,&DesktopPet::actionStomach);

}

DesktopPet::~DesktopPet()
{
    delete ui;
}

void DesktopPet::setButtonPosition()
{
    ui->btn_head->move(245,200);
    ui->btn_stomach->move(255,728);
    ui->btn_leftfoot->move(230,932);
    ui->btn_rightfoot->move(330,930);
    ui->btn_cymbal->move(50,600);
    ui->btn_drink->move(50,700);
    ui->btn_eat->move(50,800);
    ui->btn_fart->move(500,600);
    ui->btn_pie->move(500,700);
    ui->btn_scratch->move(500,800);

}


void DesktopPet::on_btn_head_clicked()
{
    stopAllTimer();
    reSetNum();
    timer_head->start(50);

}


void DesktopPet::on_btn_stomach_clicked()
{
    stopAllTimer();
    reSetNum();
    timer_stomach->start(50);
}


void DesktopPet::on_btn_leftfoot_clicked()
{
    stopAllTimer();
    reSetNum();
    timer_leftfoot->start(50);
}


void DesktopPet::on_btn_rightfoot_clicked()
{
    stopAllTimer();
    reSetNum();
    timer_rightfoot->start(50);
}


void DesktopPet::on_btn_eat_clicked()
{
    stopAllTimer();
    reSetNum();
    timer_eat->start(50);
}


void DesktopPet::on_btn_cymbal_clicked()
{
    stopAllTimer();
    reSetNum();
    timer_cymbal->start(50);

}


void DesktopPet::on_btn_drink_clicked()
{
    stopAllTimer();
    reSetNum();
    timer_drink->start(50);

}


void DesktopPet::on_btn_fart_clicked()
{
    stopAllTimer();
    reSetNum();
    timer_fart->start(50);

}


void DesktopPet::on_btn_pie_clicked()
{
    stopAllTimer();
    reSetNum();
    timer_pie->start(50);

}


void DesktopPet::on_btn_scratch_clicked()
{
    stopAllTimer();
    reSetNum();
    timer_scratch->start(50);

}

void DesktopPet::stopAllTimer()
{
    timer_head->stop();
    timer_leftfoot->stop();
    timer_rightfoot->stop();
    timer_cymbal->stop();
    timer_drink->stop();
    timer_eat->stop();
    timer_fart->stop();
    timer_pie->stop();
    timer_scratch->stop();
    timer_stomach->stop();
}

void DesktopPet::reSetNum()
{
    headNum = 0;
    leftfootNum = 0;
    rightfootNum = 0;
    cymbalNum = 0;
    drinkNum = 0;
    eatNum = 0;
    fartNum = 0;
    pieNum = 0;
    scratchNum = 0;
    stomachNum = 0;
}

void DesktopPet::actionHead()
{
    if(headNum <= 80)
    {
        QString str =QString("QMainWindow#DesktopPet{border-image: url(:/knockout/img/Animations/knockout/knockout_%1.jpg);}")
                .arg(headNum,2,10,QChar('0'));
        setStyleSheet(str);
        headNum++;
    }
    else
    {
        setStyleSheet("QMainWindow#DesktopPet{border-image: url(:/angry/img/Animations/angry/angry_00.jpg);}");
        timer_head->stop();
    }

}

void DesktopPet::actionLeftfoot()
{
    if(rightfootNum <= 29)
    {
        QString str =QString("QMainWindow#DesktopPet{border-image: url(:/footRight/img/Animations/footRight/footRight_%1.jpg);}")
                .arg(rightfootNum,2,10,QChar('0'));
        setStyleSheet(str);
        rightfootNum++;
    }
    else
    {
        setStyleSheet("QMainWindow#DesktopPet{border-image: url(:/angry/img/Animations/angry/angry_00.jpg);}");
        timer_rightfoot->stop();
    }

}

void DesktopPet::actionRightfoot()
{
    if(leftfootNum <= 29)
    {
        QString str =QString("QMainWindow#DesktopPet{border-image: url(:/footLeft/img/Animations/footLeft/footLeft_%1.jpg);}")
                .arg(leftfootNum,2,10,QChar('0'));
        setStyleSheet(str);
        leftfootNum++;
    }
    else
    {
        setStyleSheet("QMainWindow#DesktopPet{border-image: url(:/angry/img/Animations/angry/angry_00.jpg);}");
        timer_leftfoot->stop();
    }

}

void DesktopPet::actionCymbal()
{
    if(cymbalNum <= 12)
    {
        QString str =QString("QMainWindow#DesktopPet{border-image: url(:/cymbal/img/Animations/cymbal/cymbal_%1.jpg);}")
                .arg(cymbalNum,2,10,QChar('0'));
        setStyleSheet(str);
        cymbalNum++;
    }
    else
    {
        setStyleSheet("QMainWindow#DesktopPet{border-image: url(:/angry/img/Animations/angry/angry_00.jpg);}");
        timer_cymbal->stop();
    }
}

void DesktopPet::actionDrink()
{
    if(drinkNum <= 80)
    {
        QString str =QString("QMainWindow#DesktopPet{border-image: url(:/drink/img/Animations/drink/drink_%0.jpg);}")
                .arg(drinkNum,2,10,QChar('0'));
        setStyleSheet(str);
        drinkNum++;
    }
    else
    {
        setStyleSheet("QMainWindow#DesktopPet{border-image: url(:/angry/img/Animations/angry/angry_00.jpg);}");
        timer_drink->stop();
    }
}

void DesktopPet::actionEat()
{
    if(eatNum <= 39)
    {
        QString str =QString("QMainWindow#DesktopPet{border-image: url(:/eat/img/Animations/eat/eat_%1.jpg);}")
                .arg(eatNum,2,10,QChar('0'));
        setStyleSheet(str);
        eatNum++;
    }
    else
    {
        setStyleSheet("QMainWindow#DesktopPet{border-image: url(:/angry/img/Animations/angry/angry_00.jpg);}");
        timer_eat->stop();
    }
}

void DesktopPet::actionFart()
{
    if(fartNum <= 27)
    {
        QString str =QString("QMainWindow#DesktopPet{border-image: url(:/fart/img/Animations/fart/fart_%1.jpg);}")
                .arg(fartNum,2,10,QChar('0'));
        setStyleSheet(str);
        fartNum++;
    }
    else
    {
        setStyleSheet("QMainWindow#DesktopPet{border-image: url(:/angry/img/Animations/angry/angry_00.jpg);}");
        timer_fart->stop();
    }
}

void DesktopPet::actionPie()
{
    if(pieNum <= 23)
    {
        QString str =QString("QMainWindow#DesktopPet{border-image: url(:/pie/img/Animations/pie/pie_%1.jpg);}")
                .arg(pieNum,2,10,QChar('0'));
        setStyleSheet(str);
        pieNum++;
    }
    else
    {
        setStyleSheet("QMainWindow#DesktopPet{border-image: url(:/angry/img/Animations/angry/angry_00.jpg);}");
        timer_pie->stop();
    }
}

void DesktopPet::actionScratch()
{
    if(scratchNum <= 55)
    {
        QString str =QString("QMainWindow#DesktopPet{border-image: url(:/scratch/img/Animations/scratch/scratch_%1.jpg);}")
                .arg(scratchNum,2,10,QChar('0'));
        setStyleSheet(str);
        scratchNum++;
    }
    else
    {
        setStyleSheet("QMainWindow#DesktopPet{border-image: url(:/angry/img/Animations/angry/angry_00.jpg);}");
        timer_scratch->stop();
    }
}

void DesktopPet::actionStomach()
{
    if(stomachNum <= 33)
    {
        QString str =QString("QMainWindow#DesktopPet{border-image: url(:/stomach/img/Animations/stomach/stomach_%1.jpg);}")
                .arg(stomachNum,2,10,QChar('0'));
        setStyleSheet(str);
        stomachNum++;
    }
    else
    {
        setStyleSheet("QMainWindow#DesktopPet{border-image: url(:/angry/img/Animations/angry/angry_00.jpg);}");
        timer_stomach->stop();
    }

}

