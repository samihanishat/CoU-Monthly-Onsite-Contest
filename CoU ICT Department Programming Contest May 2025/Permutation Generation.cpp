#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    if (t % 2 == 1)
    {
        cout << "impossible'";
    }
    else
    {

        for (int i = 2; i <= t; i = i + 2)
        {
            cout << i << " ";
            cout << i - 1 << " ";
        }
    }
}
