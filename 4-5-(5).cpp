// 4-5-(5).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int Association(int n, int m);

int _tmain(int argc, _TCHAR* argv[])
{	
	cout<<Association(30,2)<<endl;

	return 0;
}

int Association(int n,int m){
	int up = 1;
	int down = 1;
	int number;
	for(int i=n;i>=n-m+1;i--){
		up *= i;
		}
	for(int j=m;j>=1;j--){
		down *= j;
		}
	number = up/down;
	return number;
}