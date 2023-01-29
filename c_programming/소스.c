// C 언어

// 화면으로 출력하기
/*
#include <stdio.h>

int main()
{
	printf("정수 : %d\n", 2);
	printf("실수 : %f\n", 3.14);
	printf("문자열 : %s\n", "이민지");
}
*/

// 변수
/*
#include <stdio.h>
#define PI 3.141592

int main()
{
	int radius = 3;
	float area;

	area = radius * radius * PI;
	printf("반지름 : %d, 원의 넓이 : %f\n", radius, area);

	radius = 5;
	area = radius * radius * PI; // 반지름의 값이 바뀌었기 때문에 변경하기 전 반지름을 대입했던 식 변경 필요
	printf("반지름 : %d, 원의 넓이 : %f\n", radius, area);
}
*/

// 사용자로부터 입력받기
/*
#include <stdio.h>

int main()
{
	int x, y, z;
	int sum, avg;

	printf("정수 1 입력 : ");
	scanf_s("%d", &x);

	printf("정수 2 입력 : ");
	scanf_s("%d", &y);

	printf("정수 3 입력 : ");
	scanf_s("%d", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("합 : %d, 평균 : %d\n", sum, avg);
}
*/

// SDL(Secure Development Lifecycle)로 인해 scanf() 사용시 오류 발생하는 경우
// 해결방법 1 : #define _CRT_SECURE_NO_WARNINGS
// 해결방법 2 : scanf_s 사용

// scanf_s() 사용방법
/*
#include <stdio.h>

int main()
{
	char a, b[10];
	int n;
	scanf_s("%c", &a, 1); // 문자 %c
	scanf_s("%s", b, 10); // 문자열은 '&' 사용X
	scanf_s("%d", &n);
	return 0;
}
*/

// 자료형 이해하기
// sizeof(자료형) -> 정수값
// 정수형 : short(2), int(4), long(4), long long(8)
// 실수형 : float(4), double(8), long double(8)
// 문자형 : char(1)

// 정수형 실수형 변환 예제
/*
#include <stdio.h>

int main()
{
	int i;
	double f;

	f = 183.5;
	i = f; // 실수 값을 정수 값에 대입

	printf("%d\n", i); // 정수형에 대입했기 때문에 183이 출력됨
}
*/

// 수식 계산하기
// 연산자 : +, -, *, /, %
// 증감연산자 : ++, --
// 복합연산자 : +=, *=

// 둘 중 하나 선택하기
// 관계 연산자
/*
int main()
{
	int x = 10, y = 2;
	printf("x==y 결과값 : %d\n", x == y); // 0
	printf("x!=y 결과값 : %d\n", x != y); // 1
}
*/

// 논리연산자
/*
int main()
{
	int x = 1, y = 0;

	printf("%d && %d의 결과값 : %d\n", x, y, x && y); // 0 && 1 의 결과값 : 0

	// 0 && 1 의 결과값 : 0
	// 1 && 1 의 결과값 : 1
	// 0 && 0 의 결과값 : 0

	// 0 || 1 의 결과값 : 1
	// 1 || 1 의 결과값 : 1
	// 0 || 0 의 결과값 : 0
}
*/

// if-else 문
/*
#include <stdio.h>

int main()
{
	int x, y, max;

	printf("두 수 입력 : ");
	scanf_s("%d %d", &x, &y);

	if (x > y)
	{
		max = x;
		printf("큰 수 : %d\n", max);
	}
	else if (x < y)
	{
		max = y;
		printf("큰 수 : %d\n", max);
	}
	else
	{
		printf("두 수는 같음");
	}
}
*/

// 여럿 중 하나 선택하기 (switch 문)
/*
int main()
{
	int input;

	scanf_s("%d", &input);

	switch(input)
	{
	case 1:
		break;
	case 2:
		break;
	default:

	}
}
*/

// 조건으로 반복하기
// while 문
/*
int main()
{
	int i = 1, sum = 0;
	
	while (i <= 10)
	{
		sum = sum + i; // sum += i;
		i++;
	}

	printf("합계 : %d\n", sum);
}
*/

// do-while 문
/*
int main()
{
	int sum = 0;
	int input;

	do
	{
		printf("임의의 숫자 입력 : ");
		scanf_s("%d", &input);
		sum = sum + input;
	} while (input != 0); // do-while 문 같은 경우 while 뒤에 세미콜론을 붙여야함

	printf("입력한 숫자의 합 : %d\n", sum);
}
*/

// 조건으로 반복하기 (for 문)
/*
int main()
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
			printf("%d * %d = %2d", i, j, i * j);
		printf("\n");
	}
}
*/

// 배열
/*
int main()
{
	int scores[3];
	int sum = 0;
	int i;
	double avg;

	for (i = 0; i < 3; i++)
	{
		printf("%d번 게임에서의 점수 : ", i + 1);
		scanf_s("%d", &scores[i]); // 배열 한 칸에 입력할 때 '&' 잊지 말고 쓰기
	}

	for (i = 0; i < 3; i++)
	{
		sum += scores[i];
	} // 반복문 이용해서 배열 요소 값들 더하기

	avg = (double)sum / 3; // 정수 형태 sum을 실수형으로 바꾼 후 실수형 변수에 대입
	printf("점수 평균 : %d\n", avg);
}
*/

// 2차원 배열
/*
int main()
{
	int score[3][3] = {
		{100,100,100}, // input 0
		{50,60,40}, // input 1
		{20,80,90} // input 2
	};

	int i, input;
	printf("번호 입력 : ");
	scnaf_s("%d", &input);

	for (i = 0; i < 3; i++)
	{
		switch (i)
		{
		case 0:
			printf("가번에 ");
			break;
		case 1:
			printf("나번에 ");
			break;
		case 2:
			printf("다번에 ");
			break;
		default:
			break;
		}
		printf("%d점을 줌\n", score[input][i]);
	}
}
*/