#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h> // _sleep 함수가 선언된 헤더 파일
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
	printf("정수를 입력하세요: ");
	scanf("%d", &Destination); // 표준 입력을 받아서 변수에 저장
	while (Destination != FirstNumber)
	{
		FirstNumber = FindMin(Destination, FirstNumber);
		printf("%d", FirstNumber);
	}
	printf("%d", Count);

	return 0;
}
