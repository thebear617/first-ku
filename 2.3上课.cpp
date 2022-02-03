#include<stdio.h>
int main()
{	//代码1:理解getchar putchar
	/*int ch=getchar();
	putchar(ch);
	printf("%c\n",ch);//初步理解getchar putchar
	return 0;
	int ch=0;*/
	//代码2：eof理解
	int ch=0;
	while((ch=getchar())!=EOF)
{
	putchar(ch);
}

}



