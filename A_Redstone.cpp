// Approach 1
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
        for (int i = 0; i < size && !found; i++)
            for (int j = i + 1; j < size && !found; j++)
                if (vec[i] == vec[j]) found = true;
        
        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}





// Approach - 2
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





// Approach 3
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

        bool found = false;
        for (auto [key, val] : freq)
            if (val > 1) found = true;
        
        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}




// Approach 4
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
        
        cout << (!freq.empty() ? "YES" : "NO") << endl;
    }

    return 0;
}
