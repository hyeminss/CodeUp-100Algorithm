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

