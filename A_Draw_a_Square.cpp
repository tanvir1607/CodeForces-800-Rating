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
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        cout << (l == r && l == d && l == u ? "Yes" : "No") << endl;
    }

    return 0;
}