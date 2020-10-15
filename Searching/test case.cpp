#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	srand(time(0));
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("input06.txt","w",stdout);
	int x,y,t,n,i,j,k;
	t = 5;
	cout << t;
	cout << "\n";
	while(t--)
	{
		n = 1 + rand() % 100;
		k = 1 + rand()  % 1000;
		cout << n << " " << k << '\n';
		unordered_set<int>S;
		while(S.size() != n)
		{
			int tmp = 1 + rand() % 1000;
		   S.insert(tmp);
			
		}
		
		for(auto &it : S)
		{
			cout << it << " ";
		}
		
		cout << '\n';
		
		
	}
	
	
}
