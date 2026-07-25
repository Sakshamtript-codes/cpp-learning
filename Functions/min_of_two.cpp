#include<iostream>
using namespace std;

//defining a function

void minoftwo(int a , int b){
    if(a>b) cout<<b<<" is smaller.";
    else cout<<a<<" is smaller.";
}

int main(){
    minoftwo(13,78); //callling a function
}