#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <stdlib.h> // _sleep �Լ��� ����� ��� ����
#include <string.h>

int Count;
int FirstNumber = 1;

int FindMin(int Destination, int FirstNumber)
{
	int temp = 0;
	if (FirstNumber * 3 <= Destination)
	{
		Count = Count + 1;
		temp = FirstNumber * 3;
		return temp;
	}
	if (FirstNumber * 2 <= Destination)
	{
		Count = Count + 1;
		temp = FirstNumber * 2;
		return temp;
	}
	if (FirstNumber + 1 <= Destination)
	{
		Count = Count + 1;
		temp = FirstNumber + 1;
		return temp;
	}
}

int main()
{
	Count = 0;
	int Destination;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &Destination); // ǥ�� �Է��� �޾Ƽ� ������ ����
	while (Destination != FirstNumber)
	{
		FirstNumber = FindMin(Destination, FirstNumber);
		printf("%d", FirstNumber);
	}
	printf("%d", Count);

	return 0;
}
