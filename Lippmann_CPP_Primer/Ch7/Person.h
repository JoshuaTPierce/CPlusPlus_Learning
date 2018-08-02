#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

struct Person {
	//data members
	std::string name;
	std::string address;

	//operations
	std::string getName() const { return name; } 
	std::string getAddress() const { return address; } 

};

std::istream &read(std::istream &is, Person &rhs){
	is >> rhs.name >> rhs.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &rhs){
	os << rhs.getName << " " << rhs.getAddress;
	return os;
}

#endif