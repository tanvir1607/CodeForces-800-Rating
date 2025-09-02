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
        int k;
        cin >> k;
        cout << (k % 3 == 1 ? "YES" : "NO") << endl;
    }

    return 0;
}
