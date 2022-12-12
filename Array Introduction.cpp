#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a;
    cin >> n;
    vector <int> num;
    for (int i = 1; i <= n;  i++){
        cin >> a;
        num.push_back(a);
    }
    reverse(num.begin(), num.end());
    for (int i=0; i < num.size(); i++) {
        cout << num[i] << " ";
}
    
    return 0;
}
