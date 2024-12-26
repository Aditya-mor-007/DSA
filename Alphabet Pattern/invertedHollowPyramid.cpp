#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        if(i==0){
           
            for(int j=1;j<=n;j++){
                cout<<'V'<<" ";
            }
          
            cout <<endl;

        }
        else if(i==(n-1)){
            cout<<'V';
        }
        else {
            cout<<'V';
            for(int k=1;k<=(2*(n-i-1)-1);k++){
                cout<<" ";
            }
            cout<<'V'<<endl;
        }
        
    }
}