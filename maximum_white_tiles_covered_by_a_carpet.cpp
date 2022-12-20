#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> tiles{{10, 11}, {1, 5}, {12, 18}, {20, 25}, {30, 32}};
    sort(tiles.begin(), tiles.end());
    int carpetLen = 10;
    for (int i = 0; i < tiles.size(); i++)
    {
        for (int j = 0; j < tiles[i].size(); j++)
        {
            cout << tiles[i][j] << " ";
        }
        cout << "\n";
    }
    int mx = 0;
    for (int i = 0; i < tiles.size(); i++)
    {
        int start = tiles[i][0];
        int end = tiles[i][1];
        if (i + 1 < tiles.size() && tiles[i + 1][0] <= tiles[i][1] + 1)
        {
            cout << "first\n";
            while (i < tiles.size() - 1 && tiles[i + 1][0] <= tiles[i][1] + 1)
            {
                cout << "loop\n";
                i++;
            }
            end = tiles[i][1];
            mx = max(mx, end - start + 1);
        }
        else
        {
            cout << "second\n";
            mx = max(mx, end - start + 1);
        }
        cout << "mx=" << mx << endl;
    }
}