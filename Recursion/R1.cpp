// Print name N times using recursion

#include<bits/stdc++.h>
using namespace std;

void print(int i, int n) {
    if(i > n) {
        return;
    }

    cout<<"Inder\n";
    print(i+1, n);
}

int main () {
    int n;
    cin>>n;
    print(1,n);
}

//TC = O(n) , SC = O(n)