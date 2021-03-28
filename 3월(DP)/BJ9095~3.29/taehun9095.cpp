#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main(void) {
	int idx;
	scanf("%d", &idx);
	while (idx--) { 
		int DP[15] = {0,};
		DP[0] = 1;
		int Number;
		scanf("%d", &Number);

		for (int i = 1; i <= Number; i++) {

			if (i - 1 >= 0)
				DP[i] += DP[i - 1];
			if (i - 2 >= 0)
				DP[i] += DP[i - 2];
			if (i - 3 >= 0)
				DP[i] += DP[i - 3];
		}

		printf("%d\n", DP[Number]);

	}
	return 0;
}