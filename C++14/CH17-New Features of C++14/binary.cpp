#include <iostream>
#include <bitset>
using namespace std;

int main(int argc, char *argv[]) {
	
     bitset<8> a(0b1111Õ0000 & 0b1001Õ0000);
     bitset<8> b(0b1111Õ0000 | 0b1001Õ0000);
     bitset<8> c(0b1010Õ1010 & 0b1000Õ1111);
     bitset<8> d(0b1010Õ1010 | 0b1000Õ1111);
     cout << a << endl;
     cout << b << endl;
     cout << c << endl;
     cout << e << endl;
}
