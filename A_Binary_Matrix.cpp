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
        int row, col;
        cin >> row >> col;
        vector<string> vec(row);
        for (string &str : vec) cin >> str;

        int rowNum = 0, colNum = 0;
        for (string str : vec)
            rowNum += count(str.begin(), str.end(), '1') & 1;
        for (int i = 0, XorSum = 0; i < col; i++, XorSum = 0)
        { 
            for (int j = 0; j < row; j++) XorSum ^= vec[j][i] - '0';
            colNum += XorSum;
        }
        cout << max(rowNum, colNum) << endl;
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
        int row, col;
        cin >> row >> col;
        vector<string> vec(row), trans(col, string(row, ' '));
        for (string &str : vec) cin >> str;

        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                trans[j][i] = vec[i][j];

        int rowNum = 0, colNum = 0, XorSum;
        for (string str : vec)
            rowNum += count(str.begin(), str.end(), '1') & 1;
        for (string str : trans)
            colNum += count(str.begin(), str.end(), '1') & 1;
        cout << max(rowNum, colNum) << endl;
    }

    return 0;
}
