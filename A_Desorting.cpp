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
            int diff = INT_MAX;
            for (int i = 1; i < size; i++)
                diff = min(diff, vec[i] - vec[i - 1]);
            cout << (diff / 2) + 1 << endl;
            // cout << (diff + 2) / 2 << endl;
        }
        else cout << 0 << endl;
    }

    return 0;
}