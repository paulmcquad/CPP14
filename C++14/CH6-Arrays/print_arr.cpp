#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    double scores[5] = {0.5, 1.5, 2.5, 3.5, 4.5};

    for(int i = 0; i < 5; ++i) {
        cout << scores[i] << "  ";
    }
    return 0;
}
