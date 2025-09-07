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
        vector<int> vec(size);
        for (int &x : vec) cin >> x;
        
        if (is_sorted(vec.begin(), vec.end()))
        {
            int ans = INT_MAX;
            for (int i = 1; i < size; i++) ans = min(vec[i] - vec[i - 1], ans);
            cout << (ans + 2) / 2 << endl;
        }
        else cout << 0 << endl;
    }

    return 0;
}



