#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"Enter a integer: ";
    cin>>n;
    if (n==0) count++;
    while (n){
        n=n/10;
        count++;
    }
    cout<<"Number of digits: "<<count;
}