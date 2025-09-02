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
        string str;
        cin >> str;
        cout << str.substr(0, str.size() - 2) << 'i' << endl;
    }

    return 0;
}
