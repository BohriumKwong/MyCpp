//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
//----------------------------------------------------------
//程序分析：0|0=0; 0|1=1; 1|0=1; 1|1=1　　　　　　　　　　　　
//----------------------------------------------------------
#include "stdio.h"
main()
{
	int a,b;
	a=077;
	b=a|3;
	printf("\40: The a & b(decimal) is %d \n",b);
	b|=7;
	printf("\40: The a & b(decimal) is %d \n",b);
}
 
