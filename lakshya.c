/ Online C compiler to run C program online
program 6
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter no a: " );
    scanf("%d",&a);
    
    printf("enter no b:");
    scanf("%d",&b);
    if(a==b)
    {
        printf("both are equal");
    }
    else
    {
        printf("not equal");
    }

    return 0;
}



program 8

/ Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("enter a no = " );
    scanf("%d",&n);
    
    if(n%2==0)
    {
        printf("no is even");
    }
    else
    {
        printf("no is odd");
    }

    return 0;
}


program 10

#include <stdio.h>

int main() {
 int a,b,c,d,e;
 float sum,per;
 printf("enter marks of pps = ");
 scanf("%d",&a);
 
printf("enter marks of ee");
scanf("%d",&b);

printf("enter marks of evs");
scanf("%d",&c);

printf("enter marks of maths");
scanf("%d", &d);

printf("enter marks of physics");
scanf("%d", &e);

sum=a+b+c+d+e;
per=sum/5;
if(per>=90&& per<=100)
{
    printf("Grade A ");
}
else if(per>=80 && per<90);
{
    printf("Grade B");
}

    return 0;
} 