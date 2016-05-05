#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swap(int & a, int & b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void QuickSort(int *array, int left, int right)
{
	if (left < right)
	{
		int pivot = rand()%(right+1-left) +left;
		swap(array[pivot], array[right]);
		int j = left;
		for (int i = left; i < right; i++)
		{
			if (array[i] < array[right])
				swap(array[j++], array[i]);
		}
		swap(array[right], array[j]);
		QuickSort(array, left, j - 1);
		QuickSort(array, j + 1, right);
	}
}


int main()
{
	srand(time(NULL));

	const int rozmiar = 10;
	int tab[rozmiar];

	for (int i = 0; i < rozmiar; i++)
	{
		tab[i] = rand() % 100;
		cout << tab[i] << " ";
	}
	cout << endl;

	QuickSort(tab, 0, rozmiar - 1);

	cout << endl;

	for each(int value in tab)
		cout << value << " ";
	cin.get();
	cin.get();
	return 0;
}