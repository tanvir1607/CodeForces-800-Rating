#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int count = -1;
        for (int i = 0; i < 6; i++)
        {
            if (x.find(s) != string::npos)
            {
                count = i;
                break;
            }
            x += x;
        }
        cout << count << endl;
    }

    return 0;
}