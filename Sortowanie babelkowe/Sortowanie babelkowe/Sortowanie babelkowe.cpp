#include <iostream>

using namespace std;

int main()
{
	int *tablica, n, p, zmiany;
		
	cout << "Jak duza ma byc tablica" << endl;
	cin >> n;
	
	tablica = new int[n];

		for (int i = 0; i < n; i++)
		{
			cout << "\nPodaj " << i + 1 << " Liczbe: ";
			cin >> tablica[i];
		}

	for (int i = 0; i < (n - 1); i++) 
	{
		
		zmiany = 0;
		
		for (int j = 0; j < (n - 1); j++)
		{
			if (tablica[j] > tablica[j + 1]) 
			{
				p = tablica[j];
				tablica[j] = tablica[j + 1];
				tablica[j + 1] = p;
				zmiany++;
			}

		}
		if (zmiany == 0) break;

	}
	
	for (int i = 0; i < n; i++) 
	{
		cout << tablica[i] << "; ";
	}
	
	return 0;
	 
}