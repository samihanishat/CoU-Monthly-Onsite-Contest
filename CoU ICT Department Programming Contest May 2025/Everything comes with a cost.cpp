// Format
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        int b;
        cin >> n >> b;
        int res = log(n) / log(b);
        cout << res + 1 << endl;
    }
}
