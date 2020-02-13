#include "zcm_player.h"
#include "ui_zcm_player.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
ZCM_player::ZCM_player(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ZCM_player)
{
    ui->setupUi(this);
    connect( ui->zcm_event_num, SIGNAL(valueChanged(int)), ui->zcm_event_scale, SLOT(setValue(int)) );
    connect( ui->zcm_event_scale, SIGNAL(valueChanged(int)), ui->zcm_event_num, SLOT(setValue(int)) );
    connect( ui->zcm_event_num, SIGNAL(valueChanged(int)), this, SLOT(changeEventNum(int)) );
    //connect( ui->zcm_event_scale, SIGNAL(valueChanged(int)), this, SLOT(changeEventNum(int)) );
    
    // --- Calculate number of zcm events
    int numEvents = numOfZcmEvents();
    ui->zcm_event_size->setText( "from " + QString::number( numEvents ) );
    // --- Output list of zcm events
    ui->zcm_info->appendPlainText( "Zcm_list: " );
    for(auto i : zcm_list)
        ui->zcm_info->appendPlainText( "\t" + QString::fromStdString(i) );
    
    // --- Set maximum range
    ui->zcm_event_num->setMaximum( numEvents );
    ui->zcm_event_scale->setMaximum( numEvents );
    
    
}

///////////////////////////////////////////////////////////////////////////////////////////////////
ZCM_player::~ZCM_player()
{
    delete ui;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
int ZCM_player::numOfZcmEvents()
{
    int numEvents = 0;
    zcm_list.clear();
    
    // --- Read zcm file
    zcm_file = "/home/roman/Reconst_Stereo/zcm_logs/534_train_1910091050.zcm.0";
                //"/home/roman/videos/data/534_loco/zcm_files/20191009/534_train_1910091153.zcm.0";     // tank
                //"/home/roman/videos/data/534_loco/zcm_files/20191009/534_train_1910091121.zcm.1";     // tank
                //"/home/roman/videos/data/534_loco/zcm_files/20191009/534_train_1910091050.zcm.2";     // global line
                //"/home/roman/videos/data/534_loco/zcm_files/20191009/534_train_1910091046.zcm.1";     // global
                //"/home/roman/videos/data/534_loco/zcm_files/20191009/534_train_1910090907.zcm.0";     // global & local
                
                //"/home/roman/Reconst_Stereo/zcm_logs/new_stereo_points.zcm";
                //"/home/roman/Reconst_Stereo/zcm_logs/stereoframes.zcm";
                //"/home/roman/videos/data/534_loco/zcm_files/20190923/534_train_1909230059.zcm.8"; 
                //"/home/roman/Reconst_Stereo/zcm_logs/zcmlog-2019-09-23.0005";
    
    //zcm::LogFile *zcm_log;
    zcm_log = new zcm::LogFile( zcm_file, "r" );
    if ( !zcm_log->good() )
    {
        ui->zcm_info->appendPlainText( "Bad zcm log: " + QString::fromStdString(zcm_file) );
        //std::cout << "Bad zcm log: " << zcm_file << std::endl;
        //exit(0);
    }
    else ui->zcm_info->appendPlainText( "Zcm log: " + QString::fromStdString(zcm_file) );
    
    while (true)
    {
        const zcm::LogEvent* event = zcm_log->readNextEvent();
        if ( !event ) break;
        numEvents ++;
        zcm_list.insert( event->channel );
    }
    
    zcm_log->close();
    //delete zcm_log;
    zcm_log = new zcm::LogFile( zcm_file, "r" );
    zcm_event_num = 0;
    
    event = zcm_log->readNextEvent();
            
    ui->zcm_event_info->clear();
    ui->zcm_event_info->appendPlainText( QString::fromStdString( event->channel ) );
    ui->zcm_event_info->appendPlainText( QString::number( event->eventnum ) );
    
    return --numEvents;
}

void ZCM_player::updateFramePlot()
{
    ZcmCameraBaslerJpegFrame zcm_msg;
    if ( event->channel == "FLZcmCameraBaslerJpegFrame" )
    {
        zcm_msg.decode( event->data, 0, static_cast< unsigned >( event->datalen ) );
        frame_plot = imdecode( zcm_msg.jpeg, cv::IMREAD_COLOR );
        cv::resize( frame_plot, frame_plot, cv::Size(320, 240) );
        QImage q_frame_plot = QImage( frame_plot.data, 
                                      frame_plot.cols, 
                                      frame_plot.rows, 
                                      int(frame_plot.step),
                                      QImage::Format_RGB888 );
        ui->Left_chennel->setPixmap( QPixmap::fromImage(q_frame_plot));
    }
}

void ZCM_player::changeEventNum( int event_num )
{
    //ui->zcm_info->appendPlainText( QString::number(event_num) );
    int delt_event_num = event_num - zcm_event_num;
    event = zcm_log->readEventAtOffset(delt_event_num);
//    if ( delt_event_num > 0 )
//    {
//        for ( int i = 0; i < delt_event_num; i++ )
//        {
//            event = zcm_log->readNextEvent();
//        }
//    }
//    else if ( delt_event_num < 0 )
//    {
//        for ( int i = 0; i > delt_event_num; i-- )
//        {
//            event = zcm_log->readPrevEvent();
//        }
//    }
    zcm_event_num = event_num;
    
    ui->zcm_event_info->clear();
    ui->zcm_event_info->appendPlainText( QString::fromStdString( event->channel ) );
    ui->zcm_event_info->appendPlainText( QString::number( event->eventnum ) );
    
    this->updateFramePlot();
}

