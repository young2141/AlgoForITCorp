#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int arr[1001];

int main()
{
	int Number;
	int DP[1001] = { 0, }; //�ʱ�ȭ�߿� �ƴϸ� �˰�����
	int i = 0;
	DP[1] = 1, DP[2] = 3, DP[3]=5;
	scanf("%d", &Number);
	for (i = 3; i <= Number; i++) {
		DP[i] = (DP[i - 1] + DP[i - 2] * 2) % 10007;
	}
	printf("%d", DP[Number]);
	return 0;
}