// similar to vector
//  it has an additional function named push_front..
//  internal structure is a double ll
//  insertion take less time in list
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
    li.push_front(12);
    list<int>::iterator it;
    for (it = li.begin(); it != li.end(); ++it)
        cout << " " << *it;
    cout << '\n';
    return 0;
}