//05/27
#include<stdio.h>

int main(void)
{
	float a[7] = { 2.10,3.21,5.43,6.54,7.65,8.76,9.87 };
	float* a_p;//ポインタの宣言
	int length = 7;
	int t;
	int i;
	/*1)
	for (i = 0; i < 7; i++)
	{
		a_p = &a[0];//a_pに、a[0]のアドレスを記憶させる

		printf("a[%d]: %f\n", i,*a_p );//*a_pは、ポインタがさす中身を指し示している。
		//配列の中身を表示するときは、a[%d]だということを理解しておく。
		a_p++;
	}
	*/
	/*
	a_p = &a[1];
	for (size_t t = 1; t < length; t+=2)
	{
		printf("a[%d]: %f\n", t, *a_p);
		a_p += 2;
	}
	*/
	//a[0]=a[6],a[1]=a[5],a[3]=a[4]
	//③終了
	a_p = &a[6];
	for ( i = 0; i < length; i++)
	{
		printf("a[%d]: %f\n", i, *a_p);
		a_p--;
	}


	return 0;
}