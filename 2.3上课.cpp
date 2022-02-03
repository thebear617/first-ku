#include<stdio.h>
int main()
{	//代码1:理解getchar putchar
	/*int ch=getchar();
	putchar(ch);
	printf("%c\n",ch);//初步理解getchar putchar
	return 0;
	int ch=0;*/
	/*代码2：eof理解
	int ch=0;
	while((ch=getchar())!=EOF)
{
	putchar(ch);
}*/
	/*代码3:*/
	char password[20]={0};
	printf("请输入密码：");
	scanf("%s",password);
	printf("请确认（Y/N）");
	int ret;
	ret=getchar();
	if(ret=='Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	//按照上述代码就会有直接出放弃确认
	
	

}



