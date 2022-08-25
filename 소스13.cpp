#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m;
	
	scanf("%d", &n);
	scanf("%d", &m);

	int a, b;
	int sum=0;


	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		sum += a * b;
	}

	if (sum == n)
		printf("Yes");
	else
		printf("No");
}