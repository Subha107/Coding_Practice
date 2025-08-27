#include<stdio.h>
int main(){
int n,i;
printf("Enter the size of the array:\n");
scanf("%d",&n);
int a[n];
printf("Enter the elements of the array:\n");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("Original Array:\n");
for(i=0;i<n;i++)
    printf("%d",a[i]);
printf("\n");
int element;
printf("Enter the element to be inserted:\n");
scanf("%d",&element);
a[n]=element;
printf("Array after insertion:\n");
for(i=0;i<n+1;i++)
    printf("%d",a[i]);
return 0;
}