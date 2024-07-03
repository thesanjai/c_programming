#include<stdio.h>

typedef struct rectangle{
	int length,breadth;
}rectangle;

void create(rectangle *r);

int main(){

	rectangle r;
	create(&r);

	printf("area of rectangle: %d\n",r.length*r.breadth);
	return 0;
}

void create(rectangle *r){
	(*r).length=10;
	r->breadth=20;
}
