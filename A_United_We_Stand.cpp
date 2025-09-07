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
        int size;
        cin >> size;
        vector<int> a(size), b, c;
        for (int &x : a) cin >> x;

        int maxVal = *max_element(a.begin(), a.end());
        for (int x : a) x == maxVal ? c.push_back(x) : b.push_back(x);

        if (b.size())
        {
            cout << b.size() << " " << c.size() << endl;
            for (int x : b) cout << x << " ";
            cout << endl;
            for (int x : c) cout << x << " ";
            cout << endl;
        }
        else cout << -1 << endl;
    }

    return 0;
}





