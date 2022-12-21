#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void baothua (int count,int so)
{
	cout <<"Ban da su dung "<<count<<" lan thu ";
	while (count ==11)
	{
		cout <<"\nBan da thua !,so chinh xac la: "<< so;
		system("\npause");
	}
}
int main ()
{
	cout <<"Day la game doan so\n";
	Sleep (2000);
	cout << "Ban chi co 10 lan thu\n";
	Sleep (1000);
	srand(time(NULL));
	int n,count=0;
	int so= rand() %(100-1+1)+1;
	do
{
	cout <<"Nhap so tu 1 den 100: ";
	cin>>n;
	baothua(count,n);
	while (n<so)
	{
		cout <<"Len ! ";
		break;
	}
	while (n>so)
	{
		cout <<"Xuong! ";
		break;
	}
		count ++;
}
	while (n!=so);
	cout <<"\nBan da doan dung !, so chinh xac la "<< so<<"\n";
	system("\npause");
	return 0;
}
	
