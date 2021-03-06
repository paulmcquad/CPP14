#include <iostream>
#include <fstream>
using namespace std;
#define COL_WIDTH  80

int main(int argc, char *argv[]) {
    
    int c;   // input character
    char filename[FILENAME_MAX];
    char input_line[COL_WIDTH + 1];

    cout << "Enter a file name and press ENTER: ";
    cin.getline(filename, FILENAME_MAX);

    ifstream file_in(filename);

    if (! file_in) {
        cout << filename << " could not be opened.";
        cout << endl;
        return -1;
    }

    while (true) {
        for(int i = 1; i <= 24 && ! file_in.eof(); ++i) {
            file_in.getline(input_line, COL_WIDTH);
            cout << input_line << endl;
        }
        if (file_in.eof()) {
            break;
        }
        cout << "More? (Press 'Q' and ENTER to quit)";
        cin.getline(input_line, COL_WIDTH);
        c = input_line[0];
        if (c == 'Q' || c == 'q') {
            break;
        }
    }
    return 0;
}
