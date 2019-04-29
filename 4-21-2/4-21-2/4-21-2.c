#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a = 0;
	int b = 2;
	if(a == 1)
		if(b == 2)
			printf("hehe\n");
		else
			printf("haha\n");//else与最近的if搭配
	system("pause");//此程序无结果  因为a=0
	return 0;
}


/*
int main()
{
	int age = 30;
	if(age<18)
	{
		printf("少年\n");
	}
	else if(age>=18 && age<25)
	{
		printf("青年\n");
	}
	else if(age>25 && age<50)
	{
		printf("壮年\n");
	}
	else if(age>=50 && age<80)
	{
		printf("中老年\n");
	}
	else
	{
		printf("老年\n");
	}
	system("pause");
	return 0;
}
*/



/*
struct Stu
{
	char name[20];
	short age;
	float weight;
};//结构体类型

int main()
{	
	struct Stu s = {"张三", 20, 55.5};
	printf("%s %d %f\n", s.name, s.age, s.weight);

	//int a = 10;
	//int* p = &a;

	//struct Stu* ps = &s;//ps结构体指针变量
	//printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).weight);
	//printf("%s %d %f\n", ps->name, ps->age, ps->weight);
	
	system("pause");
	return 0;
}
*/



/*
//指针变量的大小    跟指针类型没有关系
int main()
{
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(char*));//4
	printf("%d\n", sizeof(short*));//4
	printf("%d\n", sizeof(int*));//4
	printf("%d\n", sizeof(long*));//4
	printf("%d\n", sizeof(long long*));//4
	printf("%d\n", sizeof(float*));//4
	printf("%d\n", sizeof(double*));//4  
	system("pause");
	return 0;
}
*/



/*
int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int a = 10;//4字节
	int * p = &a;//指针变量 用来存放地址  int说明P指向的是一个整型   *说明p是指针
	*p = 20;//   *  解引用操作符//间接访问操作符  *p指的是通过P里面存放的地址，找到它所指向的那个变量。
	        //*p就是a
	printf("%d\n", a);
	system("pause");
	//printf("%p\n", &a);
	return 0;
}
*/



/*
#define MAX(x, y) ((x)>(y)?(x):(y))//宏带参数

int main()
{
	int a = 10;
	int b = 20;
	int max = MAX(a, b);//int max = a>b?a:b;
	printf("%d\n", max);
	system("pause");
	return 0;
}

#define MAX 1000

int main()
{
	int a = MAX;
	printf("a = %d\n", a);
	system("pause");
	return 0;
}
*/



/*
//static    静态的
//1. static修饰局部变量
//改变了变量的生命周期，但作用域不变
//2. static修饰全局变量
//改变了变量的作用域，使得静态全局变量的只能在当前的源文件内部使用
//《C和指针》
//3. static修饰函数-链接属性（外部链接属性-->内部链接属性（只能在自己内部使用））
//使得这个函数只能在自己的所在源文件内部使用


//声明外部符号的
//extern int g_val;

//extern int Add(int x, int y);
//
//int main()
//{
//	//printf("g_val = %d\n", g_val);
//	int sum = Add(1, 2);
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}


void test()
{
	static int a = 1;		//2 3 4 5 6 7 8 9 10 11  
	int a = 1;              //2 2 2 2 2 2 2 2  2  2  
	a++;
	printf("%d ", a);
}
int main()
{
	int i = 0;
	for(i=0; i<10; i++)
	{
		test();
	}
	system("pause");
	return 0;
}
*/



/*
typedef unsigned int uint;

typedef struct S
{
	int a;
	char c;
}S;

int main()
{
	//register int a = 10;  寄存器	  建议放在寄存器
	//typedef 类型重定义
	unsigned int a = 10;
	auto int a = 10;//自动
	uint b = 20;

	return 0;
}
*/



/*
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n", arr[5]);//arr[5] *(arr+5) *(5+arr) 5[arr]
	printf("%d\n", 5[arr]);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	//int a = 10;
	//int b = 20;
	//int max = 0;
	//if(a>b)
	//max = a;
	//else
	//max = b;
	//printf("max = %d\n", max);

	//max = (a>b)?(a):(b);
	//printf("max = %d\n", max);

	int a = 10;
	int b = 2;
	int c = 5;
	int d = (a=b-3, b=c+3, c=10+a);//a=-1  b=7  c=9  最后结果为 最后一个表达式的结果
	printf("%d\n", d);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int a = 0;
	int b = 0;
	int c = a||b;
	int d = a&&b;
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int a = (int)3.14;//强制类型转换
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	int b = a++;//先使用，后++
	//int b = ++a;//先++，后使用
	//int b = a--;
	//int b = --a;
	printf("a = %d\n", a);//11 11 9  9
	printf("b = %d\n", b);//11 10 10 9
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int a = 0;
	//00000000000000000000000000000000
	//11111111111111111111111111111111-补码
	//11111111111111111111111111111110
	//10000000000000000000000000000001

	printf("%d\n", ~a);//对一个数的二进制按位取反
	system("pause");//  结果为-1
	return 0;
}
*/



/*
int  main()
{
	//printf("%d\n", !0);
	int a = 10;
	printf("%d\n", sizeof(a));   //结果都为4
	printf("%d\n", sizeof(int));//sizeof(变量)  =  sizeof(变量的类型)   

	system("pause");
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	a = 20;
	a = a+10;
	a += 10;//复合赋值符
	return 0;
}
*/



/*
int main()
{
	int a = 3;
	int b = 5;
	//011
	//101
	int c = a^b;//按（二进制）位异或
	int d = a|b;//按（二进制）位或
	int e = a&b;//按（二进制）位与
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	printf("e = %d\n", e);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	//00000000 00000000 00000000 00001010
	int b = a<<1;  //左移  00000000 00000000 00000000 00010100

	printf("%d\n", b);//20
	printf("%d\n", a);//10   a值不变

	system("pause");
	return 0;
}

*/



/*
int main()
{
	int a = 5%2;  //"%"取模操作符只适于整型
	printf("%d\n", a);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	float a = 5/2.0;  //两个操作数都是整数，执行的是整数除法；只要有一个操作数是浮点数，则进行浮点数除法
	printf("%f\n", a);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	while(i<10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	//printf("%d\n", arr[4]);
	//char ch[5] = {'a', 'b', 'c'};
	system("pause");
	return 0;
}
*/



/*
int Add(int x, int y)  //第一个int表示返回值ret为int整型
{
	int ret = x+y;
	return ret;
}
int  main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	//sum = num1+num2;
	sum = Add(num1, num2);          //函数    f(x) = 2*x+1;       f(x, y) = x+y;
	printf("%d\n", sum);
	system("pause");
	return 0;
}
*/



/*
//while
//for
//do while
int main()
{
	int line = 0;
	printf("加入比特\n");

	while (line <= 20000)
	{
		printf("好好敲代码!\n");
		//if(line == 10000)
		//	break;
		line++;
	}

	if (line>20000)
		printf("好offer\n");
	else
		printf("半途而废\n");

	system("pause");
	return 0;
}
*/



/*
int main()
{
int input = 0;
printf("加入比特\n");
printf("你要好好学习吗？>:");
scanf("%d", &input);
if (1 == input)  //if中的()不能省略
{
printf("好offer\n");
}
else
{
printf("卖红薯\n");
}
system("pause");
return 0;
}
*/
