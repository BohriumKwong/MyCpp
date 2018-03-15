//Myc++例程,部份为作者收集!
//欢迎到http://bbs.ab07.cn交流,学习,共同进步!
#include <stdio.h>
void hanoi(int n, char A, char B, char C)
 {    	
	if(n == 1) 
	{      
		printf("Move sheet %d from %c to %c\n", n, A, C);   
	}    
	else 
	{ 
		hanoi(n-1, A, C, B);      
		printf("Move sheet %d from %c to %c\n", n, A, C);    
		hanoi(n-1, B, A, C);  
	}
}
int main() 	
{    
	int n;  
	printf("请输入盘数:");  
	scanf("%d", &n);   
	hanoi(n, 'A', 'B', 'C');
	int x;
	scanf("%d",&x);  
	return 0;
} 
 
