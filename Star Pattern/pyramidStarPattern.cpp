#include<iostream>
using namespace std;
int main(){
   int n; 
   
    cout << "Enter no. of rows: ";
    cin >> n;

    ;
    int i=1;
    while(i<=n){

        int j=1;
        while(j <= (n-i)){
            cout<< " ";
            j++;

        }
        while(j > (n-i) && j <(n+i) ){
        cout << "*";
        j++;}




        cout<< endl;
        i++;
    }


}