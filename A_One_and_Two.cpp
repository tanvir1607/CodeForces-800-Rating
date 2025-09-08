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
        int size;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        int count_2 = count(vec.begin(), vec.end(), 2), ans = 0;
        if (!count_2) ans = 1;
        else if (count_2 & 1) ans = -1;
        else
        {
            int found_2 = 0;
            for (int x : vec)
            {
                ans++;
                if (count_2 == 2 * (found_2 += x == 2 ? 1 : 0)) break;
            }     
        }
        cout << ans << endl;
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

        vector<int> indices;
        for (int i = 0; i < size; i++) 
            if (vec[i] == 2) indices.push_back(i + 1);

        int count_2 = count(vec.begin(), vec.end(), 2), ans = 0;
        if (!count_2) ans = 1;
        else if (count_2 & 1) ans = -1;
        else ans = indices[(count_2 / 2) - 1];
        cout << ans << endl;
    }

    return 0;
}