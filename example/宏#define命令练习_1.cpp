//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
#define LAG >
#define SMA <
#define EQ ==
#include "stdio.h"
void main()
{ 
	int i=10;
	int j=20;
	if(i LAG j)
	printf("\40: %d larger than %d \n",i,j);
	else if(i EQ j)
	printf("\40: %d equal to %d \n",i,j);
	else if(i SMA j)
	printf("\40:%d smaller than %d \n",i,j);
	else
	printf("\40: No such value.\n");
} 

 
