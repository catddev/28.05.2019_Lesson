#pragma once
#include<iostream>
#include <string>
using namespace std;

namespace New {//the same namespace

	class Capitalist {
		string name;
		int salary;

	public:
		Capitalist();
		Capitalist(string, int);
	};
}