//
//
//


#include <iostream>
#include <string>

using namespace std;
using si_t = short int; // type alias

typedef unsigned long long ull_t; // type def

/// <summary>
/// ����������� ���� ����� �����
/// </summary>
/// <param name="a">������ �����</param>
/// <param name="b">������ �����</param>
/// <returns>����� a, b</returns>
int sum(int a, int b){

	return a + b;
}
/// <summary>
///  ����������� ���� ������� �����
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
float sum(float a, float b) {

	return a - b;
}
ull_t sum(ull_t a, ull_t b) {

	return a - b;
}



unsigned long long num1 = 10l;
ull_t num2 = 100l;



void main()
{
 
	setlocale(LC_ALL, "Russian");
	cout << "������";
	cout << "\n";
	system("pause");
	string s;
 
	sum(2, 2);
}