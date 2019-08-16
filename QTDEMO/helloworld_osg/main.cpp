#include <QCoreApplication>
#include <QDebug>
#include <iostream>


#include<osgViewer/Viewer>
#include<osgDB/ReadFile>
using namespace std ;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    osgViewer::Viewer viewer;
    QString path;
    path = "./osg3.4.0/data/cow.osg";
   // osg::ref_ptr<osg::Node> node = osgDB::readNodeFile("D:\QTDEMO\helloworld_osg\osg3.4.0\data\cow.osg");
    viewer.setSceneData(osgDB::readNodeFile( path.toStdString()));
    viewer.run();
    qDebug()<<"helloworld";
    std::cout<<"hello world\n";
    return a.exec();
}
