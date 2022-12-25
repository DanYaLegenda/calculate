#include <iostream>

#include "Header.h"

using namespace std;

int main() {
    
    double numb1, numb2;
    char operation;
    while (true) {
        cout << "================================\n";
        cout << "enter operation ('+' '-' '*' '/' '%' 's'): ";
        cin >> operation;

        if (operation == '%') {
            cout << "enter number: ";
            cin >> numb1;
            cout << "enter procent: ";
            cin >> numb2;
        }
        else if (operation == 's') {
            cout << "enter number: ";
            cin >> numb1;  
        }
        else {
            cout << "enter first number: ";
            cin >> numb1;
            cout << "enter last number: ";
            cin >> numb2;
        }

        cout << "result: ";
        switch (operation)
        {
        case '+':
            cout << pluss(numb1, numb2);
            break;
        case '-':
            cout << minuss(numb1, numb2);
            break;
        case '*':
            cout << works(numb1, numb2);
            break;
        case '/':
            cout << divisions(numb1, numb2);
            break;
        case '%':
            cout << procents(numb1, numb2);
            break;
        case 's':
            standarts(numb1);
            break;

        default:
            cout << "Error!";
            break;
        }
        cout << '\n';
    }

    return 0;
}





