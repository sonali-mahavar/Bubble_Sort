#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int a[30],n,i,j,temp;
cout<<"enter the size of array:";
cin>>n;
cout<<"enter the elements in an array:";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
 for(j=0;j<n-1;j++)
 {
  if(a[j]>a[j+1])
  {
  temp=a[j];
  a[j]=a[j+1];
  a[j+1]=temp;
  }
 }
}
cout<<"sorted array after bubble sort is:";
for(i=0;i<n;i++)
cout<<" "<<a[i];
getch();
}