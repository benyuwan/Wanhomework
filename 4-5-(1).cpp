// 4-5-(1).cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"

using namespace std;

double TemExchangerFromCtoF(double c);
double TemExchangerFromFtoC(double f);
int _tmain(int argc, _TCHAR* argv[])
{	
	double cbefore = 23;
	double fbefore = 56;
	double fafter = TemExchangerFromCtoF(cbefore);
	double cafter = TemExchangerFromFtoC(fbefore);

	cout<<"���϶�ת����"<<fafter<<endl;
	cout<<"���϶�ת����"<<cafter<<endl;

	return 0;
}

double TemExchangerFromCtoF(double c){
	double f = 9.0/5*c+32;
	return f;
}

double TemExchangerFromFtoC(double f){
	double c = 5.0/9*(f-32);
	return c;
}
