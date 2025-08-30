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
        int size, count = 0, x;
        cin >> size;
        while (size--)
        {
            cin >> x;
            if (x & 1) count++;
        }
        cout << ((count & 1) ? "NO" : "YES") << endl;
    }

    return 0;
}