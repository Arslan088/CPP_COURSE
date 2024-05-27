////num_1
#include <iostream>
using namespace std;
//int main()
//{
//	setlocale(LC_ALL,"ru");
//	int number,num,part1,part2;
//	cout << "Введите целое шестизначное число";
//	cin >> number;
//	if (number > 10000 || number < 999999)
//	{
//		part1 = number / 1000;
//		part2 = number % 1000;
//		if (part1 = part2) {
//			cout << "Happy";
//		}
//		else
//		{
//			cout << "Unhappy";
//		}
//	}
//	else
//	{
//		cout << "Некорекно введено число!!!";
//	}
//}
////num_2
//int main()
//{
//	int number;
//	int num1, num2, num3, num4;
//	cout << "Введите четырех значное число";
//	cin >> number;
//	if (number > 999) 
//	{
//		num1 = (number / 1000)*100;
//		num2 = ((number % 1000) / 100)*1000;
//		num3 = (number % 100) / 10;
//		num4 = (number % 10) * 10;
//	}
//	cout << (num1 + num2 + num3 + num4);
//}
//num3
int main()
{
	int number;
	for (int i = 0; i < 7; i++)
	{
		cout << "введите целое число" << i + 1;
		cin >> number;
	}
}