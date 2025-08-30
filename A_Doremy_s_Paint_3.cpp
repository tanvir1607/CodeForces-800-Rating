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
        map<int, int> freq;
        for (int &x : vec) cin >> x, freq[x]++;

        int mapSize = freq.size(),
            f1 = freq.begin()->second,
            f2 = freq.rbegin()->second;
        cout << (mapSize == 1 || (mapSize == 2 && abs(f1 - f2) == size % 2) ?
                "Yes" : "No") << endl;
    }

    return 0;
}