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

@ 1007
#include<stdio.h>
int main(){
    printf("\"C:\\Download\\hello.cpp\"");
}

@ 1008
#include<stdio.h>
int main(){
    printf("\u250C\u252C\u2510\n");
    printf("\u251C\u253C\u2524\n");
    printf("\u2514\u2534\u2518\n");
}

@ 1009
#include<stdio.h>
int main()
{
    int n=15;
    scanf("%d", &n);
    printf("%d", n);

    return 0;
}

@ 1010
#include<stdio.h>
int main(){
    char x='p';
    scanf("%c", &x);
    printf("%c", x);
}

@ 1011
#include<stdio.h>
int main(){
    float n=1.414213;
    scanf("%f",&n);
    printf("%f",n);
}

@ 1012
#include<stdio.h>
int main(){
    int a=1,b=2;
    scanf("%d %d",&a,&b);
    printf("%d %d",a,b);
}
