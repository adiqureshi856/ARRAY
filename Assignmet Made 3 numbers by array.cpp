#include <iostream.h>
#include <conio.h>
main()
{

int a,b,c;
int x[3];
for(int i=0;i<3;i++)

{cout<<"enter the number";

cin>>x[i];}

if (x[0]<x[1])
  {if (x[1]<x[2])
 a=x[0];

 b=x[1];

 c=x[2];

 cout<<a<<b<<c;

 }
if (x[1]<x[0])
 {if (x[0]<x[2])
  a=x[1];

  b=x[0];

  c=x[2];

  cout<<a<<b<<c;

  }
else
if (x[2]<x[0])

 { if(x[0]<x[1])

 a=x[2]; b=x[0]; c=x[1];

 cout<<a<<b<<c;}


getch();
}