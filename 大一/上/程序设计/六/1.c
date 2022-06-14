#include<stdio.h>
int main(void)
{
	int i, max, n;
	int a[10];

	printf(" ‰»În:");
	scanf("%d", &n);

	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	max = 0;
	for (i = 1; i<n; i++)
	if (a[i]>a[max])
		max = i;
	printf("%d\n%d\n", a[max], max);

	return 0;
}

