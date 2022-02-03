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
	getchar();
	int ch=0;
	while((ch=getchar())!='\n')
	{
		;
	}
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
	
	//‘斜杠n'对应asc码的10
	//引入缓冲区的讲解（图1）
	//如何让缓冲区清0？用一个getchar让缓冲区的‘\n'读走，即清空缓冲区
	//问题2:输入1234 abcd中间用空格怎么办？引入一个循环
	
	
	
	

}



