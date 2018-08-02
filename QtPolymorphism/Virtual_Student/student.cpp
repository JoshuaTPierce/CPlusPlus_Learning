#include <QTextStream>
#include "student.h"

Student::Student(QString nm, long id, QString major, int year) 
				: m_Name(nm), m_Major(major), m_StudentId(id), m_year(year) {}

QString Student::getClassName() const {
	return "Student";
}

QString Student::toString() const {
	QString retval;
	QTextStream os(&retval); //write the stream and return the string it uses
	os << "[" << getClassName() << "]"
	   << " name: " << m_Name
	   << " Id: " << m_StudentId
	   << " Year: " << yearStr()
	   << " Major: " << m_Major ;

	return retval;
}

Undergrad::Undergrad(QString name, long id, QString major, int year)
				: Student(name, id, major, year) {}

/* The base class object is considered a subobject of the derived object. Class members and base
classes both must be initialized and cleaned up, in an order determined by the order that they
appear in the class definition.	*/			

QString Undergrad::getClassName() const {
	return "Undergrad";
}

GradStudent::GradStudent(QString nm, long id, QString major, int yr,
				Support support) : Student(nm, id, major, yr),
				m_Support(support) {}

QString GradStudent::toString() const {
	QString result;
	QTextStream os(&result);
	os << Student::toString() //base class version
	   << "\n [Support: " //plus items specific to grad student
	   << supportStr(m_Support)
	   << " ]\n";

	 return result; 
}				