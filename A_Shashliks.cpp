#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int count(int k, int a, int b, int x, int y)
{
    int useA = 0, useB = 0;
    if (k >= a) useA = (k - (a - x)) / x;
    k -= useA * x;
    if (k >= b) useB = (k - (b - y)) / y;
    return useA + useB;
}

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        cout << max(count(k, a, b, x, y), count(k, b, a, y, x)) << endl;
    }

    return 0;
}





// Cleaner Version
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int count(int k, int a, int b, int x, int y)
{
    int useA = max((k - (a - x)) / x, 0);
    k -= useA * x;
    int useB = max((k - (b - y)) / y, 0);
    return useA + useB;
}

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        if (x > y) swap(a, b), swap(x, y);
        cout << count(k, a, b, x, y) << endl;
    }

    return 0;
}