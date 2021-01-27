@ 1021
#include<stdio.h>
int main(){
    char data[51]="";
    scanf("%s", data);
    printf("%s",data);
}

@ 1022
#include<stdio.h>
int main(void)
{    char data[2001]="";
    fgets(data,2000,stdin);
    printf("%s", data);
    return 0;}
 // 뛰어쓰기 포함한 문장은 printf() 대신 fgets()함수를 사용해준다.
 //fgets()함수 안에는 3개의 인자가 들어간다.
 //fgets(a,b,c) -> a : 입력받은 값을 저장할 공간 b : 입력받을 최대 개수 c 표준 입력을 받기 위한 stdin
 
 @ 1023
 #include<stdio.h>
 int main(){
    int a,b;
    scanf("%d.%d",&a,&b);
    printf("%d\n%d",a,b);
    return 0;}
//그것을 하나의 실수형 변수에 저장하는 것이 아니라 정수 부분과 실수 부분을 각각 다른 정수형 변수에 저장

@ 1024
#include<stdio.h>
int main(){
    char a[25];
    scanf("%s",a);
    for(int i=0; a[i]!='\0';i++)
        {printf("'%c'\n",a[i]);}
        return 0;
}

@ 1025
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e);
    printf("[%1d]\n",a*10000);
    printf("[%1d]\n",b*1000);
    printf("[%1d]\n",c*100);
    printf("[%1d]\n",d*10);
    printf("[%1d]",e*1);
    return 0;}
    //모든 숫자를 각각의 다른 변수에 저장을 할 것이기 때문에 "%1d%1d%1d%1d%1d"
    
@ 1026
#include<stdio.h>
int main(){
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    printf("%d",m);
}
