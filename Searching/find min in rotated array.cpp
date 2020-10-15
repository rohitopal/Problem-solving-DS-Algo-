#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getmin(ll arr[], ll l, ll r){
    ll mid = l + (r-l)/2;
    
    if(mid == 0 || arr[mid-1]>arr[mid])
        return arr[mid];
    
    if(arr[r]>=arr[mid])
        return getmin(arr, l, mid-1);
    return getmin(arr, mid+1, r);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;   cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++)   cin>>arr[i];
 
        
        cout<<getmin(arr, 0, n-1)<<"\n";

    }
    return 0;
}
