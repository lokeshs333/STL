// internal structure is tree
//  sorted and unique..
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(7);
    s.insert(7);
    s.insert(4);
    s.insert(7);
    s.insert(1);
    s.insert(2);
    s.insert(0);
    s.insert(5);
    // simply printing
    set<int>::iterator it;
    // 0 1 2 4 5 7
    auto it1 = s.find(0);
    auto it2 = s.find(5);
    s.erase(it1, it2);
    for (it = s.begin(); it != s.end(); ++it)
    {
        cout << " " << *it;
    }
    return 0;
}