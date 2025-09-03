#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--) 
    {
        int size;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        map<int, int> freq;
        int ans = 0;
        for (int i = 0; i < size; i++)
        {
            freq[vec[i]]++;
            if (freq[0] >= 3 && freq[1] >= 1 && freq[2] >= 2 && 
                freq[3] >= 1 && freq[5] >= 1)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}