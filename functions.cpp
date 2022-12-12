#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max({a, b, c, d});
    
    return 0;
}
