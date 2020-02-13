#ifndef ZCM_PLAYER_H
#define ZCM_PLAYER_H

//#include <vector>
#include <iostream>
#include <set>
#include <iterator>
#include <math.h>

//Qt
#include <QtCore>
#include <QtGui>
#include <QMainWindow>
#include <QWidget>
#include <QGraphicsScene>
#include <QImage>
#include <QPixmap>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

// Opencv 4.1.0
//#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

// ZCM 
#include <zcm/zcm-cpp.hpp>
#include "ZcmCameraBaslerJpegFrame.hpp"
#include "ZcmLidarScalaPoint.hpp"
#include "ZcmLidarScalaDataScan.hpp"

///////////////////////////////////////////////////////////////////////////////////////////////////
QT_BEGIN_NAMESPACE
namespace Ui { class ZCM_player; }
QT_END_NAMESPACE

///////////////////////////////////////////////////////////////////////////////////////////////////
class ZCM_player : public QMainWindow
{
    Q_OBJECT
    
public:
    ZCM_player(QWidget *parent = nullptr);
    ~ZCM_player();
    
private slots:
    void changeEventNum(int);
    
    
private:
    Ui::ZCM_player *ui;
    std::string zcm_file;
    zcm::LogFile *zcm_log;
    int zcm_event_num;
    const zcm::LogEvent * event;
    std::set < std::string > zcm_list;
    
    cv::Mat frame_plot;
    
    int numOfZcmEvents();
    void updateFramePlot();
};
#endif // ZCM_PLAYER_H
