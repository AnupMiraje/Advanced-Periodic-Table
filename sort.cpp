#include<cstdio>
#include<climits>
#include<cstdlib>
#include<iostream>
//#include"input.cpp"

using namespace std;

void swap(int element[118],int m,int n)
{
	int i;
	i=n;	
	int temp;
	temp=element[m];
	while(n<m)
	{	
		element[m]=element[m-1];
		m--;
	}
	element[i]=temp;
}

void swapl(int element[10],int m,int n)
{
	int i;
	i=n;
	int temp;
	temp=element[m];
	while(n>m)
	{
		element[m]=element[m+1];
		m++;
	}
	element[n]=temp;
}

int main()
{
	int element[10]={1,9999,5,9999,81,9999,9999,54,9999,56};
	int i=0,j,min=0,k=9;
	while(i<10-min)
	{
		if(element[i]==9999)
		{
			swapl(element,i,k);
			min++;
		}
		else
		{
			i++;
		}
	}
	k=min;
	cout<<min<<endl;
	for(i=0;i<9-k;i++)
	{
		min=i;
		for(j=i+1;j<10-k;j++)
		{
			if(element[j]<element[i])
			{
				swap(element,j,min);
			}
		}
	}
	for(i=0;i<10;i++)
	{
		cout<<element[i]<<endl;
	}
}
