#include <bits/stdc++.h> // buat semua library

int main()
{
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		int C = 1;
		for(int j=1;j<=i;j++){
			printf("%d",C);
			C = C * (i-j) / j;
		}
		printf("\n");
	}
	return 0;
}

