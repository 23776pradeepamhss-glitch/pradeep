#include <bits/stdc++.h>
using namespace std;

void merge (int arr[], int start, int mid, int end){
    int n = mid - start + 1;
    int m = end - mid;
    
    int result[n+m];
    
    int i = start;
    int j = mid + 1;
    
    int k = 0;
    
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) 
            result[k++] = arr[i++];
        else result[k++] = arr[j++];
    }
    
    while (i <= mid) result[k++] = arr[i++];
    while (j <= end) result[k++] = arr[j++];
    
    int y = start;
    
    for (int x=0;x<n+m;x++){
        arr[y++] = result[x];
    }
    
}

void mergesort (int arr[], int start, int end) {
    if (start >= end) return;
    
    int mid = (start + end)/2;
    
    mergesort(arr, start, mid);
    mergesort(arr, mid+1, end);
    
    merge (arr, start, mid, end);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    mergesort(arr, 0, n-1);
    
    for (int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }
    
    
}
