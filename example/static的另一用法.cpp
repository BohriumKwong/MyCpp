//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
#include "stdio.h"
main()
{
	int i,num;
	num=2;
	for(i=0;i<3;i++)
	{
		printf("\40: The num equal %d \n",num);
		num++;
		{
			static int num=1;
			printf("\40:The internal block num equal %d\n",num);
			num++;
		}
	}
}  
