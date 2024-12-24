#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter no. of rows: ";
    cin>> n;
    int i = 0;
    while(i <n){
        int j =1;
        while(j<= (i)){
            cout<<" ";
            j++;
        }
        int k =n;
        while (k >=(i+1)){
            cout << "*";
            k--;
        }
        cout<< endl;
        i++;
    }
}
