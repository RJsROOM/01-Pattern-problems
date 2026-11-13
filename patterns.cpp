#include<iostream>
using namespace std;
/*
1. 
    * * * *
    * * * *
    * * * *
    * * * *
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}


2.
    *
    * *
    * * *
    * * * *

void print(int n){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}


3. 
    1
    1 2
    1 2 3
    1 2 3 4

void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}


4. 
    * * * *
    * * *
    * *
    * 


void print(int n){
    for(int i=n;i>=1;i--){
        for(int j=i; j>=1; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}


5.
    1 2 3 4
    1 2 3 
    1 2 
    1 


void print(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}


6. 
      *
    * * *
  * * * * *




*/

void print(int n){
    for(int i=1; i<=n; i++){
        //space
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        //star
        for(int j=1; j<=2*i-1; j++){
            cout<<"* ";
        }
        //space
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}