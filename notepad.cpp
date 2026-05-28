#include "notepad.h"

void writeFile(string filename) {
    ofstream file(filename);

    if (!file) {
        cout << "Error opening file\n";
        return;
    }

    string line;
    cout << "Write text (END to stop):\n";

    while (getline(cin, line) && line != "END")
        file << line << endl;
}

void readFile(string filename) {
    ifstream file(filename);

    if (!file) {
        cout << "File not found\n";
        return;
    }

    string line;
    while (getline(file, line))
        cout << line << endl;
}

void appendFile(string filename) {
    ofstream file(filename, ios::app);

    if (!file) {
        cout << "Error opening file\n";
        return;
    }

    string line;
    cout << "Add text (END to stop):\n";

    while (getline(cin, line) && line != "END")
        file << line << endl;
}