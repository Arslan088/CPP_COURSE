#include<iostream>
#include <string>
#include<cmath>
using namespace std;

int main() {
    //1
    setlocale(LC_ALL, "rus");
    int result = 0, num1, num2, num3;
    int i = 100, j = 999;
    for (; i <= j; i++)
    {
        for (; i <= j; j--)
        {
            num1 = j / 100;         //первая цифра
            num3 = (j % 100) / 10;  //вторая цифра
            num2 = j % 10;          //третяя цифра
            if (num1 == num2 || num2 == num3 || num3 == num1)
                result++;
        }
    }
    cout << "Количество целых чисел в диапазоне от 100 до 999 у которых две одинаковые цифры = " << result << endl;
    //2
    int result = 0, num1, num2, num3;
    int i = 100, j = 999;
    for (; i <= j; i++)
    {
        for (; i <= j; j--)
        {
            num1 = j / 100;         //первая цифра
            num3 = (j % 100) / 10;  //вторая цифра
            num2 = j % 10;          //третяя цифра
            if (num1 != num2 || num2 != num3 || num3 != num1)
                result++;
        }
    }
    cout << result;
    //3
    int number;
    cout << "Введите целое число: ";
    cin >> number;

    string strNumber = to_string(number); 

    string result = ""; 
    for (char c : strNumber) {
        if (c != '3' && c != '6') { 
            result += c; 
        }
    }

    cout << "Число без цифр 3 и 6: " << result << endl;
    //4
  
    //5
    int a, j = 0;
    cin >> a;
    int k = a;
    while (k > 0)
    {
        j += k % 10;
        k /= 10;
    }
    if (pow(j, 3) == pow(a, 2))
        cout << "Куб суммы цифр этого числа равен А * А." << endl;
    else
        cout << "Куб суммы цифр этого числа не равен А * А." << endl;
    //6
    int num1 ;
    cout << "Введите целое число \n";
    cin >> num1 ;

    for (int i = 1; i <= num1 ; i++) {
        if (num1 % i == 0 )
            cout << i << "\n";
    //7
    int num1, num2;
    cout << "Введите два целых числа\n";
    cin >> num1>>num2;

    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0)
            cout << i << "\n";
    }
    
    return 0;
}
