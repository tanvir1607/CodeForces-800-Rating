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
        int size, val;
        cin >> size;
        set<int> SetA, SetB;
        for (int i = 0; i < size; i++) cin >> val, SetA.insert(val);
        for (int i = 0; i < size; i++) cin >> val, SetB.insert(val);
        cout << (SetA.size() + SetB.size() >= 4 ? "YES" : "NO") << endl;
    }

    return 0;
}

