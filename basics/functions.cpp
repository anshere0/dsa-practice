#include<bits/stdc++.h>
using namespace std;
/*
functions are set of code which perfroms somehting for you
funcs are used to modularie code
functions are used to increaes readability of code
functions are used to avoid repitition of code

examples- void -> does not return anything
return
parameterised-> takes some input and then return something (within the brackets)
non parameterised
*/


void printname (string name) {
    cout << "hey " << name << endl;

}
int main () {
    string name;
    cin >> name;
    printname(name);

    string name2;
    cin >> name2;
    printname(name2);

    return 0;
}
