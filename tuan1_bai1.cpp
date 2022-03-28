#include<iostream>
#include<limits>
using namespace std;
int main()
{
	int n;
	cout<<"\t\t\t\t+===============================+"<<endl;
	cout<<"\t\t\t\t<=+=>||CAC NGAY TRONG TUAN||<=+=>"<<endl;
	cout<<"\t\t\t\t+===============================+"<<endl;
	do
	{
	cout<<"\n\t==>NHAP VAO SO CUA BAN:";
	cin>>n;
	    while(!(cin))
	    {
	        cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(),'\n');
	        cout<<"\t==>NHAP LAI SO:";
	        cin>>n;
        }
    }
    while(n<1 || n>7);
	if(n==2)
	{
		cout<<"\t==>MONDAY";
	}
	    else if (n==3)
	{
		cout<<"\t==>TUESDAY";
	}
		else if (n==4)
	{
		cout<<"\t==>WEDNESDAY";
	}
		else if (n==5)
	{
		cout<<"\t==>THURSDAY";
	}
		else if (n==6)
	{
		cout<<"\t==>FRIDAY";
	}
	    else if(n==1)
	{
		cout<<"\t==>SUNDAY";
	}
		else 
	{
		cout<<"\t==>SATURDAY";
	}	

return 0;	
}

