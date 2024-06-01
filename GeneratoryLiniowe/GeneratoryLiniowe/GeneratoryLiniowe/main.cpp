#include <iostream>
#include <cmath>

using namespace std;

#define a 69069
#define c 1
#define M 2147483648
#define n 100000
#define p 7
#define q 3


int main()
{
	// zadanie 2.2

	int licznik = 0;

	unsigned int x = 15;

	int liczniki[10];
	for (int i = 0; i < 10; i++)
	{
		liczniki[i] = 0;
	}

	while (licznik < n)
	{
		unsigned int temp = (a * x + c) % M;
		x = temp;

		if (temp < M/10)
		{
			liczniki[0]++;
		}
		else if (temp < M*2/10)
		{
			liczniki[1]++;
		}
		else if (temp < M*3/10)
		{
			liczniki[2]++;
		}
		else if (temp < M * 4 / 10)
		{
			liczniki[3]++;
		}
		else if (temp < M * 5 / 10)
		{
			liczniki[4]++;
		}
		else if (temp < M * 6 / 10)
		{
			liczniki[5]++;
		}
		else if (temp < M * 7 / 10)
		{
			liczniki[6]++;
		}
		else if (temp < M * 8 / 10)
		{
			liczniki[7]++;
		}
		else if (temp < M * 9 / 10)
		{
			liczniki[8]++;
		}
		else
		{
			liczniki[9]++;
		}
		licznik++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << " " << liczniki[i] << endl;
	}

	// zadanie 2.6

	for (int i = 0; i < 10; i++)
	{
		liczniki[i] = 0;
	}
	
	bool tab[31];
	bool temp[31];

	tab[0] = 1;
	tab[1] = 0;
	tab[2] = 0;
	tab[3] = 1;
	tab[4] = 0;
	tab[5] = 1;
	tab[6] = 1;

	for (int i = 7; i < 31; i++)
	{
		tab[i] = (tab[i - p])^(tab[i - q]);
	}
	
	int liczba = 0;

	for (int i = 0; i < 31; i++)
	{
		liczba = liczba + tab[i] * pow(2, i);
	}

	if (liczba < M / 10)
	{
		liczniki[0]++;
	}
	else if (liczba < M * 2 / 10)
	{
		liczniki[1]++;
	}
	else if (liczba < M * 3 / 10)
	{
		liczniki[2]++;
	}
	else if (liczba < M * 4 / 10)
	{
		liczniki[3]++;
	}
	else if (liczba < M * 5 / 10)
	{
		liczniki[4]++;
	}
	else if (liczba < M * 6 / 10)
	{
		liczniki[5]++;
	}
	else if (liczba < M * 7 / 10)
	{
		liczniki[6]++;
	}
	else if (liczba < M * 8 / 10)
	{
		liczniki[7]++;
	}
	else if (liczba < M * 9 / 10)
	{
		liczniki[8]++;
	}
	else
	{
		liczniki[9]++;
	}


	for (int j = 1; j < n; j++)
	{
		for (int i = 0; i < 7; i++)
		{
			temp[i] = tab[i + 24];
		}

		for (int i = 7; i < 31; i++)
		{
			temp[i] = (temp[i - p]) ^ (temp[i - q]);
		}

		int liczba = 0;

		for (int i = 0; i < 31; i++)
		{
			liczba = liczba + tab[i] * pow(2, i);
		}

		if (liczba < M / 10)
		{
			liczniki[0]++;
		}
		else if (liczba < M * 2 / 10)
		{
			liczniki[1]++;
		}
		else if (liczba < M * 3 / 10)
		{
			liczniki[2]++;
		}
		else if (liczba < M * 4 / 10)
		{
			liczniki[3]++;
		}
		else if (liczba < M * 5 / 10)
		{
			liczniki[4]++;
		}
		else if (liczba < M * 6 / 10)
		{
			liczniki[5]++;
		}
		else if (liczba < M * 7 / 10)
		{
			liczniki[6]++;
		}
		else if (liczba < M * 8 / 10)
		{
			liczniki[7]++;
		}
		else if (liczba < M * 9 / 10)
		{
			liczniki[8]++;
		}
		else
		{
			liczniki[9]++;
		}

		for (int i = 0; i < 31; i++)
		{
			tab[i] = temp[i];
		}

		for (int i = 0; i < 31; i++)
		{
			temp[i] = 0;
		}
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << " " << liczniki[i] << endl;
	}


	return 0;
}