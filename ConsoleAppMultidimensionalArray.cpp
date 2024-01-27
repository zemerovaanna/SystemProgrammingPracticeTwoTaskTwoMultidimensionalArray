#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int array[3][4][5] =
	{
		{
			{1, 2, 3, 4, 5},
			{6, 7, 8, 9, 10},
			{11, 12, 13, 14, 15},
			{16, 17, 18, 19, 20}
		},
		{
			{21, 22, 23, 24, 25},
			{26, 27, 28, 29, 30},
			{31, 32, 33, 34, 35},
			{36, 37, 38, 39, 40}
		},
		{
			{41, 42, 43, 44, 45},
			{46, 47, 48, 49, 50},
			{51, 52, 53, 54, 55},
			{56, 57, 58, 59, 60}
		}
	};

	int a = sizeof(array) / sizeof(array[0]),
		r = sizeof(array[0]) / sizeof(array[0][0]),
		c = sizeof(array[0][0]) / sizeof(array[0][0][0]);

	for (int x = 0; x < a; x++)
	{
		cout << "\nМассив " << x + 1 << endl;

		for (int y = 0; y < r; y++)
		{

			int min = array[x][y][0];

			for (int z = 0; z < c; z++)
			{

				if (array[x][y][z] < min)
				{

					min = array[x][y][z];
				}
			}
			cout << "Наименьший элемент в строке " << y + 1 << " это " << min << endl;
		}
	}

	return 0;
}