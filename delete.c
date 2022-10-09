#include<stdio.h>

int main()
{

int a[50];
int pos,n,i;

printf("Enter size for array\n");
scanf("%d",&n);


printf("Enter array\n");
for (i=0;i<n;i++)

{
    scanf("%d",&a[i]);

}

printf("Array is:");

for (i=0;i<n;i++)
{
    printf(" %d",a[i]);
}

printf("\nEnter position for deletion:");
scanf("%d",&pos);


for(i=pos-1;i<n;i++)
{

a[i]=a[i+1];

}

printf("Array after Deletion:");
for (i=0;i<n-1;i++)

{
    printf(" %d",a[i]);
}



return 0;
}
