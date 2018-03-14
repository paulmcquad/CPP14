#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double ctemp; // Celsius temperature
	double ftemp; // Fahrenheit temperature
	
	// Get value of ctemp (Celsius temp).
	
	cout << "Input a Celsius temp and press ENTER: ";
	cin >> ctemp;
	
	// Calculate ftemp (Fahrenheit temp) and output.
	ftemp = (ctemp * 1.8) + 32;
	cout << "Fahrenheit temp is: " << ftemp << endl;
	
 return 0;
}