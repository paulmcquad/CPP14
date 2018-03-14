#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
    int  n = 0;
    int  i = 0;   // Loop counter in "for" statement.

    // Get num from the keyboard and initialize i.

    cout << "Enter a number and press ENTER: ";
    cin >> n;
 
    for (i = 1; i <= n; ++i){   // For i = 1 to n
        cout << i << " ";       //    Print i.
    }
    return 0;
}
