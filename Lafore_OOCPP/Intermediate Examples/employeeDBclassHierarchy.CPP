//employeeDBclassHierarchy.CPP
//An employee management program that demonstrates class hierarchy
// as a design pattern with inheritance.

#include <iostream>
using namespace std;
CONST int LEN = 80;  //maximum length of name

//Base Class: Employee
class employee {
    private: 
        char name[LEN];  //employee name
        unsigned long number;  //employee ID number
    public:
        void getdata(){
            cout << "\n Enter last name: "; cin >> name;
            cout << " Enter Id number: "; cin >> number; }
        void putdata() const{
            cout << "\n Name: " << name;
            cout << "\n Number: " << number;
        }
};

//Derived Class 1: Managers
Class manager : public employee {
    private:
        char title[LEN];
        double dues; //golf club dues
    //IMPORTANT NEW CONCEPT:
    public:
        void getdata(){  //overrides the base class function
            employee::getdata(); //calls getdata() from employee
            cout << " Enter title: "; cin >> title;
            cout << " Enter club dues: "; cin >> dues;
        }
        void putdata(){
            employee::putdata();
            cout << "\n Title: "; << title;
            cout << "\n Dues: "; << dues;
        }
};

//Derived Class 2: Scientists
Class scientist : public employee{
    private: 
        int pubs; //number of publications
    public:
        void getdata() {
            employee::getdata();
            cout << "Enter number of publications: "; cin >> pubs;
            }
        void putdata() const {
            employee::putdata();
            cout << "\n Number of publications: "; << pubs;
        }
};

//Derived Class 3: Laborer (Copy of Employee)
class laborer : public employee {
};

//Main Function:
int main(){
    manager m1, m2;
    scientist s1;
    laborer l1; 

    cout << endl;
    cout << "\nEnter data for manager 1: ";
    m1.getdata();

    cout << "\nEnter data for manager 2: ";
    m2.getdata();

    cout << "\nEnter data for scientist 1: ";
    s1.getdata();

    cout << "\nEnter data for laborer 1: ";
    l1.getdata();

    //Display Employee Data:

    cout << "\nManager 1: ";
    m1.putdata();

    cout << "\nManager 2: ";
    m2.putdata();

    cout << "\nScientist 1; ";
    s1.putdata();

    cout << "\nLaborer 1: ";
    l1.putdata();

    cout << endl;
    return 0;
}