#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[200005];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    cout << unique(arr, arr + n) - arr;
}