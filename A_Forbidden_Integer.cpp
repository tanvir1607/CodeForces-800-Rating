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
        int target, k, x;
        cin >> target >> k >> x;

        if (k == 1 && x == 1 || (target & 1) && k < 3 && x == 1) 
            cout << "NO" << endl;
        else if (x != 1)
        {
            cout << "YES" << endl << target << endl;
            for (int i = 1; i <= target; i++) cout << 1 << " ";
            cout << endl;
        }
        else
        {
            cout << "YES" << endl << target / 2 << endl;
            if (target & 1) target -= 3, cout << 3 << " ";
            for (int i = 1; i <= target / 2; i++) cout << 2 << " ";
            cout << endl;
        }
    }

    return 0;
}
