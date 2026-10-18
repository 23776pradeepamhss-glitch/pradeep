#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int start, int end, int target){
    while (start<=end){
        int mid = (start+end)/2;
        if (arr[mid] == target)
            return mid;
        else if(arr[mid] < target){
            start = mid+1;
        }
        else if (arr[mid] > target){
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    
    cout << binarysearch(arr, 0, n-1, target);
}

