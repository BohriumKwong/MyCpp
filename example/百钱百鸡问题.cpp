//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
#include<stdio.h>
int main()
{
	int x,y,z,j=0;
	printf("Folleing are possible plans to buy 100 fowls with 100 Yuan.\n");
	for(x=0;x<=20;x++) /*外层循环控制鸡翁数*/
	for(y=0;y<=33;y++) /*内层循环控制鸡母数y在0~33变化*/
	{
		z=100-x-y; /*内外层循环控制下，鸡雏数z的值受x,y的值的制约*/
		if(z%3==0&&5*x+3*y+z/3==100)
		/*验证取z值的合理性及得到一组解的合理性*/
		printf("%2d:公鸡=%2d 母鸡=%2d 小鸡=%2d\n",++j,x,y,z);
	}
} 
