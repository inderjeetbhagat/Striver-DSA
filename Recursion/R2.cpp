    // Print linearly from 1 to N

#include<bits/stdc++.h>
using namespace std;

void linear(int i, int n) {

    if(i>n) {
        return;
    }
    cout<< i << " ";
    linear(i+1, n);
}

void Olinear(int i, int n) {
    if(i > n) {
        return;
    }
    cout<<n<<" ";
    Olinear(i,n-1);
}

int main () {
    int n;
    cin>>n;
    // linear(1,n);
    Olinear(1,n);
}