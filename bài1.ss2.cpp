#include <stdio.h>

int main(){
	float square_edge , width , length , radius;
	
	printf("Nhap do dai canh hinh vuong : ");
	scanf("%f" , &square_edge);
	
	printf("Nhap do dai chieu rong , chieu dai cua hinh chu nhat : ");
	scanf("%f %f", &width , &length);
	
	printf("Nhap ban cua kinh hinh tron : ");
	scanf("%f" , &radius);
	
	const float PI = 3.14;
	
	float square_perimeter = square_edge * 4;
	float square_area = square_edge * square_edge;
	
	float rectangle_perimeter = (width + length) * 2;
	float rectangle_area = width * length;
	
	float circle_perimeter = radius * 2 * PI;
	float circle_area = radius * radius * PI;
	
	printf("Chu vi va dien tich cua hinh vuong la : %.0f %.0f \n", square_perimeter , square_area);
	printf("Chu vi va dien tich cua hinh chu nhat la : %.0f %.0f \n", rectangle_perimeter, rectangle_area);
	printf("Chu vi va dien tich cua hinh tron la : %f %f \n", circle_perimeter , circle_area);
}
