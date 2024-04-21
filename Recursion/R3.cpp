#include<bits/stdc++.h>
using namespace std;
//Sum of first N number
int final = 0;
int sum (int n) {
    
    if(n == 0)  {
        return 0;
    }
    return n + sum(n-1);
}

int main() {
    int n;
    cin>>n;
    int ans = sum(n);
    cout << ans;
}