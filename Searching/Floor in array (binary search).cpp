#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Floor(ll arr[], ll n, ll t){
    ll l=0, r = n-1;
    while(l <= r){
        ll mid = l + (r-l)/2;
        if(arr[mid] == t)
            return mid;
        if(arr[mid] > t)
            r = mid-1;
        else 
            l = mid+1;
    }
    if(r<0)
        return -1;
    return r;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;    cin>>n>>k;
        ll arr[n];  for(ll i=0; i<n; i++)   cin>>arr[i];
        
        cout<<Floor(arr, n, k)<<"\n";

    }
    return 0;
}
