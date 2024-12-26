#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";

        }
        if(i==1){
            cout<<'A'<<endl;
        }
        else if(i==n){
            for(int k=1;k<=n;k++){
                cout<<'A'<<" ";
            }
        }
        else{
            cout<<'A';
            for(int k=1;k<=2*(i-1)-1;k++){
                cout<<" ";
            }
              cout<<'A'<<endl;
            
        }
    }
}