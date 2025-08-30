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
        {
            for (int j = 0; j < COL; j++)
            {
                char ch;
                cin >> ch;
                if (ch == 'X') score += scores[i][j];
            }
        }
        cout << score << endl;
    }

    return 0;
}






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
        for (auto &x : vec) cin >> x;

        int total = 0;
        for(int row = 0; row < SIZE; row++)
        {
            for(int col = 0; col < SIZE; col++)
            {
                if(vec[row][col] == '.') continue;
                int edgeRowDis = min(row, SIZE - 1 - row),
                    edgeColDis = min(col, SIZE - 1 - col),
                    score = 1 + min(edgeRowDis, edgeColDis);
                total += score;
            }
        }
        cout << total << endl;
    }

    return 0;
}
