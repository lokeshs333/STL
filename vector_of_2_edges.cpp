// C++ program to demonstrate insertion
// into a vector of vectors

#include <iostream>
#include <vector>
using namespace std;

// Defining the rows and columns of
// vector of vectors
int main()
{
    int v, e;
    cout << "enter v and e" << endl;
    cin >> v >> e;
    vector<vector<int>> adj;
    for (int i = 0; i < e; i++)
    {
        vector<int> v;
        for (int i = 0; i < 2; i++)
        {
            int x;
            cout << "enter x" << endl;
            cin >> x;
            v.push_back(x);
        }
        adj.push_back(v);
    }
    for (int i = 0; i < adj.size(); i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }
    return 0;
}
