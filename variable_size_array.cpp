#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<vector<int>> a;
    int n,q,k = 0;
    cin >> n >> q;
    for (int i = 0; i<n; i++)
    {
        cin >> k;
        a.push_back({});
        for (int j =0; j<k ;j++)
        {
            int x;
            cin >> x;
            a.at(i).push_back(x);
        }
    }
    for (int i = 0; i<q; i++)
    {
        int r,c =0;
        cin >> r >> c;
        cout << a.at(r).at(c) <<endl;
    }
    return 0;
}
