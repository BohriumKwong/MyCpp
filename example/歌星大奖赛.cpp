//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
#include<stdio.h>
int main()
{
	int integer,i,max,min,sum;
	max=-32768; /*先假设当前的最大值max为C++语言整型数的最小值*/
	min=32767; /*先假设当前的最小值min为C++语言整型数的最大值*/
	sum=0; /*将求累加和变量的初值置为0*/
	for(i=1;i<=10;i++)
	{
	printf("请输入分数 %d=",i);
	scanf("%d",&integer); /*输入评委的评分*/
	sum+=integer; /*计算总分*/
	if(integer>max)max=integer; /*通过比较筛选出其中的最高分*/
	if(integer<min)min=integer; /*通过比较筛选出其中的最低分*/
	}
	printf("---------------------------------\n");
	printf("最高分:%d\n最低分:%d\n",max,min);
	printf("去掉最高分和最低分的平均分:%d\n",(sum-max-min)/8); /*输出结果*/
	printf("\n\n");
}  
