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
	printf("3개의 정수를 입력하시오 : ");
	scanf_s("%d %d %d", &input1, &input2, &input3);
	max = input1 < input2 ? input2 : input1; // input2가 input1보다 작다면 input2, 크다면 input1
	max = max < input3 ? input3 : max; // 위 코드에서 나온 결과인 result와 input3와 비교해서 참이면 input3 거짓이면 result.

	min = input1 > input2 ? input2 : input1;
	min = min > input3 ? input3 : min;

	printf("가장 큰수 %d, 가장 작은 수 %d\n", max, min);
	printf("------------------------------\n");
}

int HOMEWORK2(void)
{
	float num;
	printf("실수를 입력하시오: ");
	scanf_s("%f", &num); // 변수를 float로 입력받음

	printf("%lf = %d + %lf\n", num, (int)num, num - (int)num);	 // (int)num은 실수를 정수형으로 바꿨기때문에 출력은 정수부만 출력 
																 // num - (int)num은 실수 전체에서 정수부인 (int)num을 빼 소수부만 출력
	printf("------------------------------\n");
}															  

int HOMEWORK3(void)
{
	int n,t1 =0, t2 = 1, next_t;
	printf("입력된 수만큼 피보나치 수열을 나열\n");
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++) {
		printf("%d, ", t1);
		next_t = t1 + t2;
		t1 = t2;
		t2 = next_t; // 피보나치 수열 n은 (n-1)+(n-2)라는 규칙이 있으므로 첫번째항과 두번째항 t1, t2를 지정하고 이후엔 t1 = (n-1) t2 = (n-2)와 같은 방식으로 진행 
	}
	printf("\n");
	printf("------------------------------\n");
	return 0;
}

int HOMEWORK4(void)
{
	int n = 0;
	int result = 1;
	printf("2^n의 n을 입력하시오: ");
	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++) {			// i는 0부터 입력된 수인 n만큼 1씩증가
		result = result * 2;				// result는 초기값은 1이고 이후 i가 하나씩 증가할때마다 곱하기2씩 증가
	}
	printf("2^%d = %d\n", n,result);
	printf("------------------------------\n");
	return 0;
}