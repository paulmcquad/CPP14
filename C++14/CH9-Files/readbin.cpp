#include <iostream>
#include <fstream>
#include <cstring> // strlen

using namespace std;

int get_int(int default_value);

int main(int argc, char *argv[]) {
    
    char filename[FILENAME_MAX];
    int n = 0;
    char name[20];
    int age = 0;
    int recsize =  sizeof(name) + sizeof(int);
    

    cout << "Enter file name: ";
    cin.getline(filename, FILENAME_MAX);

    // Open file for binary read-write access.

    fstream  fbin(filename, ios::binary | ios::in);
    if (!fbin) {
        cout << "Could not open " << filename << endl;
        return -1;
    }

    // Get record number and go to record.

    cout << "Enter file record number: ";
    n = get_int(0);
    fbin.seekp(n * recsize);

    // Read data from the file.

    fbin.read(name, sizeof(name) - 1);
    fbin.read((char*)(&age), sizeof(int));

    // Display the data and close.
    
    cout << "The name is: " << name << endl;
    cout << "The age is: " << age << endl;
    fbin.close();
    return 0;
}

// Get integer function
// Get an integer from keyboard; return default
//  value if user enters 0-length string.
//
int get_int(int default_value) {
    char s[81];

    cin.getline(s, 80);
    if (strlen(s) == 0) {
         return default_value;
    }
    return atoi(s);
}
