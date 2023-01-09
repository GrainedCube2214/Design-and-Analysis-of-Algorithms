//Question: Maximum subarray problem

#include <iostream>
using namespace std;

int min(int a[]) {
    int n = sizeof(a); 
    int min = a[0]; 
    for (int i=0; i<n; i++) {
        if (min>a[i]) min=a[i]; 
    }
    return min;
}

int main() {
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3, 5,16,17,18,19 };
    int n=sizeof(arr)/sizeof(int); 
    int max = min(arr);
    int maxhere = 0;
    for (int i=0; i<n; i++) {
        maxhere+=arr[i];
        if (max<maxhere) max=maxhere;
        if (maxhere<0) maxhere=0;
    }
    cout << max;
}
