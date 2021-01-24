#include <bits/stdc++.h> // buat semua library
int fibonacci(int a);
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",fibonacci(a));
	return 0;
}
int fibonacci(int a)
{
	if(a==1) return 0;
	if(a==2) return 1;
	return fibonacci(a-1) + fibonacci(a-2);
}

