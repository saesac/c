#include <stdio.h>

int main()
{
    int num = 0, num2 = 0;
    
	// 숫자 2개를 입력받아서
	scanf("%d %d", &num, &num2 ) ;
	
	// 숫자 2개 출력 
	printf("%d %d\n", num, num2 ) ;
	
	// (n1*10+3)-n2 출력 
	printf("%d\n", (num*10+3)-num2) ;
    
	return 1 ;
}
