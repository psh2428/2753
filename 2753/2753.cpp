#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int year;
	scanf("%d", &year);
	if (year < 1 && year >4000) {
		printf("값을 잘못 입력하였습니다.");
		return;
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		printf("1");
	}
	else if (year % 400 == 0) {
		printf("1");
	}
	else {
		printf("0");
	}
	



	
}