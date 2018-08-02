#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

class Student {
public:
	Student(Qstring nm, long id, QString m_Major, int year = 1);
	virtual QString getClassName() const;
	Qstring toString() const;
	virtual ~Student(){}
	QString yearStr();

private:
	QString m_Name;
	QString m_StudentId;

protected:
	int m_Year;

};

class Undergrad : public Student {
public:
	Undergrad(QString name, long id, QString major, int year);
	QString getClassName() const;

};

class GradStudent : public Student {
public:
	enum Support { ta, ra, fellowship, other };
	GradStudent(QString nm, long id, QString major, int yr, Support support);

protected:
	static QString supportStr(Support sup);

private:
	Support m_Support;

};

#endif

/* By simply adding the keyword virtual to at least one member function we have
created a polymorphic type. When virtual is specified on a function, it
becomes a method in that class and all derived classes.