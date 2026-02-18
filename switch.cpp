#include<bits/stdc++.h>
using namespace std;
/*
Take the day and print the corresponding day
for ! print Monday,
for 2 print Tuesday and so on 7 print Sunday
*/

int main () {
    int day;
    cin >> day;

    switch (day) {
        case 1:
            cout << "monday";
            break;
        case 2:
            cout << "tuesday";
            break;
        case 3:
            cout << "wednesday";
            break;
        case 4:
            cout << "thursday";
            break;
        case 5:
            cout << "friday";
            break;
        case 6:
            cout << "saturday";
            break;
        case 7:
            cout << "sunday";
            break;
        default: 
            cout << "invalid input";
    }
    cout << " check";
    return 0;
}