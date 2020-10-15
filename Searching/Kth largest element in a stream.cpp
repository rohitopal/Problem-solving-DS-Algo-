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
        ll k, n;    cin>>k>>n;
        ll arr[n];
        
        for(ll i=0; i<n; i++)   cin>>arr[i];
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        ll maxi = INT_MAX;
        for(ll i=0; i<n; i++){
            pq.push(arr[i]);
            if(pq.size()<k){
                cout<<-1<<" ";
            }
            else if(pq.size() == k){
                cout<<pq.top()<<" ";
            }
            else{
                pq.pop();
                cout<<pq.top()<<" ";
            }
            
        }
        cout<<"\n";
    }
    return 0;
}
