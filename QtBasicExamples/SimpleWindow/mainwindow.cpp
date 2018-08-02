#include "mainwindow.h"
#include "ui_mainwindow.h"

//Main Constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//Destructor
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openfile(){
    QString openfileurl = QFileDialog::getOpenFileName();
    if(openfileurl.isEmpty() || openfileurl == url) return;
    QFile file(openfileurl);
    if(file.open(QIODevice::ReadOnly|QIODevice::Text)) {
        url = openfileurl;
        editor->setPlainText(QString::fromUtf8(file.readAll()));
    }
}

void MainWindow::savefile(){
    if(url.isEmpty()) {
        savefileas();
        return;
    }
}

void MainWindow::savefileas(){
    QString url = QFileDialog::getSaveFileName();
    savefile(url);
}

void MainWindow::savefile(QString fileurl){
    QFile file(fileurl);
    if(file.open(QIODevice::WriteOnly|QIODevice::Text))
    {
    file.write(editor->toPlainText().toUtf8());
    url = fileurl;
    }
}


void MainWindow::on_actionSave_file_triggered() {
   savefile();
}

void MainWindow::on_actionAbout_triggered() {
   QMessageBox::information(this , tr("about") , tr("this is a small text editor made in order to tell people how to make a text editor for ubuntu and other platforms.using qt and c++"));
}

void MainWindow::on_actionOpen_triggered() {
   openfile();
}

