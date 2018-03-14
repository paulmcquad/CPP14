#include <cstdlib>
#include <iostream>
using namespace std;
int gcf(int a, int b);

int main(int argc, char *argv[]) {
	
    int a = 0, b = 0; // Inputs to GCF.
    
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "GCF = " << gcf(a, b) << endl;
    return 0;
}

int gcf(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcf(b, a%b);
    }
}
