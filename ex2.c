#include <stdio.h>

int main()
{
    int num = 0, num2 = 0;
    
	// ���� 2���� �Է¹޾Ƽ�
	scanf("%d %d", &num, &num2 ) ;
	
	// ���� 2�� ��� 
	printf("%d %d\n", num, num2 ) ;
	
	// (n1*10+3)-n2 ��� 
	printf("%d\n", (num*10+3)-num2) ;
    
	return 1 ;
}
