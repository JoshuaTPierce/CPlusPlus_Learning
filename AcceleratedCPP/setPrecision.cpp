#include <algorithm>
#include <iomanip>
#include <iostream>
#include <ios>
#include <string>
#include <vector>

using std::cin; 
using std::cout;
using std::endl;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;

int main(){
	//ask for student's name
	cout << "Please enter your first name: " << endl;
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	//ask for and read in midterm and final grade
	cout << "Please enter your midterm and final exam grades: " << endl;
	double midterm, final;
	cin >> midterm >> final;

	//ask for and read homework grades
	cout << "Enter all homework grades followed by end-of-file: " << endl;

	vector<double> homework;
	double x;
	while(cin >> x){
	//invariant: homework contains all the homework grades so far
		homework.push_back(x);

	//check that homework grades were entered
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if(size == 0) {
		cout << "Please enter at least one grade." << endl;
		return 1; }

	//sort the grades
	sort(homework.begin(), homework.end());

	//compute the median homework grade
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2 : homework[mid];

	//compute and write the final grade
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3) << 0.2 * midterm + 0.4 * final + 
					0.4 * median << setprecision(prec) << endl;

	return 0;
} 
