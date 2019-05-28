#pragma once
#include<iostream>
#include <string>
using namespace std;//внутри него создаем свой неймспейс

namespace New {//creating own NAMESPACE
	//можно создавать сколько угодно, обычно классы собирают в отдельные "пакеты"(неймспейсы) по определенному предназначению
	class employee {
		string name;
		int salary;
	public:
		employee();
		employee(string, int);

	};
}