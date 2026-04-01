#include<bits/stdc++.h>
using namespace std;
void countingSort(int arr[], int n, int freq[]) {
    for(int i = 0; i < n; i++)
        freq[arr[i]]++;
}
int main(){
    int n;
    cin >> n;
    int arr[100005];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int freq[100] = {0};
    countingSort(arr, n, freq);
    for(int i = 0; i < 100; i++)
        cout << freq[i] << " ";
}