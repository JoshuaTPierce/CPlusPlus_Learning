#ifndef GUARD_grade_h
#define GUARD_grade_h

//grade.h
#include <vector>
#include "Student_info.h"
#include "Median.h"

//function prototypes
double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);


//function definitions

double grade(double midterm, double final, double homework){
	return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw){
	if(hw.size == 0)
		throw domain_error("student has no homework");
	return grade(midterm, final, median(hw)); //function call within return from Median.h
}



#endif
