//EmployeeAggregation.CPP
//Demonstrates Aggregation of Classes/Derived Classes

/* Explanation: 
If a class B is derived by inheritance from a class A, we can say that “B is a kind of A.” This is
because B has all the characteristics of A, and in addition some of its own. It’s like saying that a
starling is a kind of bird: A starling has the characteristics shared by all birds (wings, feathers,
and so on) but has some distinctive characteristics of its own (such as dark iridescent plumage).
For this reason inheritance is often called a “kind of” relationship.

Aggregation is called a “has a” relationship. We say a library has a book or an invoice has an
item line. Aggregation is also called a “part-whole” relationship: the book is part of the library.
*/

///////////////////////////////////////////////////////////////////////

class student {
    private:
        string school;
        string degree;
    public:
        void getedu(){
            cout << " Enter name of school or university: ";
            cin >> school;
            cout << "Enter highest degree earned: ";
            cin > degree; }
        void putedu() const {
            cout << "\n School/University: " << school;
            cout << "\n Highest Degree: " << degree; }
};

class employee {
    private:    
        string name;
        unsigned long number;
    public:
        void getdata() {
            cout << "\n Enter Last Name: "; cin >> name;
            cout << "\n Enter Number: "; cin >> number; }
        void putdata() const{
            cout << "\n Name: " << name;
            cout << "\n Number: " << number;
        }
};

class scientist {
    private:
        int pubs;
        employee emp; //object of class employee
        student stu; //object of class student

    public: 
        void getdata(){
            emp.getdata();
            cout << "Enter number of pubs: "; cin >> pubs;
            stu.getedu(); }

        void putdata() const { 
            emp.putdata();
            cout << "\nNumber of Publications: " << pubs;
            stu.putedu;
        }
};

int main(){
    scientist s1, s2;

    cout << "Enter data for scientist 1: ";
    s1.getdata();

    
    cout << "Enter data for scientist 2: ";
    s2.getdata();

    cout << "Data on scientst 1: ";
    s1.putdata();

    cout << "Data on scientist 2: ";
    s2.putdata;

}
