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
			printf("haha\n");//else�������if����
	system("pause");//�˳����޽��  ��Ϊa=0
	return 0;
}


/*
int main()
{
	int age = 30;
	if(age<18)
	{
		printf("����\n");
	}
	else if(age>=18 && age<25)
	{
		printf("����\n");
	}
	else if(age>25 && age<50)
	{
		printf("׳��\n");
	}
	else if(age>=50 && age<80)
	{
		printf("������\n");
	}
	else
	{
		printf("����\n");
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
};//�ṹ������

int main()
{	
	struct Stu s = {"����", 20, 55.5};
	printf("%s %d %f\n", s.name, s.age, s.weight);

	//int a = 10;
	//int* p = &a;

	//struct Stu* ps = &s;//ps�ṹ��ָ�����
	//printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).weight);
	//printf("%s %d %f\n", ps->name, ps->age, ps->weight);
	
	system("pause");
	return 0;
}
*/



/*
//ָ������Ĵ�С    ��ָ������û�й�ϵ
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
	int a = 10;//4�ֽ�
	int * p = &a;//ָ����� ������ŵ�ַ  int˵��Pָ�����һ������   *˵��p��ָ��
	*p = 20;//   *  �����ò�����//��ӷ��ʲ�����  *pָ����ͨ��P�����ŵĵ�ַ���ҵ�����ָ����Ǹ�������
	        //*p����a
	printf("%d\n", a);
	system("pause");
	//printf("%p\n", &a);
	return 0;
}
*/



/*
#define MAX(x, y) ((x)>(y)?(x):(y))//�������

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
//static    ��̬��
//1. static���ξֲ�����
//�ı��˱������������ڣ��������򲻱�
//2. static����ȫ�ֱ���
//�ı��˱�����������ʹ�þ�̬ȫ�ֱ�����ֻ���ڵ�ǰ��Դ�ļ��ڲ�ʹ��
//��C��ָ�롷
//3. static���κ���-�������ԣ��ⲿ��������-->�ڲ��������ԣ�ֻ�����Լ��ڲ�ʹ�ã���
//ʹ���������ֻ�����Լ�������Դ�ļ��ڲ�ʹ��


//�����ⲿ���ŵ�
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
	//register int a = 10;  �Ĵ���	  ������ڼĴ���
	//typedef �����ض���
	unsigned int a = 10;
	auto int a = 10;//�Զ�
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
	int d = (a=b-3, b=c+3, c=10+a);//a=-1  b=7  c=9  �����Ϊ ���һ�����ʽ�Ľ��
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
	int a = (int)3.14;//ǿ������ת��
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	int b = a++;//��ʹ�ã���++
	//int b = ++a;//��++����ʹ��
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
	//11111111111111111111111111111111-����
	//11111111111111111111111111111110
	//10000000000000000000000000000001

	printf("%d\n", ~a);//��һ�����Ķ����ư�λȡ��
	system("pause");//  ���Ϊ-1
	return 0;
}
*/



/*
int  main()
{
	//printf("%d\n", !0);
	int a = 10;
	printf("%d\n", sizeof(a));   //�����Ϊ4
	printf("%d\n", sizeof(int));//sizeof(����)  =  sizeof(����������)   

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
	a += 10;//���ϸ�ֵ��
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
	int c = a^b;//���������ƣ�λ���
	int d = a|b;//���������ƣ�λ��
	int e = a&b;//���������ƣ�λ��
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
	int b = a<<1;  //����  00000000 00000000 00000000 00010100

	printf("%d\n", b);//20
	printf("%d\n", a);//10   aֵ����

	system("pause");
	return 0;
}

*/



/*
int main()
{
	int a = 5%2;  //"%"ȡģ������ֻ��������
	printf("%d\n", a);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	float a = 5/2.0;  //��������������������ִ�е�������������ֻҪ��һ���������Ǹ�����������и���������
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
int Add(int x, int y)  //��һ��int��ʾ����ֵretΪint����
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
	sum = Add(num1, num2);          //����    f(x) = 2*x+1;       f(x, y) = x+y;
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
	printf("�������\n");

	while (line <= 20000)
	{
		printf("�ú��ô���!\n");
		//if(line == 10000)
		//	break;
		line++;
	}

	if (line>20000)
		printf("��offer\n");
	else
		printf("��;����\n");

	system("pause");
	return 0;
}
*/



/*
int main()
{
int input = 0;
printf("�������\n");
printf("��Ҫ�ú�ѧϰ��>:");
scanf("%d", &input);
if (1 == input)  //if�е�()����ʡ��
{
printf("��offer\n");
}
else
{
printf("������\n");
}
system("pause");
return 0;
}
*/
