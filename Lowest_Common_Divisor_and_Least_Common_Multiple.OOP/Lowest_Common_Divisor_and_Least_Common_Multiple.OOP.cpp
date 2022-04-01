﻿/*Реалізуйте клас NSD, в private зберігає два цілих числа.
Реалізуйте конструктор за замовчування, який надає значення двох змінним 1;
Реалізуйте конструктор, який приймає два  цілочисельних значення і обчислює НСД двох чисел;
Реалізуйте функцію, яка обчислює НСК.
Реалізуйте функцію, яка виводить два числа.*/
#include <iostream>
using namespace std;
class NSD {//клас NSD, в private зберігає два цілих числа.
private:
	int a, b;//два цілих числа
	int lcd, lcm;//НСД та НСК
public:
	NSD() {//конструктор за замовчування, який надає значення двох змінним 1
		a = 1;  b = 1;
	}
	NSD(int A, int B);// конструктор, який приймає два  цілочисельних значення і обчислює НСД двох чисел
	void LCM();//функція, яка обчислює НСК
	void Print();//функція, яка виводить два числа
};
int main()
{
	NSD A(15, 35);//строрюємо об'єкт A
	A.Print();//виводимо два цілих числа
	A.LCM();//вираховуємо НСК 
}
NSD::NSD(int A, int B) {
	this->a = A;//присвоюємо значення чисел числам в private
	this->b = B;
	while (A != B) {//вираховуємо НСД за допомогою алгоритму Євкліда
		if (A > B) {
			A -= B; lcd = A;
		}
		else {
			B -= A; lcd = B;
		}
	}
}
void  NSD::Print() {
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
void NSD::LCM() {
	lcm = (a * b) / lcd;//вираховуємо НСК
	cout << "LCM= " << lcm << endl;
	cout << "LSD= " << lcd << endl;
}