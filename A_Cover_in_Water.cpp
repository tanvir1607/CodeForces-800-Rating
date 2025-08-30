#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int solve()
{
    int size;
    cin >> size;
    string str;
    cin >> str;

    for (int i = 0, j = 1, k = 2; k < size; i++, j++, k++)
    {
        if (str[i] == '.' && str[j] == '.' && str[k] == '.')
        {
            cout << 2 << endl;
            return 0;
        }
    }
    cout << count(str.begin(), str.end(), '.') << endl;   
    return 0;
}

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
        solve();

    return 0;
}