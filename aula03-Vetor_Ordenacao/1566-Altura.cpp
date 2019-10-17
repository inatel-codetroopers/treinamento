//este código não passa nos casos de teste do URI,
//mas serve para entender o funcionamento do sort

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int nc;
	cin >> nc;
	for(int i = 0; i < nc; i++)
	{
		int n;
		cin >> n;
		int v[n];
		
		for(int j = 0; j < n; j++)
			cin >> v[j];
		
		sort(v, v+n);
		
		for(int j = 0; j < n; j++)
			cout << v[j] << " ";
		cout << endl;
	}
	return 0;
}