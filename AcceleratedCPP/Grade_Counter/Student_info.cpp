#include "Student_info.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool compare(const Student_info& x, const Student_info& y){
	return x.name < y.name;
}

istream& read(istream& is, Student_info& s){
	//read and store the students name, midterm, and final grades
	is >> s.name >> s.midterm >> s.final;
	read_hw(is, s.homework); //read and store homework grades
	return is;
}

//read homework grades from an input stream into a vector
istream& read_hw(istream& in, vector<double>& hw){
	if(in){
		//get rid of previous contents
		hw.clear();
		
		//read hw grades
		double x;
		while(in >> x)
			hw.push_back(x);

		//clear the string so that the input will work for the next user
		in.clear();
		}
	return in; //returns control to beginning of function
}


