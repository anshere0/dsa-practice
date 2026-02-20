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



// pass by value
// in pass by value, a copy of the variable is passed to the function

/*
void doSomething(int num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;

}
int main () {
   int num =10;
   doSomething(num);
   cout << num << endl;

    return 0;
}
*/

// pass by reference
// in pass by reference, the address of the variable is passed to the function and then the value is changed at that address
// changes are made to the original value
// by attaching an "&" to the parameter, we can pass by reference

void doSomething(string s) {
    s[0]= 't';
    cout << s << endl;


}

int main () {
    string s= "rohit";
    doSomething(s);
    cout << s << endl;
    return 0;
}