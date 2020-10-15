#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void printSmallest(ll arr[], ll n){
    ll Fmin = INT_MAX, Smin = INT_MAX;
    
    for(ll i=0; i<n; i++){
        if(Fmin > arr[i]){
            Smin = Fmin;
            Fmin = arr[i];
        }
        
        else if(Fmin < arr[i] && arr[i] < Smin){
            Smin = arr[i];
        }
    }
    
    if(Smin == INT_MAX)
        cout<<-1<<"\n";
    else
        cout<<Fmin<<" "<<Smin<<"\n";
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
        
        printSmallest(arr, n);

    }
    return 0;
}
