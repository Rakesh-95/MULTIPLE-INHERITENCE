#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class A
{
      public:
		int roll;
		char name[20],course[20];
		void init()
		{
			cout<<"Roll No. : ";
			cin>>roll;
			cout<<"Name : ";
			gets(name);
			cout<<"Course : ";
			gets(course);
		}
};
class B
{
     public:
		char add[20],city[30];
		void show()
		{
			cout<<"Address : ";
			gets(add);
			cout<<"City : ";
			gets(city);
		}
};
class C:public A,public B
{
     public:
		long int pin;
		char phone[10];
		void data()
		{
			init();
			show();
			cout<<"Number : ";
			gets(phone);
			cout<<"Pincode : ";
			cin>>pin;
		}
		void disp()
		{
			cout<<roll<<" "<<name<<" "<<course<<" "<<add<<" "<<city<<" "<<phone<<" "<<pin<<endl;
		}
};
void main()
{
       int n,i;
       clrscr();
       cout<<"Enter Number of data :";
       cin>>n;
       C obj[5];
       for(i=1;i<=n;i++)
       {
	      obj[i].data();
       }
       cout<<"\t........DATA........\n";
       for(i=1;i<=n;i++)
       {
	      obj[i].disp();
       }
       getch();
}