#include <bits/stdc++.h>
using namespace std; 


int main(){
    int marks;
    cin>>marks;
    if(marks>=80 && marks<=100){
        cout<<"a";
    }else if(marks>=60 && marks<=79){
        cout<<"b";
    }else if(marks>=50 && marks<=59){
        cout<<"c";
    }else if(marks>=45 && marks<=49){
        cout<<"d";
    }else if(marks>=25 && marks<=44){
        cout<<"e";
    }else if(marks>=0 && marks<25){
        cout<<"f";
    }else{
        cout<<"Invalid Mark";
    }
    return 0;
}