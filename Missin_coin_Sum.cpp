#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long arr[200005];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    long long reach = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] > reach) break;
        reach += arr[i];
    }
    cout << reach;
}