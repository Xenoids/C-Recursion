#include <bits/stdc++.h> // buat semua library
int fpb(int a,int b);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",fpb(a,b));
	return 0;
}
int fpb(int a,int b)
{
	if(a == 0) return b;
	if(b == 0) return a;
	if(a>b) return fpb(a %b , b);
	if(b>a) return fpb(a,b % a); 
}
// fyi :
// a x b = fpb(a,b) x kpk(a,b)
//kpk(a,b) = a x b / fpb(a,b)
//fpb a b c
//fpb(fpb(a,b),c)
