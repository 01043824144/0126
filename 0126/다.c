#include<stdio.h>
#define MAX_NUM 5

int main_0000(void) {
	/*
	//방식 1
	char arrStr[MAX_NUM]; //max_num크기의 배열 생성
	arrStr[0] = 'H';
	arrStr[1] = 'E';
	arrStr[2] = 'L';
	arrStr[3] = 'L';
	arrStr[4] = 'O';

	for (int i = 0; i < MAX_NUM; i++) {

		printf("%c", arrStr[i]);

	}
	*/

	//방식 2

	char arrStr[5] = { 'H','E','L','L','O' };


	for (int i = 0; i < MAX_NUM; i++) {

		printf("%c", arrStr[i]);

	}



	//방식 3
		//arrStr[ ] = {};
	// char arrStr[ ]={ 'H','E','L','L','O' };

	return 0;

}