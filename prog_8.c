#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int c=0,s=0;

void printArray(int a[], int n)
{
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}

void bubbleSort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
        {
            c++;
            if(a[j]>a[j+1]){
                int t=a[j]; a[j]=a[j+1]; a[j+1]=t; s++;
            }
        }
}

void selectionSort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++){
            c++;
            if(a[j]<a[min]) min=j;
        }
        if(min!=i)
        { 
            int t=a[i]; a[i]=a[min]; a[min]=t; s++; 
        }
    }
}

void insertionSort(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key=a[i], j=i-1;
        while(j>=0 && a[j]>key)
        { 
            c++; a[j+1]=a[j]; s++; j--; 
        }
        a[j+1]=key;
    }
}

void merge(int a[], int l, int m, int r)
{
    int n1=m-l+1, n2=r-m, L[n1], R[n2];
    for(int i=0;i<n1;i++) L[i]=a[l+i];
    for(int i=0;i<n2;i++) R[i]=a[m+1+i];
    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {
        c++;
        if(L[i]<=R[j]) a[k++]=L[i++];
        else a[k++]=R[j++];
        s++;
    }
    while(i<n1)
    { 
        a[k++]=L[i++]; s++; 
    }

    while(j<n2)
    { 
        a[k++]=R[j++]; s++; 
    }
}

void mergeSort(int a[], int l, int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    srand(time(0));

    for(int i=0;i<N;i++) a[i]=rand()%1000+1;
    printArray(a,N);
    int ch;
    scanf("%d",&ch);
    c=0;s=0;

    if(ch==1) bubbleSort(a,N);
    else if(ch==2) selectionSort(a,N);
    else if(ch==3) insertionSort(a,N);
    else if(ch==4) mergeSort(a,0,N-1);

    printArray(a,N);
    printf("%d %d\n",c,s);
    return 0;
}