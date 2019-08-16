#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPalette>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QComboBox>
#include <QStringListModel>
#include <QListView>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget* p = takeCentralWidget();
        if(p)
            delete p;
        //允许嵌套dock
    setDockNestingEnabled(true);

    ui->dockWidget_2->setWidget(ui->tableView);

    QScrollArea *s = new QScrollArea(ui->dockWidget_3);
   // s->setGeometry(0, 20, 200, 200);
    ui->dockWidget_3->setWidget(s);

    //窗体1，其父窗体为滚动区域
    QWidget *w = new QWidget(s);
    //设置滚动区域的窗体
    s->setWidget(w);
    w->setGeometry(0, 0, 300, 300);

    //在窗体1上添加按钮
    QPushButton *btn = new QPushButton(w);
    btn->setText("123");
    btn->move(230, 130);

   //记录所有的dock指针
   // m_docks.append();

//    QScrollArea *pScroll = new QScrollArea( ui->dockWidget_1);
//    ui->dockWidget_1->setWidget(pScroll);
//    QWidget *pTemp = new QWidget(pScroll);
//    pScroll->setWidget(pTemp);
//    QPushButton *btn = new QPushButton(pTemp);
//    btn->setText("123");
//    QPushButton *btn1 = new QPushButton(pTemp);
//    btn->setText("1231");
//    QVBoxLayout *pLayout = new QVBoxLayout(pTemp);
//    pLayout->addWidget(btn);
//    pLayout->addWidget(btn1);
//    pTemp->setLayout(pLayout);

         // QWidget *window = new QWidget;
//          QPushButton *button1 = new QPushButton("One");
//          QPushButton *button2 = new QPushButton("Two");
//          QPushButton *button3 = new QPushButton("Three");
//          QPushButton *button4 = new QPushButton("Four");
//          QPushButton *button5 = new QPushButton("Five");

//          QHBoxLayout *layout = new QHBoxLayout;
//          layout->addWidget(button1);
//          layout->addWidget(button2);
//          layout->addWidget(button3);
//          layout->addWidget(button4);
//          layout->addWidget(button5);

//          QScrollArea *pScroll = new QScrollArea;
//          ui->dockWidget_1->setWidget(pScroll);
//          pScroll->setLayout(layout);
//        //  ui->dockWidget_1->show();

//   ui->dockWidget_1->setStyleSheet("border:1px solid rgb(0.38 , 0.38, 0.38)");
//   ui->dockWidget_2->setStyleSheet("border:1px solid rgb(0.38 , 0.38, 0.38)");
//   ui->dockWidget_3->setStyleSheet("border:1px solid rgb(0.38 , 0.38, 0.38)");
//   ui->dockWidget_4->setStyleSheet("border:1px solid rgb(0.38 , 0.38, 0.38)");
//   ui->dockWidget_5->setStyleSheet("border:1px solid rgb(0.38 , 0.38, 0.38)");
//   ui->dockWidget_6->setStyleSheet("border:1px solid rgb(0.38 , 0.38, 0.38)");


//    QHBoxLayout* lay=new QHBoxLayout();
//   // QSizeGrip *gr=new QSizeGrip(ui->dockWidget_1);//用来重设widget的size
//   QScrollArea* scroll=new QScrollArea();
//    scroll->setWidget(ui->dockWidget_1);
//    scroll->setAlignment(Qt::AlignLeft);
//    lay->addWidget(scroll);
//    setLayout(lay);//setting layout




//   QWidget* toolBox = new QWidget();
//   QFormLayout* formLayout = new QFormLayout();
//   formLayout->setLabelAlignment(Qt::AlignRight);
//   toolBox->setLayout(formLayout);

//   formLayout->addRow("Push Button", new QPushButton("OK"));
////   formLayout->addRow("Tool Button", new QToolButton());
////   formLayout->addRow("Radio Button", new QRadioButton());
////   formLayout->addRow("Check Box", new QCheckBox());
////   formLayout->addRow("Spin Box", new QSpinBox());
//   //formLayout->addRow("Line Edit", new QLineEdit());
//   formLayout->addRow("Combo Box", new QComboBox());

//   ui->dockWidget_1->setWidget(toolBox);


 //  mainWindow.addDockWidget(Qt::RightDockWidgetArea, toolBoxDockWidget);
    m_docks.append(ui->dockWidget_1);
    m_docks.append(ui->dockWidget_2);
    m_docks.append(ui->dockWidget_3);
    m_docks.append(ui->dockWidget_4);
    m_docks.append(ui->dockWidget_5);
    m_docks.append(ui->dockWidget_6);

    initDock();
    initDock_6();




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initDock()
{
    //初始布局
    removeAllDock();
    //原则，先左右，再上下
    addDockWidget(Qt::LeftDockWidgetArea,ui->dockWidget_1);
    splitDockWidget(ui->dockWidget_1,ui->dockWidget_2,Qt::Horizontal);
    splitDockWidget(ui->dockWidget_2,ui->dockWidget_3,Qt::Horizontal);
    splitDockWidget(ui->dockWidget_1,ui->dockWidget_4,Qt::Vertical);
    splitDockWidget(ui->dockWidget_2,ui->dockWidget_6,Qt::Vertical);
    tabifyDockWidget(ui->dockWidget_3,ui->dockWidget_5);
    showDock(QList<int>()<< 0<<1<<2<<3<<4<<5);

    QStringListModel* slModel = new QStringListModel();
    QStringList classList;
    classList << "QWidget" << "QPushButton" << "QImage" << "QCheckBox" << "QWindow" << "QTextEdit" << "QScrollBar" << "QPoint";
    slModel->setStringList(classList);

    QListView* strView = new QListView();
    strView->setModel(slModel);

    ui->dockWidget_1->setWidget(strView);


}
///
/// \brief 移除并隐藏所有的dock
///
void MainWindow::removeAllDock()
{
    for(int i = 0;i<m_docks.size();i++)
    {
       removeDockWidget(m_docks[i]);
    }

}
void MainWindow::showDock(const QList<int>& index )
{
    if (index.isEmpty())
       {
           for(int i=0;i<9;++i)
           {
               m_docks[i]->show();
           }
       }
       else
       {
           foreach (int i, index) {
               m_docks[i]->show();
           }
       }

}

void MainWindow::initDock_6()
{
    //××××××××××××初始化×××××××××××××××
    scro_6 = new QScrollArea(ui->dockWidget_6); //这个滚动窗口在dockewidget_6上
    ui->dockWidget_6->setWidget(scro_6);

    widget_6 = new QWidget(scro_6);
    scro_6->setWidget(widget_6);
     widget_6->setGeometry(0, 0, 100, 100);//好像与这个无关了

    ui->dockWidget_6->setWindowTitle(tr("UserInfo"));
    UserLabel=new QLabel(tr("用户名："));
       UserLineEdit=new QLineEdit;
       NameLabel=new QLabel(tr("姓名："));
       NameLineEdit=new QLineEdit;
       SexLabel=new QLabel(tr("性别："));
       SexComboBox=new QComboBox;
       SexComboBox->addItem(tr("男"));
       SexComboBox->addItem(tr("女"));
       DepartLabel=new QLabel(tr("部门"));
       DepartTextEdit=new QTextEdit;
       AgeLabel=new QLabel(tr("年龄"));
       AgeLineEdit=new QLineEdit;
       OtherLabel=new QLabel(tr("备注"));
       OtherLabel->setFrameStyle(QFrame::Panel|QFrame::Sunken);

       //××××××××××××添加左侧××××××××××××××
           LeftGridLayout=new QGridLayout();
           LeftGridLayout->addWidget(UserLabel,0,0);
           LeftGridLayout->addWidget(UserLineEdit,0,1);

           LeftGridLayout->addWidget(NameLabel,1,0);
           LeftGridLayout->addWidget(NameLineEdit,1,1);

           LeftGridLayout->addWidget(SexLabel,2,0);
           LeftGridLayout->addWidget(SexComboBox,2,1);

           LeftGridLayout->addWidget(DepartLabel,3,0);
           LeftGridLayout->addWidget(DepartTextEdit,3,1);

           LeftGridLayout->addWidget(AgeLabel,4,0);
           LeftGridLayout->addWidget(AgeLineEdit,4,1);

        //   LeftGridLayout->addWidget(OtherLabel,5,0,1,2);

           LeftGridLayout->setColumnStretch(0,1);// 表示设置第0列、第1列两者在水平方向的空间比例分配。
           LeftGridLayout->setColumnStretch(1,3);//表示设置第0列、第1列两者在水平方向的空间比例是1：3
           //×××××××××××××添加右上角×××××××××××××××
           //×××××××××××××添加右上角×××××××××××××××
             HeadLabel=new QLabel(tr("头像："));
             HeadIconLabel=new QLabel;
           //  QPixmap icon("1.bmp");
//             HeadIconLabel->setPixmap(icon);
//             HeadIconLabel->resize(icon.width(),icon.height());

             UpdateHeadBtn=new QPushButton(tr("更新"));

             RightTopHBLayout=new QHBoxLayout; //用来设置整行
             RightTopHBLayout->setSpacing(20);//设置控件间的间距（列）
             RightTopHBLayout->addWidget(HeadLabel);
             RightTopHBLayout->addWidget(HeadIconLabel);
             RightTopHBLayout->addWidget(UpdateHeadBtn);
             //×××××××××××××添加右下角×××××××××××××××
             IntroLabel=new QLabel(tr("个人说明："));
             IntroTextEdit=new QTextEdit;

             RightVBLayout=new QVBoxLayout(); //用来设置整列
             RightVBLayout->setMargin(10); //设置控件间的行距
             RightVBLayout->addLayout(RightTopHBLayout);
             RightVBLayout->addWidget(IntroLabel);
             RightVBLayout->addWidget(IntroTextEdit);
             //×××××××××××××添加底部×××××××××××××××
             OkBtn=new QPushButton(tr("确定"));
             CancelBtn=new QPushButton(tr("取消"));

             ButtomHBLayout=new QHBoxLayout();
             ButtomHBLayout->addStretch();//放置弹簧
             ButtomHBLayout->addWidget(OkBtn);
             ButtomHBLayout->addWidget(CancelBtn);
             //×××××××××××××设置主窗体×××××××××××××××
             QGridLayout *mainLayout=new QGridLayout(widget_6);
             mainLayout->setMargin(15);//表示控件与窗体的左右边距
             mainLayout->setSpacing(10); //表示各个控件之间的上下间距
             mainLayout->addLayout(LeftGridLayout,0,0);
             mainLayout->addLayout(RightVBLayout,0,1);
             mainLayout->addLayout(ButtomHBLayout,1,0,1,2);
             mainLayout->setSizeConstraint(QLayout::SetFixedSize);


}
