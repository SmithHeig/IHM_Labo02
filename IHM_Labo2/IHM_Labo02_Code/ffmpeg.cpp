#include "ffmpeg.h"
#include "ui_ffmpeg.h"
#include "QFileDialog"
#include "QProcess"
#include "QTime"

FFMPEG::FFMPEG(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FFMPEG)
{
    ui->setupUi(this);
    this->lock_all();
    ui->timeEdit_start->setDisplayFormat("hh:mm:ss");
    ui->timeEdit_end->setDisplayFormat("hh:mm:ss");
}

FFMPEG::~FFMPEG()
{
    delete ui;
}

void FFMPEG::on_openButton_clicked()
{

    QString stringValueSettings = "./ffmpeg-20171027-5834cba-win64-static/bin/ffprobe.exe -v error -show_entries format=duration -of default=noprint_wrappers=1:nokey=1 -sexagesimal";
    stringValueSettings += " \"" + ui->lineEditInputFile->text() + + "\"";
    QProcess proc;
    proc.start(stringValueSettings);
    proc.waitForFinished();

    QString resultVideo = proc.readAllStandardOutput();
    resultVideo.chop(9);
    QTime time_max = QTime::fromString(resultVideo, "h:mm:ss");

     if(resultVideo == "" || time_max.second() == 0){
        ui->ErrorMessage->setText("Error, invalide file. You have to choose a video longer than 0 second.");
        this->lock_all();
        ui->ErrorMessage->setStyleSheet("color: red");
        return;
    }
    ui->ErrorMessage->setStyleSheet("color: rgb(0,170,0)");
    ui->ErrorMessage->setText("file choose: " + ui->lineEditInputFile->text());
    file_choose =  ui->lineEditInputFile->text();
    this->unlock_all();
    ui->label_4->setText(time_max.toString("hh:mm:ss"));
    ui->timeEdit_start->setTime(QTime(0, 0, 0));
    ui->timeEdit_end->setTime(time_max);

    ui->timeEdit_start->setTimeRange(QTime(0, 0, 0), time_max.addSecs(-1));
    ui->timeEdit_end->setTimeRange(QTime(0, 0, 1), time_max);

    time_start = QTime(0, 0, 0);
    time_end = time_max;
    set_dif_time();

}

void FFMPEG::on_browseButton_clicked()
{
    file_to_proc = QFileDialog::getOpenFileName(
                this,
                tr("Open file"),
                "C://"
                );

    ui->lineEditInputFile->setText(file_to_proc);
}


void FFMPEG::lock_all(){
    ui->label_2->setEnabled(false);
    ui->label_3->setEnabled(false);
    ui->label_4->setEnabled(false);
    ui->label_5->setEnabled(false);
    ui->label_6->setEnabled(false);
    ui->timeEdit_start->setEnabled(false);
    ui->timeEdit_end->setEnabled(false);
    ui->label_duration->setEnabled(false);
    ui->label_10->setEnabled(false);
    ui->pushButton_genreate_output->setEnabled(false);

    ui->lineEdit_outputFile->setEnabled(false);
    ui->browseButton_2->setEnabled(false);
    ui->textEdit_result->setEnabled(false);
}

void FFMPEG::unlock_all(){
    ui->label_2->setEnabled(true);
    ui->label_3->setEnabled(true);
    ui->label_4->setEnabled(true);
    ui->label_5->setEnabled(true);
    ui->label_6->setEnabled(true);
    ui->timeEdit_end->setEnabled(true);
    ui->timeEdit_start->setEnabled(true);
    ui->label_duration->setEnabled(true);
    ui->label_10->setEnabled(true);
    ui->pushButton_genreate_output->setEnabled(true);

    ui->lineEdit_outputFile->setEnabled(true);
    ui->browseButton_2->setEnabled(true);
    ui->textEdit_result->setEnabled(true);
}






void FFMPEG::on_timeEdit_start_timeChanged(const QTime &time)
{
    time_start = time;
    set_dif_time();
    ui->timeEdit_end->setMinimumTime(time_start.addSecs(1));
}

void FFMPEG::on_timeEdit_end_timeChanged(const QTime &time)
{
    time_end = time;
    set_dif_time();
    ui->timeEdit_start->setMaximumTime(time_end.addSecs(-1));
}

void FFMPEG::set_dif_time(){
    time_duration = QTime(0,0,0);

    time_duration = time_duration.addSecs(time_start.secsTo(time_end));

    ui->label_duration->setText(time_duration.toString("hh:mm:ss"));

}



void FFMPEG::on_browseButton_2_clicked()
{
    file_to_write = QFileDialog::getOpenFileName(
                this,
                tr("Open file"),
                "C://"
                );
    ui->lineEdit_outputFile->setText(file_to_write);
    check_file(file_to_write);
}

void FFMPEG::on_lineEdit_outputFile_editingFinished()
{
   file_to_write = ui->lineEdit_outputFile->text();
   check_file(file_to_write);
}

bool FFMPEG::check_file(const QString& s){
    QFileInfo file(s);
    if(file.isFile() || file.exists()){
         ui->ErrorMessage_2->setText("Warning, destination file already existe and the command will replace it.");
         ui->ErrorMessage_2->setStyleSheet("color: orange");
         return true;
    }

    if(file_to_write == ""){
        ui->ErrorMessage_2->setText("Error: no output file");
        ui->ErrorMessage_2->setStyleSheet("color: red");
        return false;
    }

    ui->ErrorMessage_2->setText("Output file:" + s);
    ui->ErrorMessage_2->setStyleSheet("color: rgb(0,170,0)");
    return true;

}

void FFMPEG::on_pushButton_genreate_output_clicked()
{

    if(!check_file(file_to_write))
        return;

    ui->ErrorMessage->setStyleSheet("color: green");

    QString command = "ffmpeg -ss " + time_start.toString()
                    + " -i \"" + file_choose + "\""
                    + " -t " + time_duration.toString()
                    + " -c copy"
                    + " \"" + file_to_write + "\"";

    ui->textEdit_result->setText(command);


}
