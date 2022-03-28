#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
struct ngaysinh
{
	int ngay, thang, nam;

};
class khachhang
{
private:

	char hoten[30];
	ngaysinh ns;
	char cmnd[10];
	char hokhau[50];
public:
	void nhapthongtin(khachhang kh[], int& n);
	void xuatthongtin(khachhang kh[], int n);
	void tieude();
	void sxtheohoten(khachhang kh[], int n );
	void timkhachhang(khachhang kh[],int n );

};
void khachhang::tieude() {
    cout        <<"+----------------------------------------------------------------------------------------+"<<endl; 
	cout        <<"|"<<setw(10)<<"HO TEN"<<setw(5)
	            <<"|"<<setw(15)<<"NGAY SINH"<<setw(8)
		        <<"|"<<setw(20)<<"CHUNG MINH THU"<<setw(7)
		        <<"|"<<setw(15)<<"HO KHAU"<<setw(9)
		        <<"|"<<endl;
	cout        <<"+----------------------------------------------------------------------------------------+"<<endl;
}
void khachhang::nhapthongtin(khachhang kh[], int& n)
{
	do
	{
	cout << "Nhap so luong khach hang: ";
	cin >> n;
	}
    while(n<0);
	for (int i = 0; i < n; i++)
	{
		fflush(stdin);
		cout << "Nhap thong tin cua khach hang thu " << i + 1 << endl;
		cout << "\tNhap Ho Va Ten: ";
		cin.getline(kh[i].hoten, 30);
		cout << "\tNhap Ngay/Thang/Nam: \n";
		do
		{
		cout << "\t\tNhap Ngay: ";
		cin >> kh[i].ns.ngay;
		}
        while(kh[i].ns.ngay<0 || kh[i].ns.ngay>31 );
        do
        {
        cout << "\t\tNhap Thang: ";
		cin >> kh[i].ns.thang;
		}
	    while(kh[i].ns.thang<0 || kh[i].ns.ngay>12);
	    do
	    {
	    cout << "\t\tNhap Nam: ";
		cin >> kh[i].ns.nam;
		}
        while(kh[i].ns.nam<0);
		cout << "\tNhap So CMND: ";
		cin.ignore();
		cin.getline(kh[i].cmnd, 10);
		cout << "\tNhap ho khau: ";
		cin.getline(kh[i].hokhau, 30);
	}

}
void khachhang::xuatthongtin(khachhang kh[], int n) {
	tieude();
	for (int i = 0; i < n; i++)
	{
	    cout<<"|"<<setw(10)<<kh[i].hoten<<setw(5)
	        <<"|"<<setw(10)<<kh[i].ns.ngay<<"/"<<kh[i].ns.thang<<"/"<<kh[i].ns.nam<<setw(5)
		    <<"|"<<setw(20)<<kh[i].cmnd<<setw(7)
		    <<"|"<<setw(15)<<kh[i].hokhau<<setw(9)
		    <<"|"<<endl;
	    cout<<"+----------------------------------------------------------------------------------------+"<<endl;
	}
}
void khachhang::sxtheohoten(khachhang kh[], int n )
{
	cout<<"danh sach sau khi sap xep!!"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(kh[i].hoten,kh[j].hoten)>0)
			{
				khachhang tg = kh[i];
				kh[i] =kh[j];
				kh[j] =tg;
			}
		}
	}
	xuatthongtin(kh,n);
}
void khachhang::timkhachhang(khachhang kh[] ,int n )
{
	for(int i=0;i<n;i++)
	{
		if( kh[i].ns.thang == 12 )
		{
		cout<<"khach hang co thang sinh 12 la : "<<endl;
		tieude();
		cout<<"|"<<setw(10)<<kh[i].hoten<<setw(5)
	        <<"|"<<setw(10)<<kh[i].ns.ngay<<"/"<<kh[i].ns.thang<<"/"<<kh[i].ns.nam<<setw(5)
		    <<"|"<<setw(20)<<kh[i].cmnd<<setw(7)
		    <<"|"<<setw(15)<<kh[i].hokhau<<setw(9)
		    <<"|"<<endl;
	    cout<<"+----------------------------------------------------------------------------------------+"<<endl;
		}
	}
}


int main()
{
	int n;
	khachhang kh[100];
	kh->nhapthongtin(kh, n);
	kh->xuatthongtin(kh, n);
	kh->sxtheohoten(kh,n);
	kh->timkhachhang(kh,n);
}
