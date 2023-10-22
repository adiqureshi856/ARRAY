#include<iostream.h>
#include<conio.h>
int a1[2][2];int a2[2][2];int mul[2][2];
void main()
{
int i,j,k;
clrscr();
cout<<"Enter the values of the matrix a:";
 for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
    { cout<<"\t\t \xdb ";
     cin>>a1[i][j];

    }
  }
cout<<"\n Enter the values of the matrix b:";
  for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
     {cout<<"\t\t \xdb ";
      cin>>a2[i][j];
     }
   }
cout<<"\nThe multiplied value is:";
  for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
     {
      mul[i][j]=0;
       for(k=0;k<2;k++)
        {
         mul[i][j]=mul[i][j]+(a1[i][k]*a2[k][j]);
        }
     }
   }
for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
    {
     cout<<mul[i][j]<<" ";
    }
   cout<<"\n\t\t\t";

   }
getch();
}