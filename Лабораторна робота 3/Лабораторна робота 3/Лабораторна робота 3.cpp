﻿/*Лабораторна робота 3
Тема: Програмування розгалужень. умовний оператор if
Мета роботи: набути практичних навичок використання 
умовного опаратора if при створюванні програмних проектів
розгалуженої структури с++.
Питання: 
1) Який процес наз розгалуженим?
Відповідь: 
Такий який поділений на два і більше незалежних ділянок
коду, який виконається залежно від умови.
Питання:
2)Які оператори в с++ використовуються для організацій
розгалужень?
Відповідь:
goto, if, switch.
Питання:
3)Перелічіть базові логічні операції?
Відповідь:
<,>,<=, >=, ||, &&
Питання: 
4)Обчисліть логічний вираз (-3>=5) || (7<9) && (0<3).
Відповідь:
true.
Питання:
5)Вкажіть значення w після виконання оператора bool w=2*5<=17%3;
Відповідь:
false
Питання:
6)Запишіть умовні оператори if скороченої і повної форми
для обчислення у = sin pow(x2) , якщо x > 0.5 або 
y = pow(cos2) x, якщо x<=0.5.
Відповідь:
-------------------не вмію записувати формули------------------
Питання:
7)Назвіть оператори без помилок:
а) if(x<=6)y=2*x; else y=cos(x); в) if(a<>0) if(b<>0) y=2*x;
б) if y<=x then y:=exp(x*y);     г) if(x>0)y=ln(x) else y=x;
Відповідь:
а
Питання:
8) Вкажіть значення х після виконання фрагментів програми:
а) float х=1.5;     б) float х=1.5;
  if(x<=0.5) х=7.7;    if(x<=0.5) х=7.7; else x=3;
  Відповідь:
  а) x = 1.5; б) x = 3;
9)Наведіть значення змінної z після виконання операторів:
 float z, x=2.5; 
 if(x>=0.5) z=7.7; else z=5.5; 
 Відповідь:
 z = 7.7
*/

//========Питання по лабораторній номер 3 високого рівня=====
//======3)Ввести три числа і візначити серед них середнє=====
//======4)Ввести три числа і визначити серед них найменше====
#include <iostream>

int main() {
	setlocale(LC_ALL, "uk_UA");
	double f, x, y, z, average, min;
	goto mitka;
	std::cout << "Введіть х: ";
	std::cin >> x;
	std::cout << "Введіть y: ";
	std::cin >> y;
	std::cout << "Введіть z: ";
	std::cin >> z;
	average = (x + y + z) / 3;
    mitka: f = 3;
	if (x < y && x < z) {
		min = x;
	}
	else if (y < x && y < z) {
		min = y;
	}
	else {
		min = z;
	}
	std::cout << "mitka = " << f;
	std::cout << "Середнє значення цифр x, y, z = " << average << std::endl;
	std::cout << "Мінімальне число - " << min;
		return 0;
}