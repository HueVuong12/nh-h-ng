#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
	int r;
	printf("ban kinh r:", r);
	scanf("%d", &r);
	float chuvi, dientich;
	chuvi = 2*PI*r;
	dientich = PI*r*r;
	printf("chu vi hinh tron la: %.2f\n", chuvi);
	printf("dien tich hinh tron la: %.2f\n", dientich);
	}
