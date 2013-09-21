// 4-5-(7).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int Involution(int ,int );

int _tmain(int argc, _TCHAR* argv[])
{
	cout<<"2的十次方是："<<Involution(2,10)<<endl;
	return 0;
}

int Involution(int x,int y){
	if(1!=y){
	return x *= Involution(x,y-1);
	}else{
	return x;
	}
}