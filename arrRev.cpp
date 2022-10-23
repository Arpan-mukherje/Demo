#include <bits/stdc++.h>
using namespace std;
void arrRev(int i, int arr[], int j){
    if(i>=j/2)
    return;
    else
    {
        swap(arr[i],arr[j-1]);
    }
    arrRev(i+1,arr, j-1);
    
}
int main() {
    int n;
    cin>>n;
   int a[n]; 
   for(int i=0;i<n;i++)
   cin>>a[i];
   arrRev(0,a, n);
   for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
}
