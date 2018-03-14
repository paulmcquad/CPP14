#include <iostream>
#include <cmath>      // Include because sqrt is called.

using namespace std;

// Function must be declared before being used.
bool prime(int n);

int main(int argc, char *argv[]) {
	
   int n = 0;

   // Set up infinite loop; break if user enters 0.
   // Otherwise, evaluate n for prime-ness.

   while (true) {
      cout <<"Enter num (0 = exit) and press ENTER: ";
      cin >> n;
      if (n == 0) {        // If user entered 0, EXIT
         break;               
      }
      if (prime(n)) {      // Call prime(i)
         cout << n << " is prime" << endl;
      } else {
         cout << n << " is not prime" << endl;
      }
   }
   return 0;
}

// Prime-number function. Test divisors from
//  2 to sqrt of n. Return false if a divisor
//  found; otherwise, return true.
bool prime(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
       if (n % i == 0) {   // If i divides n evenly,
          return false;    //  n is not prime.
       }
    }
    return true;   // If no divisor found, n is prime.
}
