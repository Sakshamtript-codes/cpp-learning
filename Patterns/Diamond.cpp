//method 1
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>=1; j--){
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        for(int j=2*(n-i)-1; j>=1; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}*/

//method 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int nsp = n-1, nst = 1;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        for(int j=1; j<=nst; j++){
            cout<<"* ";
        }
        if (i<n){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        cout<<endl;
    }
}