// Approach - 1
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
        int size, x;
        cin >> size;
        map<int, bool> Map;
        while (size--) cin >> x, Map[x] = true;
        cout << Map.size() << endl;
    }

    return 0;
}






// Approach - 3
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
        int size, count = 0;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        const int SIZE = 100;
        vector<bool> seen(SIZE + 1, false);
        for (int x : vec)
            if (!seen[x]) count++, seen[x] = true;
        cout << count << endl;
    }

    return 0;
}





// Approach - 4
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
        int size, count = 0;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        cout << vec.size() << endl;
    }

    return 0;
}