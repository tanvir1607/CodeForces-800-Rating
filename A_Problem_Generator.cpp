#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int num, round;
        cin >> num >> round;
        map<char, int> Map;
        while (num--)
        {
            char ch;
            cin >> ch, Map[ch]++;
        }

        int count = 0;
        for (char ch = 'A'; ch <= 'G'; ch++)
            count += round > Map[ch] ? round - Map[ch] : 0;

        cout << count << endl;
    }

    return 0;
}