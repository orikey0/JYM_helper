#include "Sing.h"
void Sing::average() {
	ave = 0;
	for (int i = 0; i < 3; i++)
		ave += score[i];
	    ave /= 3;
	cout << "��ѡ��ƽ����Ϊ��" << ave << endl;
}
void Sing::displayallsing() {
	cout << allsing << endl;
	
}
void Sing::displayscore() {
	cout << num<<""<<name<<""<<ave<<""<<endl;
}
Sing::Sing(int a, float b[3],string c)
{ 
	
	this->num = a;
	for (int i = 0; i < 3; i++) {
		this->score[i] = b[i];
	}
	this->name = c;
}
int Sing::allsing = 0;
