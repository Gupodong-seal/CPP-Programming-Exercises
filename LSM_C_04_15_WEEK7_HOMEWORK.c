#include <stdio.h>

int main(void)
{
	HOMEWORK1();
	HOMEWORK2();
	HOMEWORK3();
	HOMEWORK4();
	return 0;
}

int HOMEWORK1(void)
{
	int input1, input2, input3;
	int max = 0, min = 0;
	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &input1, &input2, &input3);
	max = input1 < input2 ? input2 : input1; // input2�� input1���� �۴ٸ� input2, ũ�ٸ� input1
	max = max < input3 ? input3 : max; // �� �ڵ忡�� ���� ����� result�� input3�� ���ؼ� ���̸� input3 �����̸� result.

	min = input1 > input2 ? input2 : input1;
	min = min > input3 ? input3 : min;

	printf("���� ū�� %d, ���� ���� �� %d\n", max, min);
	printf("------------------------------\n");
}

int HOMEWORK2(void)
{
	float num;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%f", &num); // ������ float�� �Է¹���

	printf("%lf = %d + %lf\n", num, (int)num, num - (int)num);	 // (int)num�� �Ǽ��� ���������� �ٲ�⶧���� ����� �����θ� ��� 
																 // num - (int)num�� �Ǽ� ��ü���� �������� (int)num�� �� �Ҽ��θ� ���
	printf("------------------------------\n");
}															  

int HOMEWORK3(void)
{
	int n,t1 =0, t2 = 1, next_t;
	printf("�Էµ� ����ŭ �Ǻ���ġ ������ ����\n");
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++) {
		printf("%d, ", t1);
		next_t = t1 + t2;
		t1 = t2;
		t2 = next_t; // �Ǻ���ġ ���� n�� (n-1)+(n-2)��� ��Ģ�� �����Ƿ� ù��°�װ� �ι�°�� t1, t2�� �����ϰ� ���Ŀ� t1 = (n-1) t2 = (n-2)�� ���� ������� ���� 
	}
	printf("\n");
	printf("------------------------------\n");
	return 0;
}

int HOMEWORK4(void)
{
	int n = 0;
	int result = 1;
	printf("2^n�� n�� �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++) {			// i�� 0���� �Էµ� ���� n��ŭ 1������
		result = result * 2;				// result�� �ʱⰪ�� 1�̰� ���� i�� �ϳ��� �����Ҷ����� ���ϱ�2�� ����
	}
	printf("2^%d = %d\n", n,result);
	printf("------------------------------\n");
	return 0;
}