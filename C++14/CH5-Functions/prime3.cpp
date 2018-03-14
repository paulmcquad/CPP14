#include <iostream>
#include <cmath>

using namespace std;

void get_divisors(int n);
int main(int argc, char *argv[]) {
	
    int n = 0;
    cout << "Enter a number and press ENTER: ";
    cin >> n;
    get_divisors(n);
    cout << endl;
    return 0;
}
// Get divisors function
//  This function prints all the divisors of n,
//  by finding the lowest divisor, i, and then
//  rerunning itself on n/i, the remaining quotient.
void get_divisors(int n) {
double sqrt_of_n = sqrt(n);
     for (int i = 2; i <= sqrt_of_n; ++i) {
         if (n % i == 0) {   // If i divides n evenly,
            cout << i << ", ";    //   Print i,
            get_divisors(n / i);  //   Factor n/i,
            return;               //   and exit.
         }
     }
     // If no divisor is found, then n is prime;
     //  Print n and make no further calls.
     cout << n;   
}
