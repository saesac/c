#include <stdio.h>

//한줄 주석문

/*
다중 
주석문
*/ 

int main()
{
	int num = 60 ;
	int num2 = 13 ;
	char ch = 'c' ;
	
	// 프로그램 시작 
	printf("hello world\n") ;
	printf("%d %c\n", num+num2, ch+3) ;
	
	/* 
	num+num2 결과 출력 
	num-num2 결과 출력
	num*num2 결과 출력
	num/num2 결과 출력
	num%num2 결과 출력
	*/ 
	printf("더하기 : %d \n", num+num2) ;
	printf("빼기: %d \n", num-num2) ;
	printf("나누기 : %d \n", num*num2) ;
	printf("곱하기 : %d \n", num/num2) ;
	printf("나머지 : %d \n", num%num2) ;
	
	// %d %f %c 출력 연습 
    printf("%d, %f, %c \n", 1234, 1.34, 'c') ;
    printf("%d %d \n", 10, 20) ;
    
    // 창 안 닫기게 
	system("pause") ;
    
	return 1 ;
}
