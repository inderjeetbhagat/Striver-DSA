#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 4;
    int b = 8;
int ans = 1;
    for( int i = 1; i <= min(a,b); i++) {
        
        if(a % i == 0 && b % i == 0) {
            ans = i;
        }
    }
cout<<" The GCD is "<<ans;
}
