#include<stdio.h>
#include<stdlib.h>
int sort(int *,int ,int,int);
void merge(int *,int,int,int,int,int);
// nlog(n)
int main(void)
{
int *a;
int n;
int i;
int j;
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int l=0;// start
int r=n;// end
sort(a,l,r-1,n);
printf("Sorted Array :-\n");
for(j=0;j<n;j++)
{
printf("%d\n",a[j]);
}
}

int sort(int *a,int l,int r,int n )
{
if(l<r)
{
int m=(l+r)/2;// calculating middle
sort(a,l,m,n);//first half
sort(a,m+1,r,n);//right half
merge(a,l,m,m+1,r,n);// merging the two halves
}
}
//1st array start=0 end=middle
//2nd array start=middle end=0
void merge(int *a,int i1,int j1,int i2,int j2,int n)//i1-start of 1st array,j1-end of 1st array
{                                                   //i2-start of 1st array,j2-end of 1st array
    int *temp;    //array used for merging
    int i,j,k;
    i=i1;    //beginning of the first list
    j=i2;    //beginning of the second list
    k=0;
    temp=(int *)malloc(n*sizeof(int));    // temporary array 
    while(i<=j1 && j<=j2)    //while elements in both lists
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    
    while(i<=j1)    //copy remaining elements of the first list
        temp[k++]=a[i++];
        
    while(j<=j2)    //copy remaining elements of the second list
        temp[k++]=a[j++];
        
    //Transfer elements from temp[] back to a[]
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}

    



















