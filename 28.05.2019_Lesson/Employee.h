#pragma once
#include<iostream>
#include <string>
using namespace std;//внутри него создаем свой неймспейс

namespace New {//creating own NAMESPACE

	//можно решать проблему локальности: т.е. если раньше константа pi была бы доступна только в файле employee.h, то теперь через неймспейс везде можно
	const double pi = 3.14;

	//можно создавать сколько угодно, обычно классы собирают в отдельные "пакеты"(неймспейсы) по определенному предназначению
	
	class employee {
		string name;
		int salary;
	public:
		employee();
		employee(string, int);

	};
}