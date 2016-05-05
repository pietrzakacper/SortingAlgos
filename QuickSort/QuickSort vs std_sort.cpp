#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>


//void swap(int & a, int & b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void QuickSort(int *array, int left, int right)
//{
//	if (left < right)
//	{
//		int wall = left;
//		for (int i = left; i < right; i++)
//		{
//			if (array[i] < array[right])
//				swap(array[wall++], array[i]);
//		}
//		swap(array[right], array[wall]);
//		QuickSort(array, left, wall - 1);
//		QuickSort(array, wall + 1, right);
//	}
//
//}
//

//int main()
//{
//	srand(time(NULL));
//
//	const int rozmiar = 10000;
//	int tab[rozmiar];
//	int tab1[rozmiar];
//
//	for (int i = 0; i < rozmiar; i++)
//		tab1[i]=tab[i] = rand() % 100;
//
//	std::cout << "QuickSort Algorithm: ";
//
//	int time1 = clock();
//	QuickSort(tab, 0, rozmiar - 1);
//	int time2 = clock();
//	std::cout <<static_cast<double>(time2-time1)/CLOCKS_PER_SEC<<"s"<< std::endl;
//
//	std::cout << std::endl;
//
//	std::cout << "Standard Library Sort Algorithm: ";
//	time1 = clock();
//	std::sort(tab1, tab1 + rozmiar);
//	time2 = clock();
//	std::cout <<static_cast<double>(time2-time1)/CLOCKS_PER_SEC<<"s"<< std::endl;
//
//	std::cin.get();
//	std::cin.get();
//	return 0;
//}