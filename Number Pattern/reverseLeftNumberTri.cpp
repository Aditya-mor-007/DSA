#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter no. of rows: ";
    cin >> n;
    for(int i=0 ;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=(n-i);j>0;j--){
            cout <<j;
        }
        cout<< endl;
    }
}