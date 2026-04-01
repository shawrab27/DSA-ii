#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[222222];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int current_sum = arr[0], best_sum = arr[0];
    for(int i = 1; i < n; i++){
        current_sum = max(arr[i], current_sum + arr[i]);
        best_sum = max(best_sum, current_sum);
    }
    cout << best_sum;
}