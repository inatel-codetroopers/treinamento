#include <bits/stdc++.h>
using namespace std;

int v[1000007];
int main()
{
	int n, x;
	cin >> n;
	int cont = 0;

	for(int i = 0; i < n; i++)
	{
		cin >> x;
		v[x]++;
	}
	
	for(int i = 0; i < 1000007; i++)
	{
		if(v[i] > 0)
			cont++;
	}
	
	cout << cont << endl;
	return 0;
}