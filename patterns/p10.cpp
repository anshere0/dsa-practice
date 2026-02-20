/*
The program uses i to figure out which "phase" of the shape it is in
It asks: "Am I past the peak?"
If i becomes greater than n (for example, we are building row 5,
but n is 4), the condition if (i > n) triggers,
and the code knows it is time to start shrinking the number of stars.
*/

#include<bits/stdc++.h>
using namespace std;

void print7(int n) {
    for ( int i= 0; i<n; i++) {
        //space
        for (int j=0;j<n-i-1;j++) {
            cout <<  " ";
        
        }

        //star
        for (int j=0; j< 2*i+1; j++) {
            cout << "*";
        }


        //space
        for (int j=0;j<n-i-1;j++) {
            cout << " ";
        
        }

        cout << endl;
    }
}
void print8(int n) {

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

void print10(int n) {
    for (int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars= 2*n-i;
        for (int j=1; j<= stars;j++){
            cout << "* ";
        }
        cout << endl;

    }

}

int main () {
    int n;
    cin >> n;
    print10(n);
return 0;
}