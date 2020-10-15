#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bin_search(ll arr[], ll l, ll r, ll t){
    while(l<=r){
        ll mid = l + (r-l)/2;
        if(arr[mid] == t)
            return mid;
            
        if(arr[mid] > t)
            r = mid-1;
        else
            l = mid+1;
    }
    return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll arr[n]; for(ll i=0; i<n; i++)    cin>>arr[i];
        ll k, x;    cin>>k>>x;
        vector<ll> v;
        ll pos = bin_search(arr, 0, n-1, x);
        ll i=pos+1, j=pos-1;
        while(k){
            if(k && i<n){
                v.push_back(arr[i++]);
                k--;
            }
            else if(k && j >= 0){
                v.push_back(arr[j--]);
                k--;
            }
                
                
            if(k && j >=0){
                v.push_back(arr[j--]);
                k--;
            }
            else if(k && i<n){
                v.push_back(arr[i++]);
                k--;
            }
        }
        sort(v.begin(), v.end());
        for(ll i=0; i<v.size(); i++)    cout<<v[i]<<" ";
    
        cout<<"\n";
    }
    return 0;
}
