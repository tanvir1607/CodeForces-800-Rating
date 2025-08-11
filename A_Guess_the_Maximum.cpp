// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define endl '\n'
// #define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

// int main() 
// {
//     optimize();

//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int size;
//         cin >> size;
//         vector<int> vec(size), ans(size - 1);
//         for (int &x : vec) cin >> x;
        
//         for (int i = 0; i < size - 1; i++) ans[i] = max(vec[i], vec[i + 1]);
//         cout << *min_element(ans.begin(), ans.end()) - 1 << endl;
//     }

//     return 0;
// }


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
        
        int maxVal = INT_MIN, ans = INT_MAX;
        for (int i = 0; i < size - 1; i++)
            maxVal = max(vec[i], vec[i + 1]),
            ans = min(ans, maxVal);
        
        cout << ans - 1 << endl;
    }

    return 0;
}