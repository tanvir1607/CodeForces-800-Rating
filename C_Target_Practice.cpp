// Approach - 1
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

const int ROW = 10, COL = 10;
int scores[ROW][COL] = {
                        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                        };

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int score = 0;
        for (int i = 0; i < ROW; i++)
            for (int j = 0; j < COL; j++)
            {
                char ch;
                cin >> ch;
                score += (ch == 'X') * scores[i][j];
            }

        cout << score << endl;
    }

    return 0;
}





// Approach - 2
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

const int SIZE = 10;

int main() 
{
    optimize();

    int test; 
    cin >> test;
    while (test--)
    {
        vector<string> vec(SIZE);
        for (string &s : vec) cin >> s;

        int total = 0;
        for(int i = 0; i < SIZE; i++)
            for(int j = 0; j < SIZE; j++)
                if(vec[i][j] == 'X')
                    total += 1 + min({i, j, SIZE - 1 - i, SIZE - 1 - j});

        cout << total << endl;
    }

    return 0;
}
