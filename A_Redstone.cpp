// Approach 1: Using Map
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int solve()
{
    int size;
    cin >> size;
    vector<int> vec(size);
    map<int, int> freq;
    for (int &x : vec) cin >> x, freq[x]++;

    for (auto [key, val] : freq)
    {
        if (val > 1)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

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




// Approach 2: Using Map
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

        for (auto it = freq.begin(); it != freq.end(); )
            if (it->second == 1) it = freq.erase(it);
            else it++;
        
        if (!freq.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}



// Approach 1: Using Set
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
        
        bool found = false;
        set<int> Set;
        for (int x : vec)
            if (Set.count(x)) found = true;
            else Set.insert(x);
        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}