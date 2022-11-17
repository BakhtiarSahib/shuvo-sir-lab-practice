#include<stdio.h>
int main()
{
    int i,item,mid,end,beg,size,n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    size =n;
    int arr[size];

    printf("Enter Array elements : ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
  printf("Array elements : ");
 for(i=0; i<size; i++)
    {
       printf(" %d",arr[i]);
    }

     printf("\nEnter Item : ");
     scanf("%d",&item);


beg =0;
end = size-1;
mid =(beg + end)/2;

while(beg <= end){
 if (item == arr[mid]){
        printf("\nItem is found at position %d",mid+1 );
    break ;
 }
else if (item > arr[mid]){
    beg = mid+1;
}
else
    {
    end = mid-1;
}


mid =(beg + end)/2;



}

if (beg > end){
    printf("\nItem  %d is not found in this list ",item );
}



}
