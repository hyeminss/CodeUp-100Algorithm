@ 1041
#include<stdio.h>
int main(){
    int n;
    scanf("%c",&n);
    printf("%c",n+1);
    return 0;
}

@ 1042
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%d", a/b);
}

@ 1043
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%d", a%b);
    return 0;
}

@ 1044
#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld",++n);
    return 0;
}
// ++n : 증감연산자

@ 1045
#include <stdio.h>
 
int main()
{
    long long a,b;
    
    scanf("%lld %lld", &a, &b);
    
    printf("%lld\n", b+a);
    printf("%lld\n", a-b);
    printf("%lld\n", a*b);
    printf("%lld\n", a/b);
    printf("%lld\n", a%b);
    printf("%.2f\n", ((float)a/b));
   
    
    return 0;
}

@ 1046
#include <stdio.h>
int main()
{   long long a,b,c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", c+b+a);
    printf("%.1f", (((float)a)+b+c)/3);
    return 0;
}}

@ 1047 
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d", a<<1); //a을 2배
    return 0;
}

@ 1048 
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", a << b);
    return 0;
}//예를 들어 1 3 이 입력되면 1을 2^3(8)배 하여 출력한다.

@ 1049
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("1");
    else printf("0");
    return 0;
}

@ 1050
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b)
    printf("1");
    else printf("0");
    return 0;
}

@ 1051
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>=a){
        printf("1");
    }
    else printf("0");
    return 0;
}

@ 1052 
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a!=b){
        printf("1");
    }
    else printf("0");
    return 0;
}

@ 1053 
#include <stdio.h>
int main()
{   int a;
    scanf("%d", &a);
    printf("%d",!a);
    return 0;
}

@ 1054 
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d",b&&a);
    return 0;
}
//논리연산자 && 는 주어진 2개의 논리값이 모두 참(1) 일 때에만 1(참)로 계산하고, 그 외의 경우에는 0(거짓) 으로 계산한다.

@ 1055
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d",b||a);
    return 0;
}
// 둘 중 하나라도 참일 경우에도 연산값이 참이 되는 ||연산자

@ 1056 
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a!=b);
    return 0;
}
//a!=b는 a와 b가 다를 경우 참이 되어 1이 출력되며 같을 경우 거짓이 되어 0이 출력

@ 1057
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a==b);
    return 0;
}
//참/거짓이 같을 때에만 참이 계산되어야 함

@ 1058
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",(a==0)&&(0==b));
    return 0;
}
//모두 거짓인 경우에만 참을 출력해야 함
//a==b의 조건을 만족하며 둘 중 하나가 1이 참이 아니면 1을 출력해야 함

@ 1059
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",~n);
    return 0;
}
//~n = -n - 1
//-n = ~n + 1 과 같은 관계로 표현됨

@ 1060
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a&b);
    return 0;
}
//비트단위(bitwise)연산자 &를 사용
//비트단위의 AND연산은 두 개의 비트열이 주어졌을 때 둘 다 1인 부분만 1이 되고 둘 중 하나만 1이거나 둘 다 0인 경우 0이 됨

