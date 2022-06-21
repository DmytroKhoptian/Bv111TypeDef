//
//
//


#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// Сумирование двух целых чисел
/// </summary>
/// <param name="a">первое число</param>
/// <param name="b">второе число</param>
/// <returns>сумма a, b</returns>
int sum(int a, int b){

	return a + b;
}

/// <summary>
///  Сумирование двух дробных чисел
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
float sum(float a, float b) {

	return a - b;
}


void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Привет";
	cout << "\n";
	system("pause");
	string s;
 
	sum(2, 2);
}