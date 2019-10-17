#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int v[1007];
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
			cin >> v[i];
		
		sort(v, v+n);
		
		int soma = 0;
		for(int i = 0, j = n-1; i < j; i++, j--)
			soma += (v[j] - v[i]);
		
		cout << soma << endl;
	}
	return 0;
}