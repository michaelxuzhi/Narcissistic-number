#include<iostream.h>
int main()
{
	int i,j,m,n;
	for(i=100;i<=999;i++)
	{
		j=i/100;
		m=(i-j*100)/10;
		n=(i-j*100-m*10);
		if(i==j*j*j+m*m*m+n*n*n)
		{
			cout<<"Ë®ÏÉ»¨Êý:"<<i<<endl;
		}
	}
	return 0;
}