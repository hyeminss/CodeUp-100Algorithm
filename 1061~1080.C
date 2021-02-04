@ 1061 
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d",a|b);
    return 0;
    }
//예를 들어 3과 5가 입력되었을 때를 살펴보면
//3     : 00000000 00000000 00000000 00000011
//5     : 00000000 00000000 00000000 00000101
//3 | 5 : 00000000 00000000 00000000 00000111

@ 1062
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d",a^b);
    return 0;
    }
//    예를 들어 3과 5가 입력되었을 때를 살펴보면
// 3       : 00000000 00000000 00000000 00000011
// 5       : 00000000 00000000 00000000 00000101
// 3 ^ 5   : 00000000 00000000 00000000 00000110

@ 1063
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);    
    printf("%d",a>b?a:b);   
    return 0;
}
//"조건식 ? (참일 때의 값) : (거짓일 때의 값)” 의 형태로 사용하는 연산자이다.
//- 조건식의 계산 결과가 참인 경우에는 ':' 왼쪽의 값 또는 식으로 바뀌고,
//- 거짓인 경우에는 ':' 오른쪽의 값 또는 식으로 바뀐다.

@ 1064
#include <stdio.h>
int main(){
    int a,b,c;    
    scanf("%d %d %d", &a, &b, &c);    
    printf("%d",(a<b?a:b)<c?(a<b?a:b):c);   
    return 0;
}
//(a<b?a:b)<c?(a<b?a:b):c)
// a와 b중 작은 수) 가 c 보다 --> 작으면 결과는 (a와 b중 작은 수) 
//
//                            --> 크면 결과는 c
//
//즉 이 연산의 값은 a, b, c중에서 가장 작은 값이 된다.

@ 1065
#include <stdio.h>
 
int main(){
    int a,b,c;    
    scanf("%d %d %d",&a,&b,&c);   
   if(a%2==0) printf("%d\n",a);
   if(b%2==0) printf("%d\n",b);
   if(c%2==0) printf("%d\n",c);   
    return 0;
}
//(a%2==0) 이라는 조건은 (a를 2로 나눈 나머지가 0이다) 라는 뜻
//if(a%2==0) printf("%d\n",a); //a가 짝수면 a를 출력
//if(b%2==0) printf("%d\n",b); //b가 짝수면 b를 출력
//if(c%2==0) printf("%d\n",c); //c가 짝수면 c를 출력




