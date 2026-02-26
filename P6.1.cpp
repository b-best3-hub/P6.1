/*
File: P6.1
Author: Ben Best
Date: 2026-02-25

Description: Filled and hollow square to the terminal
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int squareRow = 0;        //Integer representation for how many rows the square has
    int squareColumn = 0;     //Integer representation for how many columns the square has

    cout << "Enter a number for the length of your square: ";
    cin >> n;

    if (n < 3)
    {
        cout << "length must be at least 3." << endl;
        return 0;
    }

    for (squareRow = 1; squareRow <= n; squareRow++)
    {
        //Filled square loop
        for (squareColumn = 1; squareColumn <= n; squareColumn++)
        {
            cout << "*";
        }

        cout << " ";  //Space between the two squares

        //Hollow square loop
        for (int col = 1; col <= n; col++)
        {
            if (squareRow == 1 || squareRow == n || col == 1 || col == n)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
