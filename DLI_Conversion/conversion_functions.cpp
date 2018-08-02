#include <iostream>
#include <process.h>
using namespace std;

void PPFDtoDLI(float ppfd, float photoperiod){ //can alter return type if this needs to be used differently
	cout << "This function returns an estimated Daily Light Integral based on your measured
			 photosynthetic photon flux density (in mmol m^-2 s^-1)." << endl;
	char choice; //for do-while loop
	const unsigned mmolToMol = 1000000; //allows for conversion between mmol and mol for PPFD -> DLI conversion
	
	do {
	cout << "Please enter your cumulative PPFD for your photoperiod: " << endl;
		cout << "Next, how long was your photoperiod? " << endl;

		//local variables to make the conversion simpler
		float ppCalc = 3600 * photoperiod; 					//removes delta(t(i)) from the integral calculation, smoothing an assumption of equal interval calculations also makes the calcluation less precise, but far simpler.
		float numerator = ppfd * ppCalc;   					//multiplies measured ppfd by the photoperiod in seconds
		float DLI = numerator / mmolToMol;             //final DLI calculation
	
		cout << ppfd << " micromoles of PAR per meter squared per second in a " << photoperiod << " hour photoperiod provides " 
			  << DLI << " moles of photons per meter squared per day (your DLI value) " << endl; 
		cout << "Enter another? (y or n): " << endl;
		cin >> choice;
	
	} while(choice == 'y' || choice == 'Y');
	
}

float DLItoPPFD(float DLI, float photoperiod){ //can alter return type if this needs to be used differently
	cout << "This function returns your target photosynthetic photon flux density (in mmol m^-2 s^-1) based on your desired DLI " << endl;
	char choice;
	mmolToMol = 1000000; //allows for conversion between mmol and mol for PPFD -> DLI conversion
	
	do{
	cout << "Please enter your desired DLI: " << endl;
	cout << "Next, how long will your photoperiod be? " << endl;
	
	//local variables to make the conversion simpler
	float DLI_mill = DLI * mmolToMol;
	float ppCalc = 3600 * photoperiod;
	float ppfd = DLI_mill / ppCalc;
	float hourly = ppfd / photoperiod;
	
	cout << "To achieve a DLI of " << DLI << " in a " << photoperiod << " hour photoperiod, your cumulative ppfd reading should be " 
		 << ppfd << " micromoles of PAR per meter squared per second." << endl;	
	cout << "Enter another? (y or n): " << endl;
	cin >> choice;	
	} while (choice == 'y' || choice == 'Y');
	
}

int main(){
	cout <<	"Welcome to the PPFD and DLI Conversion Widget." << endl;
	cout << "Options: " << endl;
	cout << "Enter '1' to Convert your PPFD Reading(s) into Actual DLI."
	cout << "Enter '2' to Get your PPFD Requirements Based on Desired DLI." 
	cout << "Enter any other character to exit." 
	int choice;
	cin >> choice;
	if(choice == 1){
		PPFDtoDLI();
	} else if (choice == 2){
		DLItoPPFD();
	} else {
		exit(0); 
	}
	
	return 0;
}
	
	
	
	
	