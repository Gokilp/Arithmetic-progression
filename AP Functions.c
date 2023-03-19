#include<stdio.h>
#include<math.h>
void FindNthTerm()
{
    int a,d,n, result;
    printf("\n Enter the Frist term Value (a):");
    scanf("%d",&a);
    printf("\n Enter the difference of (d)");
    scanf("%d",&d);
    printf("Which Term you Want (n) ?");
    scanf("%d",&n);

    result=a+(n-1)*d;  // Formula FindNthTerm
    printf("\n %d th Term is:%d\n",n,result);
   printf("\npress a key to Continue....");
 printf("\n");
}
void printNTerms()
{
    int a,d,n,result;
    printf("\n Enter the Frist term Value (a):");
    scanf("%d",&a);
    printf("\n Enter the difference of (d)");
    scanf("%d",&d);
    printf("Which Term you Want (n) ?");
    scanf("%d",&n);
    int i=1;
    result=a;
    for(i=1;i<=n;i++)
    {
        printf("%5d",result);
        result=result+d;

    }
    printf("\npress a key to Continue....");
    printf("\n");
}
void particular()
{
    int a,d,n,st,result;
    printf("\n Enter the Frist term Value (a):");
    scanf("%d",&a);
    printf("\n Enter the difference of (d)");
    scanf("%d",&d);
    printf("Enter the Starting the Term");
    scanf("%d",&st);
    printf("Which Term you Want (n) ?");
    scanf("%d",&n);
    int i=1;
    result=a+(st-1)*d;
    for(i=1;i<=n;i++)
    {
        printf("%5d",result);
        result=result+d;

    }
    printf("\npress a key to Continue....");
    printf("\n");
}

void Find3TermUsingSumProduct()
{
    int sum,product,a,d;
    printf("Enter the sum of 3 Conseuctive Numbers");
    scanf("%d",&sum);
    printf("Enter the sum of 3 Conseuctive Numbers");
    scanf("%d",&product);
    a=sum/3;
    d=sqrt(a*a-(product/a));
    printf("\n Three consective terms are %d %d %d", a-d,a,a+d);
    printf("\npress a key to Continue....");
    printf("\n");
}
void Find3TermUsingSumandSquare()
{
    int s,ss,a,d;
    printf("\n Enter sum of 3 Consecutive Numbers");
    scanf("%d",&s);
    printf("\n Enter the sum of Square of 3 Consective Number");
    scanf("%d",&ss);
    a=s/3;
    d=sqrt((ss-3*a*a)/2);
    printf("\n Three consecutive terms are %d %d %d",a-d,a,a+d);
    printf("\npress a key to Continue....");
    printf("\n");
}