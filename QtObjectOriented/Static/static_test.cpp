#include "static.h"

int main(){

	Thing::showCount(); //No objects exist at this point
	Thing t1(3,4), t2(5,6);
	t1.showCount(); //Direct access through object
	{ //Static inner block is entered:
		Thing t3(7,8), t4(9,10);
		Thing::showCount(); 
	}

	Thing::showCount();
	return 0;
}