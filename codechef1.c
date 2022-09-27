#include <stdio.h>

// Question: Alice has scored XX marks in her test and Bob has scored YY marks in the same test. 
//-Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.


int main()
{

int X,Y;
scanf("%d%d",&X,&Y);
int Z;
Z=2*Y;

if(X>=Z)
{  
     printf("yes"); 
     
}

else
{
     printf("no");
}

	return 0;
}
