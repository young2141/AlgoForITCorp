#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int dp[1000001] = { 0, };
int Number;// 애네둘이 왜 위로 안뺴면 에러나는지 확인필
int main() //각수의 1부터 될수있는 가장최소의 경우의수를 구하는방식
{
	scanf("%d", &Number);
	dp[1] = 0;
	for (int i = 2; i <= Number; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0 && dp[i] > dp[i / 2] + 1) { // 2로나누어떨어지고, dp[i/2 ]+1보다 dp[i]가 클경우 
			dp[i] = dp[i / 2] + 1;
		}
		if (i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
			dp[i] = dp[i / 3] + 1;
		}
	}
	printf("%d", dp[Number]);
	return 0;
}