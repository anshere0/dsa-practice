// combintion of 7 and 11

<<<<<<< HEAD:p17.cpp
#include<bits/stdc++.h>
using namespace std;

void print17(int n) {
    for ( int i= 0; i<n; i++) {
        //space
        for (int j=0;j<n-i-1;j++) {
            cout <<  " ";
        
        }

        //charcters
        char ch = 'A';
        int breakpoint = (2*i+1) /2;
        for (int j = 1; j<=2*i+1; j++) {
            cout << ch;
            if (j<= breakpoint) ch++;
            else ch--;
        }


        //space
        for (int j=0;j<n-i-1;j++) {
            cout << " ";
        
        }

        cout << endl;
    }
}

int main () {
    int n;
    cin >> n;
    print17(n);
return 0;
}
=======
ṇ
>>>>>>> b16a682f26e7c3d09cbd37cf43bc4849755d874e:patterns/p17.cpp
