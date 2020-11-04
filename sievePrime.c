#include <stdio.h>

main()
{
	int a[5] = { 5, 1, 15, 20, 25 };
	int i, j, k = 1, m;
	i = ++a[1];
	printf("a[1] posle ++a[1] je %d (bilo je 1?).\n", a[1]);
	printf("Vrednost i na ovom mestu je %d.\n", i);
	j = a[1]++;
	printf("a[1] posle a[1]++ je %d (bilo je 2?.\n", a[1]);
	printf("Vrednost i na ovom mestu je %d.\n", i);
	printf("Vrednost j na ovom mestu je %d.\n", j);
	m = a[i++];
	printf("i posle a[i++] je %d (bilo je 3?).\n", a[1]);
	printf("\n%d %d %d", i, j, m);
}