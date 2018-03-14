#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rand_0toN1(int n);

int main(int argc, char *argv[]) {
	
    int n = 0;
    int r = 0;
    
    srand(time(nullptr)); // Set seed for random numbers.
    cout << "Enter number of dice to roll: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        r = rand_0toN1(6) + 1; // Get a number 1 to 6
        cout << r << " ";      // Print it
    }
    return 0;
}
// Random 0-to-N1 Function.
// Generate a random integer from 0 to N-1, with each
//  integer an equal probability.
//
int rand_0toN1(int n) {
    return rand() % n;
}
