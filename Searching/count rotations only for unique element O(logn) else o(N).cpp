#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll countRotations(ll arr[], ll low, ll high) 
{ 
    // This condition is needed to handle the case 
    // when the array is not rotated at all 
    if (high < low) 
        return 0; 
  
    // If there is only one element left 
    if (high == low) 
        return low; 
  
    // Find mid 
    int mid = low + (high - low)/2; /*(low + high)/2;*/
  
    // Check if element (mid+1) is minimum element. 
    // Consider the cases like {3, 4, 5, 1, 2} 
    if (mid < high && arr[mid+1] < arr[mid]) 
       return (mid+1); 
  
    // Check if mid itself is minimum element 
    if (mid > low && arr[mid] < arr[mid - 1]) 
       return mid; 
  
    // Decide whether we need to go to left half or 
    // right half 
    if (arr[high] > arr[mid]) 
       return countRotations(arr, low, mid-1); 
  
    return countRotations(arr, mid+1, high); 
} 
  

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++)   cin>>arr[i];
        
        cout<<countRotations(arr, 0, n-1)<<"\n";

    }
    return 0;
}
