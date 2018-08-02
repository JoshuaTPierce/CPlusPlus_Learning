#include <QStringList>
#include <QDebug>
#include <cassert>

/* Some exaples using QStringList, split, and join. */

int main(){
	QString winter = "December, January, February";
	QString spring = "March, April May";
	QString summer = "June, July, August";
	QString fall = "September, October, November";

	QStringList list;
	list << winter; //first way to append a list member
	list += spring; //second way to append a list member
	list.append(summer); //third way to append a list member
	list << fall; 

	qDebug() << "The Spring months are: " << list[1];

	QString allmonths = list.join(", ");
	/* From list to string = join with a ", " delimiter */
	qDebug() <<allmonths;

	assert(list2.size() == 12); //Assertion to abort program if each is not satisfied

	foreach(QString str, list) { //Qt4 foreach loop (similar to Perl/Python)
		qDebug() << QString(" [%1] ").arg(str);
	}

	//C++ standard template library style iterator 
	for(QStringList::iterator it = list.begin(); it != list.end(); ++it) {
		QString current = *it;
		qDebug() << "[[" << current << "]]";
	}

	QListIterator<QString> itr (list2); //Java 1.2 style iterator
	while(itr.hasNext()) {
		QString current = itr.next();
		qDebug() << "{" << current << "}";
	}

	return 0;
}