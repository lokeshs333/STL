#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "single pair" << endl;
    pair<int, int> p(1, 4);
    cout << p.first << " " << p.second << endl;
    cout << "triple pair" << endl;
    pair<int, pair<int, int>> pp = {1, {8, 9}};
    cout << pp.first << " " << pp.second.first << " " << pp.second.second << endl;
    pair<int, int> arr[10];
    int q = 10, w = 10;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = {q++, w++};
    }
    cout << "pair storing array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    return 0;
}