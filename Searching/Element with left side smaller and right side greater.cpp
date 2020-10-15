#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define pf push_front

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;   cin>>n;
        ll arr[n];  for(ll i=0; i<n; i++)   cin>>arr[i];
        
        ll mini[n], maxi[n];
        maxi[0] = arr[0]; mini[n-1] = arr[n-1];
        
        for(ll i=1; i<n; i++){
            maxi[i] = max(maxi[i-1], arr[i]);
        }
        
        for(ll i=n-2; i>=0; i--){
            mini[i] = min(mini[i+1], arr[i]);
        }
        ll i;
        for(i=1; i<n-1; i++){
            if(mini[i] == maxi[i] && maxi[i] == arr[i]){
                cout<<arr[i]<<"\n";
                break;
            }
        }
        if(i == n-1)
            cout<<-1<<"\n";

    }
    return 0;
}
