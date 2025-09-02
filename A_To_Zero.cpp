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

        int op = 0;
        op += n & 1 ? (n -= k, --k, 1) : (--k, 0);
        op += n / k;
        op += n % k ? 1 : 0;
        cout << op << endl;
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
        int n, k;
        cin >> n >> k;

        int op = 0;
        if (n & 1) n -= k, op = 1;
        --k;
        op += (n + k - 1) / k;
        cout << op << endl;
    }

    return 0;
}