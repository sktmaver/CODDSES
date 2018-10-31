#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include <graphics.h>
int main()
{
clrscr();
int first,second,third,fourth;
int first2,second2,third2,fourth2;
    int left = 150, top = 150;
    int right = 450, bottom = 450;
    int xmin,xmax,ymin,ymax;
    cout<<"Enter the coordinates of the line:";
    cout<<"Enter the values of xmin and ymin:";
    cin>>xmin>>ymin;
    cout<<"Enter the values of xmax and ymax:";
    cin>>xmax>>xmin;
    if(xmin<left)
    {
    first=0;
    }
    else
{
first=1;
}
    if(xmin>right)
    {
    second=0;
}
else
{
second=1;
}
    if(ymin<bottom)
    {
    third=0;
}
else
{
third=1;
}
    if(ymin>top)
    {
    fourth=0;
}
else
{
fourth=1;
}
 if(xmin<left)
    {
    first2=0;
    }
    else
{
first2=1;
}
    if(xmin>right)
    {
    second2=0;
}
else
{
second2=1;
}
    if(ymin<bottom)
    {
    third2=0;
}
else
{
third2=1;
}
    if(ymin>top)
    {
    fourth2=0;
}
else
{
fourth2=1;
}
cout<<first<<second<<third<<fourth;
cout<<"\n";
cout<<first2<<second2<<third2<<fourth2
;
    getch();
    return 0;
}