#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    // Declare ctemp as a floating-pt variable.
    double  ctemp;

    // Prompt and input value of ctemp (Celsius Temp).
    cout << "Input a Celsius temp and press ENTER: ";
    cin >> ctemp;

    // Convert ctemp and output results.
    cout << "Fahrenheit temp is: " << (ctemp * 1.8) + 32;

    return 0;
}
