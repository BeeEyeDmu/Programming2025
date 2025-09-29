#include <stdio.h>

int main()
{
	printf("합해서 6이 되는 경우 : \n");
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			if (i + j == 6) {
				printf("(%d, %d)\n", i, j);
			}
		}
	}			

	int cnt = 0;
	printf("합해서 10이 되는 경우 : \n");
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			for (int k = 1; k <= 6; k++) {
				if (i + j + k == 10) {
					cnt++;
					printf("(%d, %d, %d)\n", i, j, k);
				}
			}
		}
	}
	printf("%d 경우\n", cnt);
}