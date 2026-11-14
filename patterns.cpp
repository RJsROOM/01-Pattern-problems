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


7.
        *
      * * *
    * * * * *
    * * * * *
      * * *
        *
        
void print6(int n){
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

void print7(int n){
    for(int i=1; i<=n; i++){
        //space
        for(int j=1; j<i; j++){
            cout<<"  ";
        }
        //star
        for(int j=1; j<=2*n-(2*i-1); j++){
            cout<<"* ";
        }
        //space
        for(int j=1; j<=i-1; j++){
            cout<<"  ";
        }

        cout<<endl;
    }
}



8.
    *
    * *
    * * *
    * * * *
    * * *
    * *
    *       (for n=4)


void print8(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars= i;
        if(i>n) stars= 2*n-i;

        for(int j=1; j<=stars; j++){
            cout<<"* ";
        }

        cout<<endl;
    }
}


9.
    1
    0 1
    1 0 1
    0 1 0 1






*/




int main(){
    int n;
    cin>>n;
    print8(n);
    
}
