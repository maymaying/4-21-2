#define _CRT_SECURE_NO_WARNINGS 1

static int g_val = 2019;//static所在源文件可用   改变了作用域

int Add(int x, int y)
{
	return x + y;
}
