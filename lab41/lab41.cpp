		// lab41.cpp
		// Шевченко Тарас
		// Лабораторна робота No 4.1
		// Цикли
		// Варіант 23

#include <iostream>
#include <cmath>
	
using namespace std;
int main() {
	int N, k,i;
	double S;

	cout << "N = "; cin >> N;
	k = 3;
	i = k;
	S = 0;

	while (i <= N)
	{
		S += (cos(i / 2) + sin(2 * i)) / (1 + sin(i) * cos(i));
		i++;
	}
	cout << "while = " << S << endl;

	i = k;
	S = 0;
	do
	{
		S += (cos(i / 2) + sin(2 * i)) / (1 + sin(i) * cos(i));
		i++;
	} while (i <= N);
	cout << "do = " << S << endl;

	i = k;
	S = 0;

	for ( i = k; i <= N; i++)
	{
		S += (cos(i / 2) + sin(2 * i)) / (1 + sin(i) * cos(i));
	}
	cout << "for ++ = " << S << endl;


	i = k;
	S = 0;
	for ( i = N; i >= k; i--)
	{
		S += (cos(i / 2) + sin(2 * i)) / (1 + sin(i) * cos(i));
	}
	cout << "for -- " << S << endl;
}