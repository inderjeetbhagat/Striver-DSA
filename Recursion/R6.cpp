//fibonacci number
#include<bits/stdc++.h>
using namespace std;

int f(int n) {
    if(n <= 1) {
        return n;
    }
    int last = f(n-1);
    int secondLast = f(n-2);
    return last + secondLast;
}

int main() {
    cout<<f(4);
    return 0;
    
}