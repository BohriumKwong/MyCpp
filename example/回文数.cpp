//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
#include<stdio.h>
int main(void)
{
	int m[16],n,i,t,count=0;
	long unsigned a,k;
	printf("No. number it's square(palindrome)\n");
	for(n=1;n<256;n++) /*穷举n的取值范围*/
	{
		k=0;t=1;a=n*n; /*计算n的平方*/

		for(i=0;a!=0;i++) /*从低到高分解数a的每一位存于数组m[0]~m[16]*/
		{
			m[i]=a%10;//这个是取得a的个位，整个循环合起来就可以取得各个位
			a/=10; 
		}

		int j=0;
		for(i--;j<i;j++,i--)//因为n的平方的各个位都存在数组中了，下面判断是不是对称
		if(m[j]!=m[i])break;//只要有一位不是对称，那就说明不是对称，就可以退出了

		//所有的位都对称就说明是对称了，这样就可以打印出结果了
		if(j>=i)printf("%2d%10d%10d\n",++count,n,n*n);

	} 

	return 0;
}

 
