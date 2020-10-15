#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

ll max3(ll a, ll b, ll c){
    return max(a, max(b,c));
}

ll min3(ll a, ll b, ll c){
    return min(a, min(b,c));
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
        ll arr[n]; for(ll i=0; i<n; i++)    cin>>arr[i];
        ll brr[n]; for(ll i=0; i<n; i++)    cin>>brr[i];
        ll crr[n]; for(ll i=0; i<n; i++)    cin>>crr[i];

        sort(arr, arr+n);
        sort(brr, brr+n);
        sort(crr, crr+n);
        ll i=0, j=0, k=0, a, b, c;
        
        ll mini = INT_MAX;
        while(i<n && j<n && k<n){
            if(mini > max3(arr[i], brr[j], crr[k]) - min3(arr[i], brr[j], crr[k])){
                mini = max3(arr[i], brr[j], crr[k]) - min3(arr[i], brr[j], crr[k]);
                a = arr[i];
                b = brr[j];
                c = crr[k];
            }
            if(arr[i] == min3(arr[i], brr[j], crr[k]))  i++;
            else if(brr[j] == min3(arr[i], brr[j], crr[k])) j++;
            else    k++;
        }
        vector<ll> ans = {a, b, c};
        sort(ans.begin(), ans.end(), greater<ll>());
        for(ll i: ans)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}
