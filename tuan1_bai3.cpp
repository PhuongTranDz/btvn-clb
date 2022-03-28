#include<iostream>
#include<limits>
using namespace std;
int main()
{
	int n;
	int p=1;
	cout<<"\t\t+==>NHAP N:";
	cin>>n;
	while(!(cin))
	    {
	        cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(),'\n');
	        cout<<"\t==>NHAP LAI SO:";
	        cin>>n;
        }
    for(int i=1;i<=n;i++)
    {
    	p *= 2*i;
	}
    cout<<"\t\t+==>TONG P CAN TINH = "<<p<<endl;
}
