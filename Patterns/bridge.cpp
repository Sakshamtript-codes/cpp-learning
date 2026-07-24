#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }
        for(int k=1; k<=2*i-3; k++){
            cout<<"  ";
        }
        if (i==1) {
            for(int l=1; l<=n-1; l++){
                cout<<"* ";
            }
        }
        else{
            for(int l=1; l<=n-i+1; l++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}