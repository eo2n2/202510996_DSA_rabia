#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeFile(string file) {

    ofstream out(file);

    string text;

    cout << "Write text (END to stop):\n";

    cin.ignore();

    while (getline(cin, text) && text != "END") {
        out << text << endl;
    }

    out.close();
}

void readFile(string file) {

    ifstream in(file);

    string text;

    while (getline(in, text)) {
        cout << text << endl;
    }

    in.close();
}

void appendFile(string file) {

    ofstream app(file, ios::app);

    string text;

    cout << "Add text (END to stop):\n";

    cin.ignore();

    while (getline(cin, text) && text != "END") {
        app << text << endl;
    }

    app.close();
}

int main() {

    int choice;
    string file;

    do {

        cout << "\n1.Write\n2.Read\n3.Append\n4.Exit\nChoice: ";
        cin >> choice;

        switch(choice) {

            case 1:

                cout << "Filename: ";
                cin >> file;

                writeFile(file);

                break;

            case 2:

                cout << "Filename: ";
                cin >> file;

                readFile(file);

                break;

            case 3:

                cout << "Filename: ";
                cin >> file;

                appendFile(file);

                break;

            case 4:

                cout << "Bye!\n";

                break;

            default:

                cout << "Wrong choice\n";
        }

    } while(choice != 4);

    return 0;
}