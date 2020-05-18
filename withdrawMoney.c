#include "functions.h"

void withdrawMoney()
{
    int no, b = 0, m = 0;
    float aa;
    printf("\n*************************************");
    printf("\n WITHDRAW ");
    printf("\n*************************************");
    printf("\nEnter your Account Number");
    scanf("%d", &no);
    for (b = 0; b < i; b++)
    {
        if (s[b].no == no)
            m = b;
    }
    if (s[m].no == no)
    {
        printf("\n Account Number : %d", s[m].no);
        printf("\n Name : %s", s[m].name);
        printf("\n Deposit : %f", s[m].dep);
        printf("\n How Much Withdraw Now:");
        scanf("%f", &aa);
        if (s[m].dep < aa + 500)
        {
            printf("\nCANNOT WITHDRAW YOUR ACCOUNT HAS MINIMUM BALANCE");
            getch();
        }
        else
        {
            s[m].dep -= aa;
            printf("\nThe Balance Amount is:%f", s[m].dep);
        }
    }
    else
    {
        printf("INVALID");
        getch();
    }
    getch();
}
