//
//
//


#include <iostream>
#include <string>

using namespace std;

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


void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������";
	cout << "\n";
	system("pause");
	string s;
 
	sum(2, 2);
}