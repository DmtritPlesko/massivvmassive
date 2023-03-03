#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
#pragma region задание 1 
	setlocale(LC_ALL, "ru");
	//const int size = 5;
	//int mass[size][size], a;
	//cout << "Введите число которое будет умножено на 2 и составит весь массив ", cin >> a;

	//for (int i = 0; i < size; i++)
	//	for (int j = 0; j < size; j++)
	//	{
	//		mass[i][j] = a ;
	//		a = a * 2;

	//	}


	////Вывод массива 
	//cout << "Массив " << endl;
	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//		cout << mass[i][j] << " ";
	//	cout << endl;
	//}
#pragma endregion
#pragma region задание 2
	//const int size = 5;
	//int mass[size][size],a;
	//cout << "Введите число котрое каждый раз будет увеличено на 1 и составит массив ", cin >> a;



	////заполнение массива 
	//for(int i=0;i<size;i++)
	//	for (int j = 0; j < size; j++)
	//	{
	//		mass[i][j] = a;
	//		a = a + 1;
	//	}


	////Вывод массива 
	//cout << "Получившийся масссив " << endl;
	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//		cout << mass[i][j]<<" ";
	//	cout << endl;


	//}

#pragma endregion
#pragma region задание 3 
	srand(time(NULL));
	const int size = 5;
	int mass[size][size];



	//заполнение массива 
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			mass[i][j] = 100-rand() % 50;
	cout << "Исходный массив " << endl;



	//вывод массива 
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			cout << mass[i][j] << " ";
		cout << endl;

	}


	//выбор колличество сдвигов и направления 
	int a;
	cout << "Введите количество сдвигов ", cin >> a;
	int ans;
	cout << "Выберите направление сдвига " << endl
		<< "1 - Вправо" << endl
		<< "2 - Влево " << endl
		<< "3 - Вверх " << endl
		<< "4 - Вниз  " << endl, cin >> ans;
	switch (ans)
	{
		//вправо 
	case 1:
	{
		break;
	}
	//влево 
	case 2:
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << mass[i][(j + a) % 5] << " ";

			}
			cout << endl;
		}
		break;
	}
	//вверх 
	case 3:
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << mass[(i+a)%5][j] << " ";

			}
			cout << endl;
		}
		break;
	}
	//вниз
	case 4:
	{
		
	}
	default:
		cout << "Нет такого способа ";
		break;
	}


#pragma endregion
}