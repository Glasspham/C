/*
n = 5
*   *
 * * 
  *  
 * * 
*   *
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i + j == n + 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}