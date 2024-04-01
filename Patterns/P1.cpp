#include<bits/stdc++.h>
using namespace std;

void pattern1() {
    for(int i = 0; i < 4; i++) {
        
        for( int j =0; j< 4; j++) {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void pattern2() {
  for(int i = 0; i < 5; i++) {
        
        for( int j =0; j<=i; j++) {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void pattern3() {
  for(int i = 1; i <= 5; i++) {
        
        for( int j =1; j<=i; j++) {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void pattern4() {
  for(int i = 1; i <= 5; i++) {
        
        for( int j =1; j<=i; j++) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}

void pattern5() {
  for(int i = 1; i <= 5; i++) {
        
        for( int j =5; j>=i; j--) {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void pattern6() {
  for(int i = 1; i <= 5; i++) {
        
        for( int j =5; j>=i; j--) {
            cout<<5-j+1<<" ";
        }
        cout<<"\n";
    }
}

void pattern7(int n) {
    for(int i = 0; i <n; i ++) {
        for(int j = 0; j<n-i-1; j++  ){
            cout<<" ";
        }
        for(int k = 0; k< 2*i+1; k++ ){
            cout<<"*";
        }
        for(int j = 0; j<n-i-1; j++  ){
            cout<<" ";
        }
        cout<<"\n";
    }

}

void pattern8(int n) {
    for(int i = n; i > 0; i--) {
        for(int j = 0; j < n-i; j++ ) {
            cout<<" ";
        }
        for( int k = 0; k<2 *i -1; k++) {
            cout<<"*";
        }
        for(int j = 0; j < n-i; j++ ) {
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern10(int n) {
    for(int i = 1; i <= 2*n-1; i++) {
        int stars = i; 
        if(stars>n) stars = 2*n-i;
        for(int j = 1; j <=stars ; j++) {
            cout<<"* ";
        }
cout<<"\n";
    }
}

void pattern11(int n) {
    for(int i = 1; i<= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(j%2 ==0 ){
                cout<<"0";
            } else {
                cout<<"1";
            }
        }
        cout<<"\n";
    }
}

void pattern12(int n) {
    int spaces = 2*(n-1);
    for(int i = 1; i<= n; i++) {
        for(int j = 1; j <= i; j++){
            cout<<j;
        }
        for(int k = 1; k<=spaces; k++ ){
            cout<<" ";
        }
        for(int j = i; j>=1 ;j--){
            cout<<j;
        }
        cout<<"\n";
        spaces = spaces-2;

    }
}

int main() {
    pattern12(4);
    
}