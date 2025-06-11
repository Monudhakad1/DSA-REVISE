#include <bits/stdc++.h>
using namespace std;

int main()
{
     // Your code goes here
     int n;
     cin >> n;
     for (int i = 0; i < (2 * n - 1); i++)
     {
          if (i < n)
          {
               for (int j = 0; j < 2 * n - 1; j++)
               {
                    cout << "*";
               }
          }
          else
          {
               for (int k = 2 * n - 1; k > 0; k--)
               {
                    cout << "*";
               }
          }

          cout << endl;
     }
}