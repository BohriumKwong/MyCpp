//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<7;i++)
	for(j=0;j<7;j++)
	for(k=1;k<7;k++)
	if(i*9*9+j*9+k==i+j*7+k*7*7)
	{
		printf("The special number with 3 digits is:");
		printf("%d%d%d(7)=%d%d%d(9)=%d(10)\n",k,j,i,i,j,k,i*9*9+j*9+k);
	}
} 
