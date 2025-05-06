// Format
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<string> s;
        while (m--)
        {
            string ss;
            cin >> ss;
            s.insert(ss);
        }
        for (int i = 0; i < (1 << n); i++)
        {
            string bc = bitset<10>(i).to_string().substr(10 - n);
            if(s.find(bc) == s.end()){
                cout << bc << endl;
                break;
            }
        }
    }
}
