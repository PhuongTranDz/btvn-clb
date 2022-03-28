#include<iostream>
using namespace std;
class DATHUC3
{
	private:
		int a,b,c,d;
	public:
		void nhap(DATHUC3 DA[]);
		void tinh_thong_da_thuc(DATHUC3 DA[]);
};
void DATHUC3::nhap(DATHUC3 DA[])
{ 
    cout<<"\t\t\t\t==>NHAP VAO 2 DA THUC<=="<<endl;
	for( int i=0 ; i<2 ; i++)
	{
		fflush(stdin);
		cout<<"\t\t==>da thuc thu "<<i+1<<endl;
		cout<<"\t\t==>nhap he so bac 3:";
		cin>>DA[i].a;
		cout<<"\t\t==>nhap he so bac 2:";
		cin>>DA[i].b;
		cout<<"\t\t==>nhap he so bac 1:";
		cin>>DA[i].c;
		cout<<"\t\t==>nhap he so tu do:";
		cin>>DA[i].d;
		cout<<"                                  "<<endl;
	}
}
void DATHUC3::tinh_thong_da_thuc(DATHUC3 DA[])
{
	cout<<"                                  "<<endl;
	cout<<"\t\t\t\t==>TINH TONG CUA CAC DA THU<=="<<endl;
    cout<<"\t\t"
	<<"("<<DA[0].a+DA[1].a<<")"<<"*X3"<<"+"
	<<"("<<DA[0].b+DA[1].b<<")"<<"*X2"<<"+"
	<<"("<<DA[0].c+DA[1].c<<")"<<"*X1"<<"+"
	<<"("<<DA[0].d+DA[1].d<<")"<<"= 0"<<endl;
	
}
int main()
{
	DATHUC3 DA[100];
	DA->nhap(DA);
	DA->tinh_thong_da_thuc(DA);

}

