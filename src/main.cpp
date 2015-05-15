#include <iostream>

using namespace std;

int main(){
    int columns;
    int rows;

    cout << "Please enter a number of columns: ";
    cin >> columns;
    cout << "Please enter a number of rows: ";
    cin >> rows;

    for (int r = 1; r <= rows; r++){
        for (int c = 1; c <= columns; c++){
            cout << r * c << "\t";
        }
        cout << endl;
    }

    return 0;
}

