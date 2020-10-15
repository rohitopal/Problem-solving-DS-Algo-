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
        ll n1, n2, n3; cin>>n1>>n2>>n3;
        ll arr[n1], brr[n2], crr[n3];
        for(ll i=0; i<n1; i++)   cin>>arr[i];
        for(ll i=0; i<n2; i++)   cin>>brr[i];
        for(ll i=0; i<n3; i++)   cin>>crr[i];
        
        ll i=0, j=0, k=0;
        set<ll> ans;
        while(i<n1 && j<n2 && k<n3){
            
            if(arr[i] == brr[j] && brr[j] == crr[k])
                ans.insert(arr[i]);
            
            if(arr[i] >= brr[j] && crr[k] >= brr[j]){
                j++;
            }
            else if(brr[j] >= arr[i] && crr[k] >= arr[i]){
                i++;
            }
            else{
                k++;
            }
                
        }
        
        if(ans.size() == 0){
            cout<<-1;
        }
        else{
            for(ll i: ans)
                cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
