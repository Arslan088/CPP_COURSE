#include <iostream>
using namespace std;
int main()
{
    //Num1
    setlocale(LC_ALL, "rus");
	int arr2[] = { 123,124,125,126,127,128,129,130,131,132 };
	int arr1[] = { 222,234,2354,345,567,678,890,346,780,674 };
    cout << "№\t\t   Номер телефона \t  Номер ICQ" << endl;
    cout << "Данные 1 пользователя.   " << arr2[0] << "\t\t    " << arr1[0] << endl;
    cout << "Данные 2 пользователя.   " << arr2[1] << "\t\t    " << arr1[1] << endl;
    cout << "Данные 3 пользователя.   " << arr2[2] << "\t\t    " << arr1[2] << endl;
    cout << "Данные 4 пользователя.   " << arr2[3] << "\t\t    " << arr1[3] << endl;
    cout << "Данные 5 пользователя.   " << arr2[4] << "\t\t    " << arr1[4] << endl;
    cout << "Данные 6 пользователя.   " << arr2[5] << "\t\t    " << arr1[5] << endl;
    cout << "Данные 7 пользователя.   " << arr2[6] << "\t\t    " << arr1[6] << endl;
    cout << "Данные 8 пользователя.   " << arr2[7] << "\t\t    " << arr1[7] << endl;
    cout << "Данные 9 пользователя.   " << arr2[8] << "\t\t    " << arr1[8] << endl;
    cout << "Данные 10 пользователя.  " << arr2[9] << "\t\t    " << arr1[9] << endl;




//Num2
    int digitals[10]; 

    cout << "Введите 10 чисел для заполнения массива: " << endl;

    for (int i = 0; i < 10; i++) {
        cin >> digitals[i]; 
    }
    int cont = 0;
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 9; j++) {
        if (digitals[j] > digitals[j + 1]) {
            int b = digitals[j]; 
            digitals[j] = digitals[j + 1] ; 
            digitals[j + 1] = b; 
        }
    }
}
//Num3

}
