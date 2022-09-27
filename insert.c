#include <stdio.h>
int main()
{
int n;
printf("Enter the Maximum no.");
scanf("%d",&n);
int arr[n];
int i;
printf("Enter the Array");
for(i = 0; i < n; i++)

{
    
scanf("%d",&arr[i]);
}
int pos;
printf("Enter the position on which you want to insert element");
scanf("%d",&pos);
int ele;
printf("Enter the element to print on position ");
scanf("%d",&ele);
if(pos > n)
printf("Invalid Input");
else
{
for (i= n-1;i>=pos-1; i--)
arr[i+1] = arr[i];

arr[pos-1] = ele;

printf("Array after insertion is:\n");

for (i=0; i<=n;i++)
printf("%d\n", arr[i]);
}

return 0;
}