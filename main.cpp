//��дһ�������࣬���ͳ�Ƹ��ִ�����������������ÿ��ѡ�ֵ�ƽ���÷ֹ��ܡ�Ҫ�����һ����Ա��������ѡ
//�ֵı�š�������3����ί�Ĵ�֣����һ����Ա��������ѡ�ֵ�ƽ���÷֣����һ����Ա�������������������
//����ƽ�����ɸߵ��͵�˳�����ÿλѡ�ֵ����Ρ�������ƽ���÷֡����������н��в�����֤��

#include"Sing.h"
#include<string>
#include<iostream>

using namespace std;
void sort(Sing singer[3]) {
	int k = 0;
	Sing* temp = NULL;

	for (int i = 0; i < 3; i++)
		for (int j = i; j < 3; j++)
		{
			if (singer[i].ave > singer[j].ave)
				k = j;
			if (k != i) {
				temp = &singer[i];
				singer[i] = singer[k];
				singer[k] = *temp;
			}
				
		}
}
int main() {
	int av = 0;
	float s1[3] = { 9,7,9 };
	float s2[3] = { 8,8,9 };
	float s3[3]{ 8,9,10 };
	Sing singer[3] = {
		Sing(1,s1,"abc"),
		Sing(2,s2,"bcd"),
		Sing(3,s3,"efg"),
	};
	return 0;
	for (int i = 0; i < 3; i++) {
		singer[i].average();
		sort(singer);
		singer[i].displayallsing();
		singer[i].displayscore();
	}
}

