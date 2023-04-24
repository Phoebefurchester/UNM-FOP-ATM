#include <stdio.h>

unsigned long amount=1000,deposit,withdraw;
int pin,choice,i;
char transaction='y';

void main()
{
	while(pin !=5200)
	{
		printf("ENTER YOUR PIN NUMBER: ");
		scanf("%d",&pin);
		if (pin !=5200)
		printf("PLEASE ENTER VALID PIN NUMBER\n");
	}
	do
	{
		printf("********Welcome to ATM service********\n");
		printf("1.Check Balance\n");
		printf("2.Withdraw Cash\n");
		printf("3.Deposit Cash\n");
		printf("4.Quit\n");
		printf("********************?********************?\n\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
				printf("\nYOUR BALANCE IN :RM%lu",amount);
				break;
		case 2:
				printf("\nENTER THE AMOUNT TO WITHDRAW: ");
				scanf("%lu",&withdraw);
				if(withdraw%50!=0)
				{
						printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 50");		
				}
				else if (withdraw>(amount-500))
				{
						printf("\nINSUFFICENT BALANCE");
				}
				else
				{
					amount= amount-withdraw;
					printf("\nPLEASE COLLECT CASH");
					printf("\nYOUR CURRENT BALANCE IS RM%lu",amount);
				}
				break;
		case 3:
				printf("\nENTER THE AMOUNT TO DEPOSIT: ");
				scanf("%lu",&deposit);
				amount= amount+ deposit;
				printf("YOUR BALANCE IS RM%lu",amount);
				break;
		case 4:
			printf("\nTHANK YOU FOR USING ATM");
			break;
		default:
			printf("\nINVALID CHOICE");		
		}
		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSACTION?(y/n): \n");
		fflush(stdin);
		scanf("%c",&transaction);
		if(transaction=='n'||transaction=='N')
		i=1;
	}while(!i);
	printf("\n\nTHANKS FOR USING OUR ATM SERVICE");
}
