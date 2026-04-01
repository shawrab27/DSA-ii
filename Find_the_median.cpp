#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long arr[101011];
    for(int i = 0; i < n; i++) cin >> arr[i];
    nth_element(arr, arr + n/2, arr + n);
    cout << arr[n/2];
}