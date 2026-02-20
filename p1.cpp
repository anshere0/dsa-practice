// patterns are gonna be nested loops
/*
1.) for the outer loop, count the no. of lines (rows)
2.) for the inner loop, count the no. of columns (stars)
and connect somehow to the rows
3.)print the "x" in a inner for loop
4.)observe symmetry (optional)

pattern here-

****
****
****
****
*/


#include<bits/stdc++.h> 
using namespace std;
void print1(int n) {
    for (int i= 0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << "*";

        }
        cout << endl;
    }

}
int main () {
    int n;
    cin >> n;
    print1(n);
return 0;
}
