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
        ll n, k; cin>>n>>k;
        ll arr[n];
        for(ll i=0; i<n; i++)   cin>>arr[i];
        
        sort(arr, arr+n);
        ll i;
        for(i=0; i<n; i++){
            if(binary_search(arr, arr+n, k+arr[i]) || binary_search(arr, arr+n, arr[i]-k)){
                cout<<1<<"\n";
                break;
            }
        }
        if(i == n)
            cout<<-1<<'\n';
    }
    return 0;
}
