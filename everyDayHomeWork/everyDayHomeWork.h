#pragma once
#include<iostream>
#include<string>
using namespace std;

class everyDayHomeWork
{
public:

	everyDayHomeWork()
	{
		cout << "call class" << endl;
		print();
	};
	~everyDayHomeWork()
	{
		cout << "end class" << endl;
	};

private:
	void print();



};