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
        int n, a, b;
        cin >> n >> a >> b;
        cout << (a == n && b == n || a + b <= n - 2 ? "Yes" : "No") << endl;
    }

    return 0;
}
