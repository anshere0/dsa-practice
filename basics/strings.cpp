#include<bits/stdc++.h>
using namespace std;

int main() {
    string s= "ansh arora is learning";
    cout << s[3] << s[0] << s[1];    

    int len = s.size();
    s[len-1] = 'g';
    cout << s[len-1];
    
    return 0;
}

