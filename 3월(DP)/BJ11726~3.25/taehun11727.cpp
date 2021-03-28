#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int arr[1001];

int main()
{
	int Number;
	int DP[1001] = { 0, }; //초기화중요 아니면 똥값나옴
	int i = 0;
	DP[1] = 1, DP[2] = 3, DP[3]=5;
	scanf("%d", &Number);
	for (i = 3; i <= Number; i++) {
		DP[i] = (DP[i - 1] + DP[i - 2] * 2) % 10007;
	}
	printf("%d", DP[Number]);
	return 0;
}