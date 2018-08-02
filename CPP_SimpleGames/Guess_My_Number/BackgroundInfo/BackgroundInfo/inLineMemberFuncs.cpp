#include <iostream>
#include <cstdlib>
using namespace std;

class point{
	public:
		point(){
			x = y = 0; }
		
		void SetX(int xValue){
			x = xValue; }

		int GetX(void){
			return(x); }

		void SetY(int yValue){
			y = yValue; }

		int GetY(void){
			return(y); }

	private:
		int x, y;
};

int main(int argc, char *argv[]) {
	point rightHere;

	rightHere.SetX(10);
	rightHere.SetY(20);

	cout << "(x,y)=(" << rightHere.GetX();
	cout << "," << rightHere.GetY() << ")";
	cout << endl;

	rightHere.SetX(20);
	rightHere.SetY(10);

	cout << "(x,y)=(" << rightHere.GetX();
	cout << "," << rightHere.GetY() << ")";
	cout << endl;

	system("PAUSE");
	return (EXIT_SUCCESS);

}
