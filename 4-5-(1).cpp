// 4-5-(1).cpp : 定义控制台应用程序的入口点。
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

	cout<<"摄氏度转换后："<<fafter<<endl;
	cout<<"华氏度转换后："<<cafter<<endl;

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
