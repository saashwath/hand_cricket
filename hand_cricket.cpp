#include<iostream>
#include<stdlib.h>
#include<string>
#include<conio.h>
#include<ctype.h>
using namespace std;
int input()
{	int a;
	cout<<"\nEnter a number (0-6) : ";
	cin>>a;
	if(a>6)
	{
		cout<<"Enter a number only between 0 and 6 !";
		input();
	}
	else
	 return a;
}
int sys()
{
	int a;
	a=rand()%7;
	cout<<"\nsystem number : "<<a<<"\n";
	return a;
}
int bat()
{
	int sum=0;
	cout<<"\nYou are now bating\n";
	while(1)
	{
	   	int k=input(),j=sys();
	   	if(k==j)
		   break;
		if(k==0)
			sum+=j;
		else 
			sum+=k;
	}
	cout<<"\nYour score is : "<<sum;
	return sum;
}
int bowl()
{	
	int sum=0;
	cout<<"\nYou are now bowling\n";
	while(1)
   {
   		int k=input(),j=sys();
   		if(k==j)
		   break;
		if(j==0)
			sum+=k;
		else
			sum+=j;
   }
	cout<<"\n\nsystem score is : "<<sum<<"\n";
	return sum;
}
int bat(int i)
{ 
	int sum=0;
	cout<<"\nYou are now bating\n";
	while(1)
   {
   		if(sum>i)break;
   		int k=input(),j=sys();
  		if(k==j)break;if(k==0)sum+=j;else sum+=k;
   }
   cout<<"\nYour score is : "<<sum;
   return sum;
}
int bowl(int i)
{	
	int sum=0;
	cout<<"\nYou are now bowling\n";
	while(1)
	{
		if(sum>i)
			break;
		int k=input(),j=sys();
		if(k==j)
			break;
		if(j==0)
			sum+=k;
		else
			sum+=j;
	}
   cout<<"\n\nsystem score is : "<<sum<<"\n";
   return sum;
}
int main()
{
	int c,x,y,o,p;
	string ch;
	cout<<"\t\t\t___________  _______________\n\n\t\t\t  H A N D     C R I C K E T\n\n\t\t\t___________  _______________\n";
	in:cout<<"\n odd  OR  even ?  ";
	cin>>ch;
	if((ch!="odd")&&(ch!="even"))
	{
		cout<<"Its an exception.Enter your choice as\n";
		goto in;
	}
	if(((ch=="odd")&&((input()+sys())%2==1))||((ch=="even")&&((input()+sys())%2==0)))
	{
		in2:cout<<"\nChoose to  1.BAT   2.BOWL : ";cin>>c;
	}
	else c=2;
	switch(c)
	{
		case 1:o=bat(),p=bowl(o);
			   if(o>p)
					cout<<"\n\n\t\t__________\n\n\t\tYOU WON !\n\n\t\t__________\n";
			   else if(o<p)
			   		cout<<"\n\n\t\t__________\n\n\t\tYOU LOSE !\n\n\t\t__________\n";
			   else
			   		cout<<"\n\n\t\t__________\n\n\t\tDRAW !\n\n\t\t__________\n";
			   break;
		case 2:x=bowl(),y=bat(x);
			   if(y>x)
			   		cout<<"\n\n\t\t__________\n\n\t\tYOU WON !\n\t\t__________\n";
			   else if(y<x)
			   		cout<<"\n\n\t\t__________\n\n\t\tYOU LOSE !\n\t\t__________\n";
			   else 
			   		cout<<"\n\n\t\t__________\n\n\t\tDRAW !\n\t\t__________\n";
			   break;
		default:cout<<"\nEnter only 1 or 2\n";
				goto in2;
			
	}
	cout<<"\n\n PRESS ENTER KEY TO EXIT\t";
	getch();
}
