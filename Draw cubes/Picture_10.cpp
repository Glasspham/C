/*
n = 5
        *
      * * *       
    * * * * *     
  * * * * * * *   
* * * * * * * * * 
  * * * * * * *   
    * * * * *     
      * * *       
        *
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;

    for(int i = 1; i <= n; i++)
    {
        if(i == n)
            break;
        for(int j = 1; j <= (2 * n - 1); j++)
        {
            if(j >= (n - i + 1) && j <= (n + i - 1))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= (2 * n - 1); j++)
        {
            if(j >= (n - i + 1) && j <= (n + i - 1))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}