// 4-5-(7).cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int Involution(int ,int );

int _tmain(int argc, _TCHAR* argv[])
{
	cout<<"2��ʮ�η��ǣ�"<<Involution(2,10)<<endl;
	return 0;
}

int Involution(int x,int y){
	if(1!=y){
	return x *= Involution(x,y-1);
	}else{
	return x;
	}
}