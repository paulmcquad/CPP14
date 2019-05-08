#include <iostream>
#include <string>  // REMEMBER TO INCLUDE THIS!

using namespace std;

string tens_names[ ] = {"", "", "twenty", "thirty", "forty",
   "fifty", "sixty", "seventy", "eighty", "ninety" };

string units_names[ ] = {"", "one", "two", "three", "four",
   "five", "six", "seven", "eight", "nine" };

int main(int argc, char *argv[]) {
    
    int  n = 0;

    cout << "Enter a number from 20 to 99: ";
    cin >> n;
    int tens_digits = n / 10;
    int units_digits = n % 10;
    cout << "The number you entered was ";
    cout << tens_names[tens_digits] << " ";
    cout << units_names[units_digits] << " ";
    return 0;
}
