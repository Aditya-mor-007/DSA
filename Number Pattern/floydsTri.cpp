#include<iostream>
using namespace std;

int main(){
    int n;
    int count =1;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl ;
        
    }
    
}