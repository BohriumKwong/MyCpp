//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
#include "stdio.h"
main()
{
int i,j;
for(i=0;i<8;i++)
  {
    for(j=0;j<8;j++)
      if((i+j)%2==0)
        printf("%c%c",219,219);
      else
       printf("  ");
       printf("\n");
  }
} 
