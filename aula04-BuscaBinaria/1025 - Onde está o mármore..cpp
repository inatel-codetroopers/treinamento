/*
A complexidade de uma busca bin�ria � O(log n).
Algoritmos de complexidade logar�tmica s�o
extremamente r�pidos. Para se ter uma ideia, pela
busca bin�ria � poss�vel encontrar um elemento em
um vetor de 10^18 elementos com apenas 60 opera��es.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, q, busca;
	int cont = 1;
	cin >> n >> q;
	while(n != 0 || q != 0)
	{
		int v[n];
		for(int i = 0; i < n; i++)
			cin >> v[i];

		sort(v, v + n);
		
		cout << "CASE# " << cont << ":" << endl;

		for(int j = 0; j < q; j++)
		{
			cin >> busca;

			int baixo = 0, alto = n-1;
			int meio;
			
			bool achei = false;
			
			while(alto >= baixo && !achei)
			{
				meio = (baixo + alto) / 2;
				
				if(v[meio] == busca)
					achei = true;

				else if(v[meio] > busca)
					alto = meio - 1;

				else
					baixo = meio + 1;
			}
			
			if(!achei)
				cout << busca << " not found" << endl;
			
			else
			{
				while(v[meio-1] == v[meio] && meio != 0)
					meio--;
				
				cout << busca << " found at " << meio + 1 << endl;
			}
		}
		
		cont++;
		cin >> n >> q;
	}
}
