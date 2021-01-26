#include<stdio.h>

int main_000(void) {

	int age_1 = 10;
	int age_2 = 4;
	int age_3 = 5;
	int age_4 = 20;
	int age_5 = 10;

	printf("1번 사람의 나이:%d살\n", age_1);
	printf("2번 사람의 나이:%d살\n", age_2);
	printf("3번 사람의 나이:%d살\n", age_3);
	printf("4번 사람의 나이:%d살\n", age_4);
	printf("5번 사람의 나이:%d살\n", age_5);

	//반복적 변수를 사용할 때 배열을 사용
	//배열의 선언은 [데이터타입][배열변수명][크기]
	int age[5];//5명에 대한 age의 값

//인덱스는 0부터 시작
		age[0] = 10;
		age[1] = 4;
		age[5] = 5;
		age[3] = 20;
		age[4] = 10; //마지막 배영 인덱스는 배열의 길이(크기)-1
		//0~5 -1(4)
	
	printf("1번 사람의 나이:%d살\n", age[1]);
	printf("2번 사람의 나이:%d살\n", age[2]);
	printf("3번 사람의 나이:%d살\n", age[3]);
	printf("4번 사람의 나이:%d살\n", age[4]);
	printf("5번 사람의 나이:%d살\n", age[5]);

	return 0;

}