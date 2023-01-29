// C ���

// ȭ������ ����ϱ�
/*
#include <stdio.h>

int main()
{
	printf("���� : %d\n", 2);
	printf("�Ǽ� : %f\n", 3.14);
	printf("���ڿ� : %s\n", "�̹���");
}
*/

// ����
/*
#include <stdio.h>
#define PI 3.141592

int main()
{
	int radius = 3;
	float area;

	area = radius * radius * PI;
	printf("������ : %d, ���� ���� : %f\n", radius, area);

	radius = 5;
	area = radius * radius * PI; // �������� ���� �ٲ���� ������ �����ϱ� �� �������� �����ߴ� �� ���� �ʿ�
	printf("������ : %d, ���� ���� : %f\n", radius, area);
}
*/

// ����ڷκ��� �Է¹ޱ�
/*
#include <stdio.h>

int main()
{
	int x, y, z;
	int sum, avg;

	printf("���� 1 �Է� : ");
	scanf_s("%d", &x);

	printf("���� 2 �Է� : ");
	scanf_s("%d", &y);

	printf("���� 3 �Է� : ");
	scanf_s("%d", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("�� : %d, ��� : %d\n", sum, avg);
}
*/

// SDL(Secure Development Lifecycle)�� ���� scanf() ���� ���� �߻��ϴ� ���
// �ذ��� 1 : #define _CRT_SECURE_NO_WARNINGS
// �ذ��� 2 : scanf_s ���

// scanf_s() �����
/*
#include <stdio.h>

int main()
{
	char a, b[10];
	int n;
	scanf_s("%c", &a, 1); // ���� %c
	scanf_s("%s", b, 10); // ���ڿ��� '&' ���X
	scanf_s("%d", &n);
	return 0;
}
*/

// �ڷ��� �����ϱ�
// sizeof(�ڷ���) -> ������
// ������ : short(2), int(4), long(4), long long(8)
// �Ǽ��� : float(4), double(8), long double(8)
// ������ : char(1)

// ������ �Ǽ��� ��ȯ ����
/*
#include <stdio.h>

int main()
{
	int i;
	double f;

	f = 183.5;
	i = f; // �Ǽ� ���� ���� ���� ����

	printf("%d\n", i); // �������� �����߱� ������ 183�� ��µ�
}
*/

// ���� ����ϱ�
// ������ : +, -, *, /, %
// ���������� : ++, --
// ���տ����� : +=, *=

// �� �� �ϳ� �����ϱ�
// ���� ������
/*
int main()
{
	int x = 10, y = 2;
	printf("x==y ����� : %d\n", x == y); // 0
	printf("x!=y ����� : %d\n", x != y); // 1
}
*/

// ��������
/*
int main()
{
	int x = 1, y = 0;

	printf("%d && %d�� ����� : %d\n", x, y, x && y); // 0 && 1 �� ����� : 0

	// 0 && 1 �� ����� : 0
	// 1 && 1 �� ����� : 1
	// 0 && 0 �� ����� : 0

	// 0 || 1 �� ����� : 1
	// 1 || 1 �� ����� : 1
	// 0 || 0 �� ����� : 0
}
*/

// if-else ��
/*
#include <stdio.h>

int main()
{
	int x, y, max;

	printf("�� �� �Է� : ");
	scanf_s("%d %d", &x, &y);

	if (x > y)
	{
		max = x;
		printf("ū �� : %d\n", max);
	}
	else if (x < y)
	{
		max = y;
		printf("ū �� : %d\n", max);
	}
	else
	{
		printf("�� ���� ����");
	}
}
*/

// ���� �� �ϳ� �����ϱ� (switch ��)
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

// �������� �ݺ��ϱ�
// while ��
/*
int main()
{
	int i = 1, sum = 0;
	
	while (i <= 10)
	{
		sum = sum + i; // sum += i;
		i++;
	}

	printf("�հ� : %d\n", sum);
}
*/

// do-while ��
/*
int main()
{
	int sum = 0;
	int input;

	do
	{
		printf("������ ���� �Է� : ");
		scanf_s("%d", &input);
		sum = sum + input;
	} while (input != 0); // do-while �� ���� ��� while �ڿ� �����ݷ��� �ٿ�����

	printf("�Է��� ������ �� : %d\n", sum);
}
*/

// �������� �ݺ��ϱ� (for ��)
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

// �迭
/*
int main()
{
	int scores[3];
	int sum = 0;
	int i;
	double avg;

	for (i = 0; i < 3; i++)
	{
		printf("%d�� ���ӿ����� ���� : ", i + 1);
		scanf_s("%d", &scores[i]); // �迭 �� ĭ�� �Է��� �� '&' ���� ���� ����
	}

	for (i = 0; i < 3; i++)
	{
		sum += scores[i];
	} // �ݺ��� �̿��ؼ� �迭 ��� ���� ���ϱ�

	avg = (double)sum / 3; // ���� ���� sum�� �Ǽ������� �ٲ� �� �Ǽ��� ������ ����
	printf("���� ��� : %d\n", avg);
}
*/

// 2���� �迭
/*
int main()
{
	int score[3][3] = {
		{100,100,100}, // input 0
		{50,60,40}, // input 1
		{20,80,90} // input 2
	};

	int i, input;
	printf("��ȣ �Է� : ");
	scnaf_s("%d", &input);

	for (i = 0; i < 3; i++)
	{
		switch (i)
		{
		case 0:
			printf("������ ");
			break;
		case 1:
			printf("������ ");
			break;
		case 2:
			printf("�ٹ��� ");
			break;
		default:
			break;
		}
		printf("%d���� ��\n", score[input][i]);
	}
}
*/