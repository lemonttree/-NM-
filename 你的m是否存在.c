#include<stdio.h>
int main()
{
	int i=0;
	char st[20],*p;
	printf("请输入字符串:");
	p=st;
	scanf("%s",p);
	for(;*(p+i)!='\0';i++)
	{
		if(*(p+i)=='m')
		{
			printf("该字符串里有m\n");
			break;
		}

	}
	if(*(p+i)=='\0')
	{
		printf("该字符串里没有m\n");
	}
	return 0;
}
