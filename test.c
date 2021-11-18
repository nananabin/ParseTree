#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int x;
	int y;

	printf("<ParseTree 1>\n");
	for (x = 0; x <= 1; x++) {
		if (x == 0) {
			for (y = 0; y <= 1; y++) {
				int result = x - y + 3;
				if (y == 0)
				{
					printf("x : %d, y : %d\n", x, y);
					printf("x - y + 3 의 결과는 %d 입니다.\n", result);
				}
				else {
					printf("x : %d, y : %d\n", x, y);
					printf("x - y + 3 의 결과는 %d 입니다.\n\n", result);
				}
			}
		}
	}

	printf("<ParseTree 2>\n");
	for (x = 0; x <= 1; x++) {
		if (x == 0) {
			for (y = 0; y <= 1; y++) {
				int result = x - y + 3;
				if (y == 0) {
					printf("x : %d, y : %d\n", x, y);
					printf("x - y + 3 의 결과는 %d 입니다.\n", result);
				}
			}
		}
		else {
			for (y = 0; y <= 1; y++) {
				int result = x - y + 3;
				printf("x : %d, y : %d\n", x, y);
				printf("x - y + 3 의 결과는 %d 입니다.\n", result);
			}
		}
	}

	printf("\nParseTree 3\n");
	for (x = 0; x <= 1; x++) {
		if (x == 0) {
			for (y = 0; y <= 1; y++) {
				int result = x - (y + 3);
				if (y == 0) {
					printf("x : %d, y : %d\n", x, y);
					printf("x - y + 3 의 결과는 %d 입니다.\n", result);
				}
			}
		}
		else {
			for (y = 0; y <= 1; y++) {
				int result = x - (y + 3);
				printf("x : %d, y : %d\n", x, y);
				printf("x - y + 3 의 결과는 %d 입니다.\n", result);
			}
		}
	}
	
	system("pause");
	return 0;
}