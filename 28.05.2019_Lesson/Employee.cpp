#include "Employee.h"

New::employee::employee()//обязательно указывать в каком неймспейсе определен класс New::
{
	name = "";
	salary = 0;
}

New::employee::employee(string, int)//!!!!!!!!!!!!!!!!необязательно переменные указывать, можно только типы
{
	this->name = name;
	this->salary = salary;
}
