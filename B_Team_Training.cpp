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
        int size, target;
        cin >> size >> target;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        sort(vec.rbegin(), vec.rend());
        int member = 1, team = 0;
        for (int x : vec)
            if (member * x >= target) team++, member = 1;
            else member++;
        cout << team << endl;
    }

    return 0;
}
