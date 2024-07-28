#include<stdio.h>
void deposit()
{

    int amt,bal;
    printf("Enter the balance amount:");
    scanf("%d",&bal);
    printf("Enter the amount to be deposited:");
    scanf("%d",&amt);
    bal+=amt;
    printf("The amount is deposited successfully..!!\n");
    printf("The balance is:%d",bal);


}
void withdraw()
{

    int amt,bal;
    printf("Enter the balance amount:");
    scanf("%d",&bal);
    printf("Enter the amount to be deposited:");
    scanf("%d",&amt);
    if(amt>bal)
    {
        printf("The balance is not sufficient to withdraw..!!\n");

    }
    else
    {
        bal-=amt;
        printf("The amount is withdrawed successfully..!!\n");
        printf("The balance is:%d",bal);
    }

}
void check()
{
    int bal;
    printf("Enter the balance amount:");
    scanf("%d",&bal);
     printf("The balance is:%d",bal);

}
int main()
{
    int acc_no,choice;
    char name[10];
      printf("Enter the account number:");
    scanf("%d",&acc_no);
      printf("Enter the name:");
    scanf("%s",&name);
    printf("Enter the choice :\n1.Deposit\n2.Withdraw\n3.Check balance\n");
        scanf("%d",&choice);

   switch(choice)
    {

    case 1:
       deposit();
        break;
    case 2:
        withdraw();
        break;
    case 3:
       check();
        break;

    default:
        printf("Enter the valid option");
    }
    return 0;

}
