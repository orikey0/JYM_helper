#include <iostream>
#include<string>
using namespace std;
#pragma once
class Sing{
public:
	Sing(int a, float b[3], string c);
	void average();
	void  displayscore();
	static void displayallsing();
	//friend void sort(Sing);
public:
	int num;
	float score[3];
	string name;	
	int ave; 
	static int allsing;
};

