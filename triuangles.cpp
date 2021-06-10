#include <iostream>
using namespace std;
int n;
int lower_triangle();
int upper_triangle_mirror();
int upper_triangle();
int pyramid();
int lower_triangle_mirror();
int pyramid_inverse();
int main()
{
    int choice;
    cout<<"enter the interger value"<<endl;
    cin>>n;
    cout<<"Make your choice"    <<endl;
    cout<<"upper_triangle       "<<1<<endl;
    cout<<"lower_triangle       "<<2<<endl;
    cout<<"upper_triangle_mirror"<<3<<endl;
    cout<<"lower_triangle_mirror "<<4<<endl;
    cout<<"pyramid               "<<5<<endl;
    cout<<"pyramid_inverse       "<<6<<endl;
    cout<<"For all               "<<7<<endl;
    cin>>choice;
    switch(choice){
    case 1: upper_triangle();break;
    case 2: lower_triangle();break;
    case 3: upper_triangle_mirror();break;
    case 4: lower_triangle_mirror();break;
    case 5: pyramid();break;
    case 6: pyramid_inverse();break;
    case 7:


     upper_triangle();
     lower_triangle();
     upper_triangle_mirror();
     lower_triangle_mirror();
     pyramid();
     pyramid_inverse();
    break;


    }




}
int lower_triangle_mirror(){
    int j=n;
      cout<<endl;
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        if(i<=j)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
 }

    return 0;
}
int upper_triangle(){
    int j=0;

    for(int i=0;i<n;i++)
 {
     while(j<i)
     {
         cout<<"* ";
         j++;
     }
     cout<<endl;
     j=0;

 }

    return 0;
}
int lower_triangle(){
    int j=n;
for(int i=0;i<n;i++)
 {
     while(j>i)
     {
         cout<<"* ";
         j--;
     }
     cout<<endl;
     j=n;

 }

    return 0;
}
int pyramid(){
    int j=n;
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        if(i+j>=n-1)
        {
            cout<<" *";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
 }

    return 0;
}
int upper_triangle_mirror(){

    int j=n;
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        if(i+j>=n-1)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
 }

    return 0;
}
int pyramid_inverse(){
    int j=n;
      cout<<endl;
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        if(i<=j)
        {
            cout<<" *";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
 }

    return 0;
}

