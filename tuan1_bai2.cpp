#include<iostream>
#include<limits>
using namespace std;
int main()
{
	int n;
	int T;
	cout<<"\t\t\t\t+===================================+"<<endl;
	cout<<"\t\t\t\t<=+=>||TINH TIEN DIEN TIEU THU||<=+=>"<<endl;
	cout<<"\t\t\t\t+===================================+"<<endl;
	do
	{
	cout<<"\n\t==>NHAP VAO SO KW DIEN TIEU THU CUA BAN:";
	cin>>n;
	    while(!(cin))
	    {
	        cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(),'\n');
	        cout<<"\t==>NHAP LAI KW DIEN TIEU THU:";
	        cin>>n;
        }
    }
    while(n<0);
	if(n > 0 && n <= 100)
	{
		T=n*2000;
	}
	else if ( n <= 200)
	{
		T=n*2500;
	}
		else if ( n <= 300)
	{
		T=n*3000;
	}
		else 
	{
		T=n*5000;
	}
	cout<<"\t==>TIEN DIEN CAN DONG LA: " << T << "DONG " <<endl;

return 0;	
}

