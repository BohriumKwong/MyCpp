//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
#include<stdio.h>
#include<math.h>
int main()
{
	double y;
	int x,m;
	for(y=10;y>=-10;y--)
	{
		m=2.5*sqrt(100-y*y); /*计算行y对应的列坐标m，2.5是屏幕纵横比调节系数因为屏幕的
			行距大于列距，不进行调节显示出来的将是椭圆*/
		for(x=1;x<30-m;x++) printf(" "); /*图形左侧空白控制*/
			printf("*"); /*圆的左侧*/
		for(;x<30+m;x++) printf(" "); /*图形的空心部分控制*/
			printf("*\n"); /*圆的右侧*/ 
	}
	return 0; 
} 
