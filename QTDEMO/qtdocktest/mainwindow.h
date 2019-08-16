#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QDockWidget>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QSlider>
#include<QComboBox>
#include<QTextEdit>
#include<QGridLayout>
#include<QScrollArea>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public:
    //移除并隐藏所有dock
     void removeAllDock();
       //显示dock窗口
     void showDock(const QList<int>& index = QList<int>());
     void initDock();

     //初始化dock_6的界面
     void initDock_6();
      QScrollArea *scro_6;
       QWidget *widget_6 ;
//     QPushButton* PushButton_J1_add;
//     QPushButton* PushButton_J1_dec;
//     QPushButton* PushButton_J2_add;
//     QPushButton* PushButton_J2_dec;
//     QPushButton* PushButton_J3_add;
//     QPushButton* PushButton_J3_dec;
//     QLabel* Lable_theta1;
//     QLabel* Lable_theta2;
//     QLabel* Lable_theta3;
//     QLabel* Lable_theta4;
//     QLabel* Lable_theta5;
//     QLabel* Lable_theta6;
//     QSlider* slider1;
//     QSlider* slider2;
//     QSlider* slider3;
//     QSlider* slider4;
//     QSlider* slider5;
//     QSlider* slider6;

     //经典布局界面 QHBoxLayout  QGridLayout QVBoxLayout
     //左侧的控件
     QLabel *UserLabel;
     QLabel *NameLabel;
     QLabel *SexLabel;
         QLabel *DepartLabel;
         QLabel *AgeLabel;
         QLabel *OtherLabel;
         QLineEdit *UserLineEdit;
         QLineEdit *NameLineEdit;
         QComboBox *SexComboBox;
         QTextEdit *DepartTextEdit;
         QLineEdit *AgeLineEdit;
         QGridLayout *LeftGridLayout;
     //右上角
      QLabel *HeadLabel;
      QLabel *HeadIconLabel;
      QPushButton *UpdateHeadBtn;
     QHBoxLayout *RightTopHBLayout;

     //右下角
         QLabel *IntroLabel;
         QTextEdit *IntroTextEdit;
         QVBoxLayout *RightVBLayout;

       //底部
      QPushButton *OkBtn;
      QPushButton *CancelBtn;
      QHBoxLayout *ButtomHBLayout;

private:
    QList<QDockWidget*> m_docks;///< 记录所有dockWidget的指针

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
