#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
#pragma region ������� 1 
	setlocale(LC_ALL, "ru");
	//const int size = 5;
	//int mass[size][size], a;
	//cout << "������� ����� ������� ����� �������� �� 2 � �������� ���� ������ ", cin >> a;

	//for (int i = 0; i < size; i++)
	//	for (int j = 0; j < size; j++)
	//	{
	//		mass[i][j] = a ;
	//		a = a * 2;

	//	}


	////����� ������� 
	//cout << "������ " << endl;
	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//		cout << mass[i][j] << " ";
	//	cout << endl;
	//}
#pragma endregion
#pragma region ������� 2
	//const int size = 5;
	//int mass[size][size],a;
	//cout << "������� ����� ������ ������ ��� ����� ��������� �� 1 � �������� ������ ", cin >> a;



	////���������� ������� 
	//for(int i=0;i<size;i++)
	//	for (int j = 0; j < size; j++)
	//	{
	//		mass[i][j] = a;
	//		a = a + 1;
	//	}


	////����� ������� 
	//cout << "������������ ������� " << endl;
	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//		cout << mass[i][j]<<" ";
	//	cout << endl;


	//}

#pragma endregion
#pragma region ������� 3 
	srand(time(NULL));
	const int size = 5;
	int mass[size][size];



	//���������� ������� 
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			mass[i][j] = 100-rand() % 50;
	cout << "�������� ������ " << endl;



	//����� ������� 
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			cout << mass[i][j] << " ";
		cout << endl;

	}


	//����� ����������� ������� � ����������� 
	int a;
	cout << "������� ���������� ������� ", cin >> a;
	int ans;
	cout << "�������� ����������� ������ " << endl
		<< "1 - ������" << endl
		<< "2 - ����� " << endl
		<< "3 - ����� " << endl
		<< "4 - ����  " << endl, cin >> ans;
	switch (ans)
	{
		//������ 
	case 1:
	{
		break;
	}
	//����� 
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
	//����� 
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
	//����
	case 4:
	{
		
	}
	default:
		cout << "��� ������ ������� ";
		break;
	}


#pragma endregion
}