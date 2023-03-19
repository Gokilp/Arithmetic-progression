#include<stdio.h>
#include"AP Functions.c"

int main()
{
    int opt;
    while(1)
    {
        printf("\t \t Arithematic progression");
        printf("\n ---------------------------------------");
        printf("\n");
        printf("\n 1.Find Nth Term");
        printf("\n 2.Print Frist N Terms");
        printf("\n 3.Print Particular Term");
        printf("\n 4.Find the 3rd  Consective Numbers using it sum and product");
        printf("\n 5.The sum of Square of 3 Consective Number");
        printf("\n 6.Exit");
        printf("\n  Choose Any choice (1-6)\n press any key continue");

        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
               FindNthTerm();
                break;
            case 2:
                printNTerms();
                break;
            case 3:
                particular();
                break;
            case 4:
                Find3TermUsingSumProduct();
                break;
            case 5:
                Find3TermUsingSumandSquare();
                break;
            case 6:
                return;
                
            default:
                printf("Invalid Option");
        }
    }
}
