#include<iostream>
using namespace std;
int main(){
    int num;
    int rnum=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num){
       rnum = rnum * 10 + (num % 10);
       num = num / 10;
    }
    cout<<"Reverse of the number is: "<<rnum;
}