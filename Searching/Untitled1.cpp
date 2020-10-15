#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        unordered_set<ll> s;
        ll n;
        cin>>n;
        ll arr[n-1];
        ll freq[n+1] = {0};
        
        for(ll i=0; i<n-1; i++) cin>>arr[i];
        
        for(ll i=0; i<n-1; i++)
            freq[arr[i]] = 1;
            
        for(ll i=1; i<=n; i++){
            if(freq[i] == 0){
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}
