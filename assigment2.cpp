#include <iostream>
using namespace std;

int main() { 

    string name;
    float m1,m2,m3, total,avg;
    char c; 

    do { 
        
        cout << "Name: ";
        cin >> name;
         
    
       cout << "Mark 1: ";
       cin >> m1;
       
       cout << "Mark 2: "; 
       cin >> m2;

       cout << "Mark 3: ";
       cin >> m3;

       total = m1 + m2 + m3;
       avg = total / 3;


       cout << "\ntotal = " << total << endl;
       cout << "Averege = " << avg << endl;

       if(avg >= 50)
          cout << "pass\n";
       else
          cout << "pass\n";
        
        cout << "\nAgain? (y/n): ";
        cin >> c;
    
    } while(c == 'y');

    return 0;
 }

