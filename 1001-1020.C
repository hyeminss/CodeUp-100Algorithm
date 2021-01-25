//visual studio 2019 버전 이후로는 #define _CRT_SECURE_NO_WARNINGS 필수로 적어줘야 함
@ 1001
#include<stdio.h>

int main(void)
{
	printf("Hello");
	return 0;
}

@ 1002
#include<stdio.h>

int main(){
    printf("Hello World");
}

@ 1003
#include<stdio.h>
int main(){
    printf("Hello\nWorld");
}

@ 1004
#include<stdio.h>
int main(){
    printf("'Hello'");
}

@ 1005
#include<stdio.h>
int main(){
    printf("\"Hello World\"");
}

@ 1006
#include<stdio.h>
int main(){
    printf("\"!@#$%^&*()\"");
}
