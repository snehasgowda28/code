#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,diff,pro,rem;
    char op;
    printf("Enter the operator");
    scanf("%c",&op);
    printf("Enter the no");
    scanf("%d %d",&a,&b);


    switch(op)
    {
        case '+':
            sum=a+b;
            printf("The sum is %d",&sum);
            break;

        case '-':
            diff=a-b;
            printf("The diff is %d",&diff);
            break;

        case '*':
            pro=a+b;
            printf("The product is %d",&pro);
            break;

        case '/':
             rem=a+b;
            printf("The remainder is %d",&rem);
            break;

        default:
            printf("invalid operator");
    }

    return 0;
}
