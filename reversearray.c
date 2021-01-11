 #include<stdio.h>
 #include<math.h>
 int main()
 {
 int n,a[1000],i,j,temp;
   printf("Enter size of array: ");
   scanf("%d",&n);
   
   printf("Enter array elements: ");
   for(i=0;i<n;i++)
   {
       scanf("%d", &a[i]);
   }
   
   printf("Array before reversing : ");
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   
   i=n-1;
   j=0;
   
   while(j<=i && i>=0)
   {
      temp=a[j];
      a[j]=a[i];
      a[i]=temp;
       j++;
       i--;
   }
   
   printf("\n Array after reversing: ");
   for(i=0;i<n;i++)
   {
       printf("%d ", a[i]);
   }

 }