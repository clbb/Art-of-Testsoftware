#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int* a,int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
int Triangle(float a,float b,float c)
{
	if(a <= 0 || b <= 0 || c <= 0)
		return false;
	int tri = 0;

	if((a+b) > c && (a+c) >b && (b+c)>a)
	{
		if(a == b && b == c)
			tri = 1;//equit
		if((a == b && a != c) || (b == c && b != a) || (a == c && a != b))
			tri = 2;//double
        if(a != b && a != c && b != c)
			tri = 3;//un
	}
	else
	{
		tri = -1;//no triangle
	}

	return tri;
}
int main()
{
	int a = Triangle(3,4,5);//3

	printf("1等边,2等腰,3不规则 -1不是三角形\n a=%d\n",a);
    a = Triangle(3,3,3);//1
	printf("a=%d\n",a);	

     a = Triangle(2,1,4);//-1
	printf("a=%d\n",a);
     a = Triangle(5,3,1);

	printf("a=%d\n",a);
     a = Triangle(2,2,1);//2
	printf("a=%d\n",a);
     a = Triangle(2,1,2);
	printf("a=%d\n",a);
     a = Triangle(1,2,2);
	printf("a=%d\n",a);

     a = Triangle(0,2,2);//0
	printf("a=%d\n",a);
     a = Triangle(1,2,0);
	printf("a=%d\n",a);
     a = Triangle(4,0,0);
	printf("a=%d\n",a);
     a = Triangle(0,0,0);
	printf("a=%d\n",a);

     a = Triangle(-1,2,2);//0
	printf("a=%d\n",a);

    printf("------------------");
    a = Triangle(4,2,2);//-1
	printf("a=%d\n",a);
    a = Triangle(1,2,3);//-1
	printf("a=%d\n",a);
    a = Triangle(3,2,1);
	printf("a=%d\n",a);
    a = Triangle(1,3,2);
	printf("a=%d\n",a);

    a = Triangle(1,2,12);//-1
	printf("a=%d\n",a);
    a = Triangle(2,1,12);
    printf("a=%d\n",a);
    a = Triangle(12,1,2);
    printf("a=%d\n",a);

    a = Triangle(2.5,3.5,5.5);//3
    printf("a=%d\n",a);

	return 0;
}
