//////////////Usman Khan Ghauri//////////
//////////////10-arid-129/////////////////

#include<iostream.h>
#include<conio.h>
int main()
{
	int i,j,temp,a[7];
	clrscr();
	cout<<"Enter 7 integer numbers: \n";
	for(i=0;i<7;i++)
		cin>>a[i];
	for (i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	cout<<"\n\nThe 7 numbers sorted in ascending order are: \n";
	for(i=0;i<7;i++)
		cout<<a[i];
	getch();
}
