#include<iostream>
#include<iomanip>
using namespace std;
class giaovien
{
	private:
		   char ht[30];
		   char bc[15];
		   char cn[20];
		   int t;
		   float bl;
		   float lcb;
	public:
		void nhapthongtin(giaovien gv[], int& n);
		void tieude();
		void xuatthongtin(giaovien gv[], int n);
		void xuatthongtin1gv();
		float tinhluongcoban(giaovien gv[], int n);
		void luongnhonhon2000(giaovien gv[], int n);	
		void tieude2();
};
void giaovien::nhapthongtin(giaovien gv[], int& n)
{
	do
	{
	cout << "Nhap so luong giao vien: ";
	cin >> n;
	}
    while(n<0);
    for(int i = 0 ; i < n ; i++)
    {   
        fflush(stdin);
        cout<<"\t\tgiao vien thu:"<<i+1<<endl;
    	cout<<"\t\tnhap ten cua giao vien:";
    	cin.getline(gv[i].ht,30);
    	cout<<"\t\tnhap bang cap cua giao vien:";
    	cin.getline(gv[i].bc,15);
    	cout<<"\t\tnhap chuyen nganh cua giao vien:";
    	cin.getline(gv[i].cn,20);
    	do
    	{
    	cout<<"\t\tnhap vao tuoi cua giao vien:";
    	cin>>gv[i].t;
		}
		while(t<0);
		do
		{
		cout<<"\t\tnhap vao bac luong cua giao vien:";
    	cin>>gv[i].bl;
		}
		while(bl<0);
		cout<<"                                           \n";
	}
}
void giaovien::tieude()
{
	cout <<"+------------------------+----------------------+----------------------------+------------+---------------------+"<<endl; 
    cout <<"|"<<setw(15)<<"HO TEN"<<setw(10)
         <<"|"<<setw(15)<<"BANG CAP"<<setw(8)
         <<"|"<<setw(20)<<"CHUYEN NGANH"<<setw(9)
         <<"|"<<setw(8)<<"TUOI"<<setw(5)
         <<"|"<<setw(15)<<"BAC LUONG"<<setw(7)
         <<"|"<<endl;
	cout <<"+------------------------+----------------------+----------------------------+------------+---------------------+"<<endl; 
}
void giaovien::xuatthongtin(giaovien gv[], int n)
{
	cout<<"                           "<<endl;
	cout<<"\tDANH SACH THONG TIN GIAO VIEN"<<endl;
    tieude();
    for(int i=0;i<n;i++)
    {
    cout <<"|"<<setw(15)<<gv[i].ht<<setw(10)
         <<"|"<<setw(15)<<gv[i].bc<<setw(8)
         <<"|"<<setw(20)<<gv[i].cn<<setw(9)
         <<"|"<<setw( 8)<<gv[i].t<<setw(5)
         <<"|"<<setw(15)<<gv[i].bl<<setw(7)
         <<"|"<<endl;
	cout <<"+------------------------+----------------------+----------------------------+------------+---------------------+"<<endl;
	}
}
void giaovien::xuatthongtin1gv()
{
	tieude();
    cout <<"|"<<setw(15)<<ht<<setw(10)
         <<"|"<<setw(15)<<bc<<setw(8)
         <<"|"<<setw(20)<<cn<<setw(9)
         <<"|"<<setw(8)<<t<<setw(5)
         <<"|"<<setw(15)<<bl<<setw(7)
         <<"|"<<endl;
	cout <<"+------------------------+----------------------+----------------------------+------------+---------------------+"<<endl; 
}
float giaovien::tinhluongcoban(giaovien gv[], int n)
{ 
   cout<<"                  "<<endl;
   cout<<"\tLUONG CO BAN CUA CAC GIAO VIEN !"<<endl;
   for(int i=0; i<n; i++)
   {
   	    gv[i].lcb=gv[i].bl*610;
   	    cout<<"\t\tluong co ban cua giao vien thu bang = "<<gv[i].lcb<<endl;
   }
   return lcb;
}
void giaovien::luongnhonhon2000(giaovien gv[], int n)
{
    cout<<"\tDANH SACH NHUNG GIAO VIEN TIEN LUONG IT HON 2000"<<endl;
    tieude2();
    for(int i=0; i<n; i++)
    {
       if(gv[i].lcb < 2000)
       {
    cout <<"|"<<setw(15)<<gv[i].ht<<setw(10)
         <<"|"<<setw(15)<<gv[i].bc<<setw(8)
         <<"|"<<setw(20)<<gv[i].cn<<setw(9)
         <<"|"<<setw(8)<<gv[i].t<<setw(5)
         <<"|"<<setw(15)<<gv[i].bl<<setw(7)
         <<"|"<<setw(15)<<gv[i].lcb<<setw(7)
         <<"|"<<endl;
	cout <<"+------------------------+----------------------+----------------------------+------------+---------------------+---------------------+"<<endl; 
	   }
	}
}
void giaovien::tieude2()
{
	cout <<"+------------------------+----------------------+----------------------------+------------+---------------------+---------------------+"<<endl; 
    cout <<"|"<<setw(15)<<"HO TEN"<<setw(10)
         <<"|"<<setw(15)<<"BANG CAP"<<setw(8)
         <<"|"<<setw(20)<<"CHUYEN NGANH"<<setw(9)
         <<"|"<<setw(8)<<"TUOI"<<setw(5)
         <<"|"<<setw(15)<<"BAC LUONG"<<setw(7)
         <<"|"<<setw(15)<<"LUONG CO BAN"<<setw(7)
         <<"|"<<endl;
	cout <<"+------------------------+----------------------+----------------------------+------------+---------------------+---------------------+"<<endl; 
}

int main()
{
	int n;
	giaovien gv[100];
	gv->nhapthongtin(gv,n);
    gv->xuatthongtin(gv,n);
  //gv->xuatthongtin1gv();
    gv->tinhluongcoban(gv,n);  
    gv->luongnhonhon2000(gv,n);
}






