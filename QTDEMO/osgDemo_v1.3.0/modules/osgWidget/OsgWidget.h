#ifndef OSGWIDGET_H
#define OSGWIDGET_H

/************************************************************\
 * 控件名称： osg三维控件
 * 控件描述：
 *          1.支持打开osg模型文件
 * 作者：红模仿    联系方式：QQ21497936
 * 博客地址：https://blog.csdn.net/qq21497936
 *       日期             版本         描述
 *   2019年06月28日      v1.2.0   使用osgQt封装模型
 *   2019年06月28日      v1.3.0   使用osgQt封装模型，将osgQt源码移植
\************************************************************/


#include <QWidget>
#include <osgViewer/Viewer>
#include "osgQt/GraphicsWindowQt.h"

namespace Ui {
class OsgWidget;
}

class OsgWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OsgWidget(QWidget *parent = 0);

protected:
    void resizeEvent(QResizeEvent *event);

protected:
    void initOsg();
    void loadOsg(QString osgFilePath);

private slots:
    void on_pushButton_open_clicked();

private:
    Ui::OsgWidget *ui;

private:
    osg::ref_ptr<osgViewer::Viewer> _pViewer;
    osg::ref_ptr<osg::Viewport> _pViewport;
    osgQt::GLWidget * _pGLWidget;
    osgQt::GraphicsWindowQt* _pGraphicsWindowQt;

};

#endif // OSGWIDGET_H
