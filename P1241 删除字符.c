#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int main()
{
	int i, j, c, k = 0;
	char a[100] = { 0 },  //存放所有字符的数组
		 b[100] = { 0 },  //存放前面的*
		 d[100] = { 0 },  //存放后面的*
		 e[100] = { 0 },  //存放中间删除*后的字符
	     s[100] = { 0 };  //归零用
	while (gets(a) != NULL) //多组输入
	{
		c = strlen(a);//计算长度
		for (i = 0; a[i] == '*'; i++)
		{
			b[i] = a[i];  //b存放前面的*，i是字母前*的个数
		}
		for (j = c - 1; a[j] == '*'; j--)
		{
			d[k++] = a[j];   //d存放后面的*，此时的j是从第一个字母到最后的个数
		}
		k = 0;//将上次的k清0
		for (j = 0; a[j] != '\0'; j++)
		{
			if (a[j] != '*')
				e[k++] = a[j];   //e[]存放中间去除*后的结果，全是a
		}
		/*连接并输出*/
		printf("%s", e);
		printf("%s\n", d);
		/*归零所有数组*/
		memset(a, '\0', sizeof(a));
		memset(b, '\0', sizeof(b));
		memset(d, '\0', sizeof(d));
		memset(e, '\0', sizeof(e));
		k = 0;
	}
	return 0;
}
