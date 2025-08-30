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
        ll n, k;
        cin >> n >> k;
        cout << ((n & 1) && !(k & 1) ? "NO" : "YES") << endl;
    }

    return 0;
}



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
        ll n, k;
        cin >> n >> k;
        cout << (!(n & 1) || (k & 1) ? "YES" : "NO") << endl;
    }

    return 0;
}

