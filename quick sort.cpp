#include <bits/stdc++.h>
using namespace std;

int partition (int arr[], int start, int end) {
    int pivot = arr[end];
    
    int i=start-1;
    
    for (int j=start; j<end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap (arr[i], arr[j]);
        }
    }
    i++;
    swap (arr[i], arr[end]);
    return i;
}

void quicksort (int arr[], int start, int end) {
     if (start >= end) return;
     
     int p = partition(arr, start, end);
     
     quicksort(arr, start, p-1);
     quicksort(arr, p+1, end);
     
     
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    quicksort(arr, 0, n-1);
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}