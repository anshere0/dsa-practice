/*
n represents the total number of rows your pattern will have. 
It dictates the overall size or height of the pyramid.


i is the loop counter for your outer for loop
It represents the current row that the program is actively building and printing.

*/

#include<bits/stdc++.h>
using namespace std;

void print7(int n) {
    for ( int i= 0; i<n; i++) {
        //space
        for (int j=0;j<i;j++) {
            cout <<  " ";
        
        }

        //star
        for (int j=0; j< 2*(n-i)-1; j++) {
            cout << "*";
        }


        //space
        for (int j=0;j<i;j++) {
            cout << " ";
        
        }

        cout << endl;
    }
}

int main () {
    int n;
    cin >> n;
    print7(n);
return 0;
}