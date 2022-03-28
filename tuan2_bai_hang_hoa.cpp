#include<iostream>
using namespace std;

    class HangHoa
    {
    	private:
    		char MaHang[8], TenHang[30];
    		int SoLuong;
    		float DonGia,ThanhTien;
    	public:
    		void nhap()
    		{
    			cout<<"\t\t==>NHAP MA HANG: ";
    			cin.getline(MaHang,8);
    			cout<<"\t\t==>NHAP TEN HANG: ";
    			cin.getline(TenHang,30);
    			cout<<"\t\t==>NHAP DON GIA: ";
    			cin>>DonGia;
    			fflush(stdin);
			}
		    void TinhTien()
		    {
		    	ThanhTien = SoLuong * DonGia;
			}
			void xuatTT()
			{
				cout<< "MA HANG: " <<MaHang
				    << "TEN HANG: " <<TenHang
				    << "SO LUONG: " <<SoLuong
				    << "DON GIA: " <<DonGia
				    << "THANH TIEN: " << ThanhTien <<endl;
			}
			void in()
			{
				cout<<"\t\t==>DON GIA LON HON 50 LA: ";
				if ( DonGia > 50)
				{
					xuatTT();
				}
			}
	};
int main()
{   int n;
    cout<<"\t\t==>NHAP SO LUONG HANG HOA: ";
    cin>>n;
	HangHoa a[n];
	fflush(stdin);
	for(int i = 0; i < n ; i++)
	{
		a[i].nhap();
	}

}
