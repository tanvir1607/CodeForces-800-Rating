#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int size, ans = INT_MAX, x;
    cin >> size;
    while (size--) cin >> x, ans = min(ans, abs(x));
    cout << ans << endl;

    return 0;
}
