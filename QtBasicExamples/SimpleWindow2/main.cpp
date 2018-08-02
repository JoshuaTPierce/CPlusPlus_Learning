#include <QApplication>
#include <QString>
#include <QLabel>
#include <QWidget>
#include <QDebug>
#include <QTextStream>

int main(int argc, char* argv[]){
	QApplication myapp(argc, argv); //All Qt GUI applications need this at the beginning of main
	QWidget wid;
	qDebug() << "size of widget: " << sizeof(wid) << "size of qapplication " << sizeof(myapp);

	QString message;
	QTextStream buf(&message);
	buf << "A QWidget is " << sizeof(wid) << " bytes. \nA QObject is " << sizeof(QObject) 
	    << " bytes. \nA QApplication is " << sizeof(myapp) << " bytes.";

	qDebug() << message;
	QLabel label(message);
	label.show();
	return myapp.exec();
}

