/*
n = 7
*******
**   **
* * * *
*  *  *
* * * *
**   **
*******
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
            if(i == 1 || j == 1 || i == n || j == n || j == i || i + j == n + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}