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
        if (customer[b].no == no)
            m = b;
    }
    if (customer[m].no == no)
    {
        printf("\n Account Number : %d", customer[m].no);
        printf("\n Name : %s", customer[m].name);
        printf("\n Deposit : %f", customer[m].dep);
        printf("\n How Much Withdraw Now:");
        scanf("%f", &aa);
        if (customer[m].dep < aa + 500)
        {
            printf("\nCANNOT WITHDRAW YOUR ACCOUNT HAS MINIMUM BALANCE");
            getch();
        }
        else
        {
            customer[m].dep -= aa;
            printf("\nThe Balance Amount is:%f", customer[m].dep);
        }
    }
    else
    {
        printf("INVALID");
        getch();
    }
    getch();
}
