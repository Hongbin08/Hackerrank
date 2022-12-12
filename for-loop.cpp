#include <iostream>
#include <cstdio>
using namespace std;

int main() {
string num[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int a, b;
cin >> a >> b;
if (a <= b ){
    cout << num[a] << endl;
}
for (int i = a + 1 ; i <= b;  i++){
if ( i <= 9){
    cout << num[i] << endl;
}

if (i > 9){
    if ( i % 2 == 0 && i >= 10){
        cout << "even" << endl;
    }
    else{
        cout << "odd" << endl;
    }
}
}
    return 0;
}
