#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll baskin(ll arr[], ll l, ll r){
    sort(arr, arr+(r-l+1));
    ll mini = INT_MAX;
    ll ans;
    while(l<r){
        if(mini > abs(arr[l]+arr[r])){
            mini = abs(arr[l]+arr[r]);
            ans = arr[l] + arr[r];
        }
        
        if(arr[l]+arr[r] > 0)
            r--;
        else
            l++;
    }
    return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll  n;  cin>>n;
        ll arr[n];
        
        for(ll i=0; i<n; i++)
            cin>>arr[i];
            
        cout<<baskin(arr, 0, n-1)<<"\n";

    }
    return 0;
}
