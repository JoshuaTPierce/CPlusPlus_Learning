#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPlainTextEdit>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow(); //destructor

private:
    QPlainTextEdit * editor; //define editor
    QString url; //the url of a file
    Ui::MainWindow *ui;
    void savefile(QString url);
    void savefileas();
    void savefile();
    void openfile();
    void newfile();
    void on_actionSave_file_triggered();
    void on_actionAbout_triggered();
    void on_actionOpen_triggered();

};

#endif // MAINWINDOW_H
