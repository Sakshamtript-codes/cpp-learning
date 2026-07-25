//method 1
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int l=1; l<=i-1; l++){
            cout<<l<<" ";
        }
        for(int j=1; j<=n; j++){
            if ((i,j)==(j,i)) cout<<i<<" ";
        }
        for(int k=1; k<=n-i; k++){
            cout<<i<<" ";
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
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<min(i,j)<<" ";
        }
        cout<<endl;
    }
}
