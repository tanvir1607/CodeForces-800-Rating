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
        int row, col = 4;
        cin >> row;
        vector<vector<char>> vec(row, vector<char>(col));
        for (auto &rowVec : vec)
            for (char &ch : rowVec) cin >>  ch;

        for (int i = row - 1; i >= 0; i--)
        {
            for (int j = 0; j < col; j++)
            {
                if (vec[i][j] == '#')
                {
                    cout << j + 1 << " ";
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}









#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize()               \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int row, col = 4;
        cin >> row;
        vector<string> vec(row);
        for (string &str : vec) cin >> str;

        reverse(vec.begin(), vec.end());
        for (string str : vec)
            cout << find(str.begin(), str.end(), '#') - str.begin() + 1 << " ";
        cout << endl;
    }

    return 0;
}