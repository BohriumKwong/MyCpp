//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
#include<stdio.h>
main()
{
	int x,y,z,t;
	printf("请任意输入三个整数程序将按从小到大的顺序输出:");
	scanf("%d%d%d",&x,&y,&z);
	if (x>y)
	{t=x;x=y;y=t;} /*交换x,y的值*/
	if(x>z)
	{t=z;z=x;x=t;}/*交换x,z的值*/
	if(y>z)
	{t=y;y=z;z=t;}/*交换z,y的值*/
	printf("从小到大: %d %d %d\n",x,y,z);
} 
