#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    int  sum = 0;
    int  n = 0;

    do {
        cout << "Enter a number (0 for exit): ";
        cin >> n;
        sum += n;
    } while (n > 0);
    cout << "The sum is " << sum << endl;
    return 0;
}
