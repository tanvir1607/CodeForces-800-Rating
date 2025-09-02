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
        int size, x;
        cin >> size;
        set<int> Set;
        while (size--) cin >> x, Set.insert(x);
        cout << Set.size() << endl;
    }

    return 0;
}