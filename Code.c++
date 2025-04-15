#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct account
{
	char name[30];
	int age;
	int ano;
	char username[20];
	int password;
	int balance;
	int tpin;
}a,b;
int account();
int init();
int login();
int intf();
int welc();
int wela();
int tran();
int bill();
int account()
{
	
	int i=1;
		int p;
		printf("PLEASE ENTER YOUR NAME : ");
		scanf(" %[^\n]s",&a.name);
		printf("PLEASE ENTER YOUR AGE : ");
		scanf("%d",&a.age);
		printf("PLEASE ENTER BANKING USERNAME : ");
		scanf("%s",&a.username);
	while(i)
	{		
		printf("PLEASE SET-UP YOUR 4 NEW BANKING PIN : ");
		scanf("%d",&a.password);
		if(a.password>9999||a.password<1000)
		{
			printf("PLEASE ENTER VALID INPUT\n");
			continue;
		}
		printf("PLEASE RE-ENTER YOUR PIN : ");
		scanf("%d",&p);
		if(a.password==p)
		{
			i=0;
		}
		else
		{
			printf("PLEASE ENTER VALID INPUT\n");
		}
	}
	i=1;
	while(i)
	{		
		printf("PLEASE SET-UP YOUR 4 NEW TRANSACTION PIN : ");
		scanf("%d",&a.tpin);
		if(a.tpin>9999||a.tpin<1000)
		{
			printf("PLEASE ENTER VALID INPUT\n");
			continue;
		}
		printf("PLEASE RE-ENTER YOUR TRANSACTION PIN : ");
		scanf("%d",&p);
		if(a.tpin==p)
		{
			i=0;
		}
		else
		{
			printf("PLEASE ENTER VALID INPUT\n");
		}
	}
	system("cls");
	printf("-----------------------------------------\n");
	printf("YOU HAVE CREATED YOUR ACCOUNT SUCCESSFULLY\n");
	printf("-----------------------------------------\n");
	printf("YOUR ACCOUNT NUMBER = %d\n",a.ano);
	printf("-----------------------------------------\n");
	printf("YOUR NAME : %s\nYOUR AGE : %d\nYOUR USERNAME : %s\nYOUR PIN : %d",a.name,a.age,a.username,a.password);
	printf("\nPLEASE ENTER A NUMBER TO CONTINUE");
	scanf("%d",&i);
	system("cls");
	init();
}
int init()
{

	int c,i=1;
	printf("                            ------------------------------------------------------------\n");
	printf("                                            WELCOME TO E BANKING PORTAL\n");
	printf("                            ------------------------------------------------------------\n");
	printf("1.LOGIN\n");
	printf("2.CREATE NEW ACCOUNT\n");
	while(i)
	{
		printf("PLEASE SELECT A CHOICE ABOVE : ");
		scanf("%d",&c);
		if(c<=0||c>2)
		{
			printf("PLEASE ENTER A VALID VALUE\n");
		}
		else
		{
			i=0;
		}
	}
	if(c==2)
	{
		account();
	}
	if(c==1)
	{
		system("cls");
		login();
	}
	
}
int login()
{
	int i=1;
	char un[20];
	int p;
	printf("                                      ------------------------------------------------------------\n");
	printf("                                                    WELCOME TO LOGIN PORTAL\n");
	printf("                                      ------------------------------------------------------------\n");
	while(i)
	{
		printf("PLEASE ENTER YOUR USER NAME : ");
		scanf("%s",&un);
		printf("PLEASE ENTER YOUR PASSWORD : ");	
		scanf("%d",&p);
		if((strcmp(un,a.username)!=0||p!=a.password)&&(strcmp(un,b.username)!=0||p!=b.password))
		{
			printf("PLEASE ENTER VALID DETAILS:");	
		}
		else
		{
			i=0;
			system("cls");
			if(strcmp(un,a.username)==0)
			{
				welc();
			}
			if(strcmp(un,b.username)==0)
			{
				wela();
			}
		}
	}
}
int wela()
{
	printf("-----------------------------------------------------------------------------------	\n");
	printf("WELCOME \"%s\"\n",b.name);
	printf("USERNAME : %s\n",b.username);
	printf("A/C NO : %d\n",b.ano);
	printf("-----------------------------------------------------------------------------------	\n");

	intf();
}
int welc()
{
	printf("-----------------------------------------------------------------------------------	\n");
	printf("WELCOME \"%s\"\n",a.name);
	printf("USERNAME : %s\n",a.username);
	printf("A/C NO : %d\n",a.ano);
	printf("-----------------------------------------------------------------------------------	\n");
	intf();
}
int intf()
{ 	
	int i=1;
	int c;
	printf("\n1. TO INTIATE MONEY TRANSACTION");
	printf("\n2. CHECK BALANCE");
	while(i)
	{
		printf("\nPLEASE SELECT A CHOICE ABOVE : ");
		scanf("%d",&c);
		if(c<=0||c>2)
		{
			printf("PLEASE ENTER A VALID VALUE\n");
		}
		else
		{
			i=0;
		}
	}
	i=1;

	if(c==2)
	{
		printf("-----------------------------------------------------------------------------------	\n");
		printf("\nYOUR BALANCE IS \t\t\t : %d  INR\n ",a.balance);
		printf("-----------------------------------------------------------------------------------	\n");
		printf("THANK YOU FOR USING OUR BANKING SYSTEM. PLEASE VISIT AGAIN. HAVE A NICE DAY!\n");
		printf("-----------------------------------------------------------------------------------	\n");
		printf("PLEASE RE-LOGIN TO COMMIT ANOTHER SERVICE\n");
		printf("-----------------------------------------------------------------------------------	\n");
	}
	if(c==1)
	{
		printf("-----------------------------------------------------------------------------------	\n");
		printf("\n1. TRANSFER MONEY TO OTHERS");
		printf("\n2. PAY BILLS");	
		while(i)
		{
			printf("\nPLEASE SELECT A CHOICE ABOVE : ");
			scanf("%d",&c);
			if(c<=0||c>2)
			{
				printf("PLEASE ENTER A VALID VALUE\n");
			}
			else
			{
				i=0;
			}
		}
		if(c==1)
		{
			tran();
		}
		if(c==2)
		{
			bill();
		}
	}
}
int tran()
{	
	printf("-----------------------------------------------------------------------------------	\n");
	int amt;
	int acn,c,t;
	int i=1;
	while(i)
	{		
		printf("PLEASE ENTER 7 DIGIT A/C NO : ");
		scanf("%d",&acn);
		if(acn>9999999||acn<1000000||acn==1000000||acn==1234567)
		{
			printf("PLEASE ENTER VALID INPUT\n");
			continue;
		}
		printf("PLEASE RE-ENTER 7 DIGIT A/C NO : ");
		scanf("%d",&c);
		if(acn==c)
		{
			i=0;
		}
		else
		{
			printf("PLEASE ENTER VALID INPUT\n");
		}
	}
	i=1;
	int z;
	while(i)
	{		
	printf("PLEASE ENTER THE AMOUNT TO TRANSFER : ");
	scanf("%d",&amt);
		if(amt>a.balance||amt<=0)
		{
			printf("PLEASE ENTER VALID INPUT\n");
			continue;
		}
		else
		{
			i=0;
		}
	}
	printf("PLEASE ENTER THE TRANSACTION PIN TO TRANSFER : ");
	scanf("%d",&t);		
	if(t!=a.tpin&&t!=b.tpin)
	{
		printf("TRANSACTION FAILED DUE TO INVALID TRANSACTION PIN");
		return 10;
	}
	printf("PLEASE ENTER 1 TO PROCEED : ");
	scanf("%d",&z);
	if(z==1)
	{
		system("cls");
		printf("-----------------------------------------------------------------------------------	\n");
		printf("PLEASE WAIT TILL THE TRANSACTION IS BEING PROCESSED............\n");
		printf("TRANSACTION COMPLETED SUCCESSFULLY...!\n");
		printf("-----------------------------------------------------------------------------------	\n");
		printf("DETAILS OF THE TRANSACTION GIVEN BELOW");
		printf("\nTO A/C NO 	: %d",acn);
		printf("\nAMOUNT SENT 	: %d\n",amt);
		a.balance=a.balance-amt;
		printf("-----------------------------------------------------------------------------------	\n");
		printf("\nYOUR UPDATED BALANCE IS \t\t\t : %d  INR\n ",a.balance);
		printf("-----------------------------------------------------------------------------------	\n");
		printf("THANK YOU FOR USING OUR BANKING SYSTEM. PLEASE VISIT AGAIN. HAVE A NICE DAY!\n");
		printf("-----------------------------------------------------------------------------------	\n");
		printf("PLEASE RE-LOGIN TO COMMIT ANOTHER SERVICE\n");
		printf("-----------------------------------------------------------------------------------	\n");
		printf("-----------------------------------------------------------------------------------	\n");
	}
}
int bill()
{
	int i=1;
	int c,t,z;
	printf("-----------------------------------------------------------------------------------	\n");
	printf("1.DTH\n2.MOBILE\n3.ELECTRICITY");
	while(i)
	{
		printf("\nPLEASE SELECT A CHOICE ABOVE : ");
		scanf("%d",&c);
		if(c<=0||c>3)
		{
			printf("PLEASE ENTER A VALID VALUE\n");
		}
		else
		{
			i=0;
		}
	}
	int amt,acn;
	if(c==1)
	{
		i=1;
		while(i)
		{		
			printf("PLEASE ENTER DTH A/C NO : ");
			scanf("%d",&acn);
			if(acn>9999999||acn<1000000)
			{
				printf("PLEASE ENTER VALID INPUT\n");
				continue;
			}
			printf("PLEASE RE-ENTER DTH A/C NO : ");
			scanf("%d",&c);
			if(acn==c)
			{
				i=0;
			}
			else
			{
				printf("PLEASE ENTER VALID INPUT\n");
			}
		}
		i=1;
		while(i)
		{		
		printf("PLEASE ENTER THE AMOUNT TO TRANSFER : ");
		scanf("%d",&amt);
			if(amt>a.balance||amt<=0)
			{
				printf("PLEASE ENTER VALID INPUT\n");
				continue;
			}
			else
			{
				i=0;
			}
		}
		printf("PLEASE ENTER THE TRANSACTION PIN TO TRANSFER : ");
		scanf("%d",&t);		
		if(t!=a.tpin&&t!=b.tpin)
		{
			printf("TRANSACTION FAILED DUE TO INVALID TRANSACTION PIN");
			return 10;
		}
		printf("PLEASE ENTER 1 TO PROCEED : ");
		scanf("%d",&z);
		if(z==1)
		{
			system("cls");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("PLEASE WAIT TILL THE TRANSACTION IS BEING PROCESSED............\n");
			printf("TRANSACTION COMPLETED SUCCESSFULLY...!\n");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("DETAILS OF THE TRANSACTION GIVEN BELOW");
			printf("\nTO DTH A/C NO	: %d",acn);
			printf("\nAMOUNT PAID 	: %d\n",amt);
			a.balance=a.balance-amt;
			printf("-----------------------------------------------------------------------------------	\n");
			printf("\nYOUR UPDATED BALANCE IS \t\t\t : %d  INR\n ",a.balance);
			printf("-----------------------------------------------------------------------------------	\n");
			printf("THANK YOU FOR USING OUR BANKING SYSTEM. PLEASE VISIT AGAIN. HAVE A NICE DAY!\n");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("PLEASE RE-LOGIN TO COMMIT ANOTHER SERVICE\n");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("-----------------------------------------------------------------------------------	\n");	
		}
	}
	if(c==2)
	{
		i=1;
		while(i)
		{		
			printf("PLEASE ENTER YOUR 10 DIGIT MOBILE NUMBER : ");
			scanf("%d",&acn);
			if(acn>9999999999||acn<1000000000)
			{
				printf("PLEASE ENTER VALID INPUT\n");
				continue;
			}
			printf("PLEASE RE-ENTER 10 DIGIT MOBILE NUMBER : ");
			scanf("%d",&c);
			if(acn==c)
			{
				i=0;
			}
			else
			{
				printf("PLEASE ENTER VALID INPUT\n");
			}
		}
		i=1;
		while(i)
		{		
		printf("PLEASE ENTER THE AMOUNT TO RECHARGE : ");
		scanf("%d",&amt);
			if(amt>a.balance||amt<=0)
			{
				printf("PLEASE ENTER VALID INPUT\n");
				continue;
			}
			else
			{
				i=0;
			}
		}
		printf("PLEASE ENTER THE TRANSACTION PIN TO TRANSFER : ");
		scanf("%d",&t);		
		if(t!=a.tpin&&t!=b.tpin)
		{
			printf("TRANSACTION FAILED DUE TO INVALID TRANSACTION PIN");
			return 10;
		}
		printf("PLEASE ENTER 1 TO PROCEED : ");
		scanf("%d",&z);
		if(z==1)
		{
			system("cls");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("PLEASE WAIT TILL THE TRANSACTION IS BEING PROCESSED............\n");
			printf("TRANSACTION COMPLETED SUCCESSFULLY...!\n");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("DETAILS OF THE TRANSACTION GIVEN BELOW");
			printf("\n10 DIGIT MOBILE NUMBER		: %d",acn);
			printf("\nAMOUNT RECHARGED 					: %d\n",amt);
			a.balance=a.balance-amt;
			printf("-----------------------------------------------------------------------------------	\n");
			printf("\nYOUR UPDATED BALANCE IS \t\t\t : %d  INR\n ",a.balance);
			printf("-----------------------------------------------------------------------------------	\n");
			printf("THANK YOU FOR USING OUR BANKING SYSTEM. PLEASE VISIT AGAIN. HAVE A NICE DAY!\n");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("PLEASE RE-LOGIN TO COMMIT ANOTHER SERVICE\n");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("-----------------------------------------------------------------------------------	\n");	
		}
	}
	if(c==3)
	{
		i=1;
		while(i)
		{		
			printf("PLEASE ENTER YOUR 10 DIGIT CONSUMER NUMBER : ");
			scanf("%d",&acn);
			if(acn>9999999999||acn<1000000000)			
			{
				printf("PLEASE ENTER VALID INPUT\n");
				continue;
			}
			printf("PLEASE RE-ENTER 10 DIGIT CONSUMER NUMBER : ");
			scanf("%d",&c);
			if(acn==c)
			{
				i=0;
			}
			else
			{
				printf("PLEASE ENTER VALID INPUT\n");
			}
		}
		i=1;
		while(i)
		{		
		printf("PLEASE ENTER THE AMOUNT TO PAY : ");
		scanf("%d",&amt);
			if(amt>a.balance||amt<=0)
			{
				printf("PLEASE ENTER VALID INPUT\n");
				continue;
			}
			else
			{
				i=0;
			}
		}
		printf("PLEASE ENTER THE TRANSACTION PIN TO TRANSFER : ");
		scanf("%d",&t);		
		if(t!=a.tpin&&t!=b.tpin)
		{
			printf("TRANSACTION FAILED DUE TO INVALID TRANSACTION PIN");
			return 10;
		}
		printf("PLEASE ENTER 1 TO PROCEED : ");
		scanf("%d",&z);
		if(z==1)
		{
			system("cls");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("PLEASE WAIT TILL THE TRANSACTION IS BEING PROCESSED............\n");
			printf("TRANSACTION COMPLETED SUCCESSFULLY...!\n");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("DETAILS OF THE TRANSACTION GIVEN BELOW");
			printf("\n12 DIGIT CONSUMER NUMBER		: %d",acn);
			printf("\nAMOUNT PAID 				: %d\n",amt);
			a.balance=a.balance-amt;
			printf("-----------------------------------------------------------------------------------	\n");
			printf("\nYOUR UPDATED BALANCE IS \t\t\t : %d  INR\n ",a.balance);
			printf("-----------------------------------------------------------------------------------	\n");
			printf("THANK YOU FOR USING OUR BANKING SYSTEM. PLEASE VISIT AGAIN. HAVE A NICE DAY!\n");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("PLEASE RE-LOGIN TO COMMIT ANOTHER SERVICE\n");
			printf("-----------------------------------------------------------------------------------	\n");
			printf("-----------------------------------------------------------------------------------	\n");	
		}
	}
}
int main()
{
	a.ano=1000000;
	b.ano=1234567;
	a.balance=10000;
	b.balance=10000;
	b.tpin=2289;
	printf("                     --------------------------------------------------------------------\n");
	printf("                                WELCOME TO SECE E-BANKING SYSTEM PROJECT\n");	
	printf("                     --------------------------------------------------------------------\n");
	b.name[0]='D';
	b.name[1]='E';
	b.name[2]='F';
	b.name[3]='A';
	b.name[4]='U';
	b.name[5]='L';
	b.name[6]='T';
	b.age=100;
	b.password=9876;
	b.username[0]='a';
	b.username[1]='d';
	b.username[2]='m';
	b.username[3]='i';
	b.username[4]='n';
	init();
}