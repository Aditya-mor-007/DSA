#include<iostream>
using namespace std;
int main()


{    int n;

    cout << "Enter no. of rows:";
    cin >> n;

    int i = 0;
    while (i<n)
    {
        int j =0;
        while(j<(n-i)){
  cout << "*";
     j++;

        }

     cout << endl;
    i++;
    }
  
    


}