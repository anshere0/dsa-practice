#include <bits/stdc++.h>
using namespace std;

/*
A school has following rules for grading system:
a. below 25 -f 
b. 24 to 44- e
c. 45 to 49- d
d. 50 to 59-c
e. 60 to 79-b
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/

int main () {
    int marks;
    cin >> marks ;
if (marks < 25) {
        cout << "f";
    } else if (marks >= 24 && marks <= 44) {
        cout << "e";
    } else if (marks >= 45 && marks <= 49) {
        cout << "d";
    } else if (marks >= 50 && marks <= 59) {
        cout << "c";
    } else if (marks >= 60 && marks <= 79) {
        cout << "b";
    } else if (marks >= 80 && marks <= 100) {
        cout << "a";
    } else {
        cout << "invalid input";
    }
}