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
        int x, y, a;
        cin >> x >> y >> a;
        cout << (x > a % (x + y) ? "NO" : "YES") << endl;
    }

    return 0;
}
