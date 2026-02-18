#include<bits/stdc++.h>
using namespace std;
/*
functions are set of code which perfroms somehting for you
funcs are used to modularie code
functions are used to increaes readability of code
functions are used to avoid repitition of code

examples- void -> does not return anything
return-> returns a value from the function
parameterised-> takes some input and then return something (within the brackets)
non parameterised
*/


// take two numbers and print its sum
int sum (int num1, int num2) {
    int num3 = num1 + num2; // num1+ num2 is stored in num3
    return num3; // then it returns to the code line 25
}

int main () {
    int num1, num2;
    cin>> num1 >> num2;
    int num3= sum(num1, num2);
    cout << "the sum is " << num3 << endl;
   
    return 0;
}