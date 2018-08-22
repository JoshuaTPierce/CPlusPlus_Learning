/*
Dog.java
A Basic Object-Oriented Program
*/

//Step 1: Defining the Class
class Dog {
	//Data Members
	int size;
	String breed;
	String name;

	//Member Functions
	void bark(){
		System.out.println("Woof, woof!");
	}
}

//Step 2: Write a Tester (Test Drive) Class
//Contains Main Method
class DogTestDrive {
	public static void main(String[] args){
		Dog d = new Dog(); //make a new dog
		d.size = 40; //assign weight
		d.bark(); //make it bark
	}
}




