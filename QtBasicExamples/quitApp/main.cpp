#include <QApplication>
#include <QPushButton>
#include <QWidget>


//Making connections: This application show how to respond to user actions, and provides a
//button that the user clicks to quit. Here we are creating an item of class QPushButton
//instead of QLabel.

int main(int argc, char *argv[]){
	//create the QApplication object to manage application-wide resources
	QApplication app(argc, argv); 
	//create push button object
	QPushButton *button = new QPushButton("Quit");
	//call the connect function from QObject on button, create SIGNAL and SLOT
	QObject::connect(button, SIGNAL(clicked()), &app, SLOT(quit()));
	//arrow operator to call show() and return control to Q
	button->show();
	return app.exec();
}

//Qwidgets emit signals to indicate that a user clicked action or a change of state has occured.
//QPushButton emits a clicked() signal when the user clicks the button.
//A signal can be connected to a function (called a SLOT in this context), so that a function
// is executed when the signal is generated (when the button is clicked).
