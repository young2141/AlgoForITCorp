#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int dp[1000001] = { 0, };
int Number;// �ֳ׵��� �� ���� �ȕ��� ���������� Ȯ����
int main() //������ 1���� �ɼ��ִ� �����ּ��� ����Ǽ��� ���ϴ¹��
{
	scanf("%d", &Number);
	dp[1] = 0;
	for (int i = 2; i <= Number; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0 && dp[i] > dp[i / 2] + 1) { // 2�γ����������, dp[i/2 ]+1���� dp[i]�� Ŭ��� 
			dp[i] = dp[i / 2] + 1;
		}
		if (i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
			dp[i] = dp[i / 3] + 1;
		}
	}
	printf("%d", dp[Number]);
	return 0;
}