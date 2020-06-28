#include<iostream>
using namespace std;
int main()
{
	int row;
	cout<<"enter the number of rows to print"<<endl;
	cin>>row;
	int k=1;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=i;j++)
		{
		cout<<k<<"\t";
		k++;
		}
		cout<<"\n";
	}
}
/*
1
23
456
78910
11121314
*/
