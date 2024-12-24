#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of rows:";
    cin >> n;

   

    for(int i =1; i <= 2*n-1;i++)
    {
        for (int j=1;j<= (n-i)&& i<=n;j++){
            cout << " ";
        }

        for(int k=1; k <=(2*i-1) && i<= n;k++){
            cout <<"*";
        }

       for(int j=1;j<= i-n && i>n;j++){
            cout << " ";
        }

        for(int j =1 ; j<= 2*(2*n-i)-1 && i>n ;j++){
            cout << "*";
        }

        cout << endl;    
    }
}