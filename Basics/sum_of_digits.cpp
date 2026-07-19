#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"Enter a integer: ";
    cin>>num;
    while(num){
        sum=sum + num%10;
        num /= 10;
    }
    cout<<"Sum of digits is: "<<sum;
}