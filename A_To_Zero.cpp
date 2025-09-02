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
        int n, k;
        cin >> n >> k;

        int ans = n & 1 ? (n -= k, --k, 1) : (--k, 0);
        ans += n / k;
        ans += n % k ? 1 : 0;
        cout << ans << endl;
    }

    return 0;
}