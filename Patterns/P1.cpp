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
void pattern15(int n) {
    for(int i = n ; i >=1; i--){
        for( char a = 'A'; a <= 'A' + i;  a++){
            cout<<a;
        }
        cout<<"\n";
    }
}
void pattern16(int n) {
    char c = 'A' ;
    for(int i = 1; i <=n; i++){
        
        for(char ch = 'A'; ch <= 'A' + i-1; ch++) {
           
            cout<<c;
        }
        c = 'A' +i;
        cout<<"\n";
    }
}
void pattern17(int n) {
    for(int i = 0; i <n; i++) {
        for(int j = 0; j <n-i-1; j++) {
            cout<<" ";
        }
        
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j =1; j<=2*i+1; j++ ){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;

            
        }

        for(int j = 0; j <n-i-1; j++) {
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern18(int n) {
    for(int i = 1 ; i <= n ; i++) {
        int x = i;
        for( int j = 1; j <=i ; j++){
            char ch = 'A' +n-x ;
            cout<<ch;
            x--;
        }
        cout<<"\n";
    }
}
void pattern19(int n) {
    int l = 0;
    for(int i = 0; i<n; i++) {
        //stars
        for(int j = 0; j< n-i; j++){
            cout<<"*";
        }

        //spaces 
        
        for(int k=0; k<l; k++){
            cout<<" ";
            
        }
        //stars
         for(int j = 0; j< n-i; j++){
            cout<<"*";
        }
        l= l+2;
cout<<"\n";
    }

     l = 2*n-2;
    for(int i = 0; i<n; i++) {
        //stars
        for(int j = 0; j<=i; j++){
            cout<<"*";
        }

        //spaces 
        
        for(int k=0; k<l; k++){
            cout<<" ";
            
        }
        //stars
         for(int j = 0; j<=i; j++){
            cout<<"*";
        }
        l= l-2;
cout<<"\n";
    }
}
void pattern22(int n) {
    for(int i = 0; i<2*n-1; i++) {
        for(int j = 0; j<2*n-1; j++){
            int top =i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n-2) - i;
            cout<< (n - min(min(top,down), min(left,right)));
        }
        cout<<"\n";
    }
}
int main() {
    pattern22(5);
    
}