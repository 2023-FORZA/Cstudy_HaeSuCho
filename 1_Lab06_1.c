#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n, i, ball_loc = 1;
	int loc1[50];
	int loc2[50];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d %d", &loc1[i], &loc2[i]);
	for (i = 0; i < n; i++)
	{
		if (loc1[i] == ball_loc)
			ball_loc = loc2[i];
		else if (loc2[i] == ball_loc)
			ball_loc = loc1[i];
	}
	printf("%d\n", ball_loc);
	return 0;

}