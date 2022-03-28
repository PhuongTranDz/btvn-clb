#include<iostream>
using namespace std;
	class SoPhuc
	{ 
        private:
	        int PhanThuc, PhanAo;
	    public:
	 	    void nhap()
	 	    {              
               	    cout<<"\t\t==>NHAP PHAN THUC :";
               	    cin>>PhanThuc;
               	    cout<<"\t\t==>NHAP PHAN THUC :";
               	    cin>>PhanAo;               	    
			}

			int getPhanThuc()
			{
				return PhanThuc;
			}
			int getPhanAo()
			{
				return PhanAo;
			}		
	};
int main()
{
  SoPhuc a[2];
  for(int i=0; i<2; i++)
  {
  	a[i].nhap();
  }
    cout<<"\t\t==>TONG CUA HAI SO THUC VUA NHAP LA: "
  <<a[0].getPhanThuc() + a[1].getPhanThuc()
  <<" + "<<a[0].getPhanAo() + a[1].getPhanAo() 
  <<"j"<<endl;
    cout<<"\t\t==>HIEU CUA HAI SO THUC VUA NHAP LA: "
  <<a[0].getPhanThuc() - a[1].getPhanThuc()
  <<" + "<<a[0].getPhanAo() - a[1].getPhanAo() 
  <<"j"<<endl;
    cout<<"\t\t==>TICH CUA HAI SO THUC VUA NHAP LA: "
  <<a[0].getPhanThuc() * a[1].getPhanThuc()
  <<" + "<<a[0].getPhanAo() * a[1].getPhanAo() 
  <<"j"<<endl;
    cout<<"\t\t==>THUONG CUA HAI SO THUC VUA NHAP LA: "
  <<a[0].getPhanThuc() / a[1].getPhanThuc()
  <<" + "<<a[0].getPhanAo() / a[1].getPhanAo() 
  <<"j"<<endl;	
}
