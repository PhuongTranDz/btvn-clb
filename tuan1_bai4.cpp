#include<iostream>
#include<limits>
using namespace std;
int main()
{
	int n;
 
    do 
	{
     	cout<<"\t\t==>NHAP SO DONG :";
	    cin>>n;	
            while(!(cin))
	     {
	        cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(),'\n');
	        cout<<"NHAP LAI SO DONG:";
	        cin>>n;
         }
	}
	while (n<=0);
	int z=n; 
 
	cout<<"\t\t==>TAM GIAC BAN MUON!!";
	for(int b=1;b<=z;b++)
	{   
	    cout<<"\n\t";
		for(int c=1;c<=n;c++)
		{
			cout<<"*";
 
		}
		n--;		
	}
	cout<<endl; 
return 0;
}
