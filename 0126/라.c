#include<stdio.h>


int main_3(void) {

	int arrPoint[] = { 87,99,80 };

	int total = 0;

	for (int i = 0; i < 3; i++)
	{
		total += arrPoint[i]
			; //ÃÑÁ¡±¸ÇÏ±â

	}

	printf("ÃÑÁ¡:%dÁ¡\n", total);
	printf("Æò±Õ:%.2fÁ¡\n",(float)total / 3);

	return 0;

}
