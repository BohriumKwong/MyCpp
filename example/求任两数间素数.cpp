//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
#include<stdio.h>
int main()
{
	int n1,nm,i,j,flag,count=0;
	do{
		printf("请输入求素数的范围(开始数-结束数--中间用空格隔开!)");
		scanf("%d%d",&n1,&nm); /*输入求素数的范围*/
	}while(!(n1>0&&n1<nm)); /*输入正确的范围*/
		printf(".........................所有素数(%d--%d).....................\n",n1,nm);
	if(n1==1||n1==2) /*处理素数2*/
	{
		printf("%4d",2);
		n1=3;count++;
	}
	for(i=n1;i<=nm;i++) /*判定指定范围内的整数是否为素数*/
	{
		if(!(i%2))continue;
		for(flag=1,j=3;flag&&j<i/2;j+=2)
		/*判定能否被从3到整数的一半中的某一数所整除*/
		if(!(i%j))flag=0; /*若能整除则不是素数*/
		if(flag) printf(++count%15?"%4d":"%4d\n",i);
	}
		printf("\n..............................................................\n");
} 
