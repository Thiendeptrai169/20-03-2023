#include <iostream>
using namespace std;
int main(){
    int n, a[1000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int max = a[0];
    for(int i =0; i < n; i++){
        if(a[i] > max3 )
        max = a[i];
    }
    cout << max;
}