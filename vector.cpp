#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<pair<int, int>> arr;
    arr.push_back({1, 45});
    arr.push_back({12, 555});
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    return 0;
}