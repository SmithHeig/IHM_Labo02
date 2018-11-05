#ifndef FFMPEG_H
#define FFMPEG_H

#include <QMainWindow>
#include "QTime"

namespace Ui {
class FFMPEG;
}

class FFMPEG : public QMainWindow
{
    Q_OBJECT

public:
    explicit FFMPEG(QWidget *parent = 0);
    ~FFMPEG();

private slots:
    void on_openButton_clicked();

    void on_browseButton_clicked();


    void lock_all();

    void unlock_all();
    void on_timeEdit_start_timeChanged(const QTime &time);

    void on_timeEdit_end_timeChanged(const QTime &time);

    void set_dif_time();
    void on_browseButton_2_clicked();

    void on_lineEdit_outputFile_editingFinished();

    bool check_file(const QString& s);

    void on_pushButton_genreate_output_clicked();

private:
    Ui::FFMPEG *ui;
    QString file_to_proc;
    QString file_to_write;
    QTime time_start;
    QTime time_end;
    QTime time_duration;
    QString file_choose;
};

#endif // FFMPEG_H
