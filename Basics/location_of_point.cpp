#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the x and y cordinates: ";
    cin>>x>>y;

    if (x==0){
        if (y==0){
            cout<<"Point lies on the origin.";
        }
        else {
            cout<<"Point lies on the y axis.";
        }
    }
    if (x>0){
        if (y>0){
            cout<<"Point lies in the first quadrant.";
        }
        else if (y==0){
            cout<<"Point lies on the x axis.";
        }
        else{
            cout<<"Point lies in the fourth quadrant.";
        }
    }
    if (x<0){
        if (y>0){
            cout<<"Point lies in the second quadrant.";
        }
        else if (y==0){
            cout<<"Point lies on the x axis.";
        }
        else{
            cout<<"Point lies in third quadrant.";
        }
    }

}