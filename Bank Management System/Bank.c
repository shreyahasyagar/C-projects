#include<stdio.h>
#include<conio.h>

int main()
{
system("sh -c clear");
float draw,dep,transfer;
char name[24];
float balance=10000;
int account,account1,account2;
int type;
int transaction=1;
printf("\n\t\t\t\tBANKING SYSTEM\n\n");

printf("\t\t\tWELCOME TO OUR SH BANKING SYSTEM\t\t\t\n");

printf("Enter your name: ");
scanf("%s",&name);
printf("\nPlease enter your account no.: ");
scanf("%d",&type);
if(type>=6 ){

while(transaction == 1)
{
int option;
printf("\n Choose your option:\n");
printf("1 - Balance Enquiry\n");
printf("2 - Deposit\n");
printf("3 - Withdraw\n");
printf("4 - Transfer\n");
scanf("%d",&option);
switch(option)
{
case 1:
printf("\t\t\t*BALANCE ENQUIRY*\n\n");
printf("Your current balance is: Rs %.2f\n",balance);
break;
case 2:
printf("\n\t\t\t*DEPOSIT AMMOUNT*\n\n");
printf("How much amount do you want to deposit:");
scanf("%f",&dep);
if(dep > 0 && dep<=20000)
{
printf("\nYou deposited Rs %.2f successfully in your account.\n\n",dep);
balance+=dep;
}
else if(dep>20000)
{
printf("\nYou can't deposit amount greater than Rs.20000 in one time.\n\n");
}
else
{
printf("\nInvalid deposit amount\n");
}
break;
case 3:
printf("\n\t\t*WITHDRAW AMMOUNT*\n\n");
printf("How much amount do you want to withdraw:");
scanf("%f",&draw);
if(draw<=balance && draw<=20000)
{
printf("\n You just withdrew Rs %.2f\n\n",draw);
balance-=draw;
}
else if(draw>20000)
{
printf("\nYou can't withdraw amount greater than Rs.20000 in one time.\n\n");
}
else
{
printf("\n No sufficient balance\n\n");
}
break;
case 4:
printf("\t\t\tTRANSFER AMOUNT \n\n");
printf("\n\t\tAccount You Want To Transfer: ");
scanf("%d",&account2);
printf("\nHow much amount do you want to transfer?: ");
scanf("%f",&transfer);
if(balance>=transfer)
{
printf("\nYour amount of Rs %.2f successfully transfered\n\n",transfer);
balance-=transfer;
}
else
{printf("\n No sufficient balance\n\n");}
break;
default:
printf("Invalid transaction\n");
}
transaction=0;
while(transaction!=1 && transaction!=2)
{
printf("Do you want to do another transaction?\n");
printf("1. yes 2. no\n");
scanf("%d",&transaction);
if(transaction!=1 && transaction!=2)
{
printf("Invalid no.\n Choose between 1 and 2 only\n");}}}
system("sh -c clear");
printf("\n\t\t\t-------------------------------");
printf("\n\t\t\t\t SH BANK LIMITED\n");
printf("\t\t\t-------------------------------\n\n");
printf("\t\t\tDate:3/9/2021\t   Time:1:20 Pm\n");
printf("\n\t\t\t Your name: %s\n\n",name);
printf("\t\t\t Your account no: %d\n\n",type);
if(dep >= 0 && dep < 20000)
{
printf("\t\t\t You've deposited Rs %.2f\n",dep);
}
else
{printf("\t\t\t You've deposited Rs 0\n");}
if(draw>0 && draw<=20000 && draw<=balance)
{
printf("\t\t\t You've withdraw Rs %.2f\n",draw);
}
else
{printf("\t\t\t You've withdraw 0Rs\n");}
if(transfer>0 && transfer<=20000 && transfer<=balance)
{
printf("\t\t\t You've Transfered Rs %.2f\n",transfer);}
else
{printf("You've Transfered Rs 0\n ");}
printf("\n\t\t\t\t    Thank you! \n");
printf("\t\t\t   Welcome to SH Banking System\n");
printf("\t\t\t      www.SHBANKINGSYSTEM.com\n");
getch();
}
else{
	printf("Account no. should be greater than 6 digits and less than 8 digits. Enter valid password.");
}
return(0);
}
