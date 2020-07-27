#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstring>

using namespace std;
			
int checkname(char *name)
{
	if(strncasecmp(name,"atomic mass",11)==0)
	{
		return 1;
	}
	else if(strncasecmp(name,"per",3)==0)
	{
		return 2;
	}
	else if(strncasecmp(name,"gr",2)==0)
	{
		return 3;
	}
	else if(strncasecmp(name,"melt",4)==0)
	{
		return 4;
	}
	else if(strncasecmp(name,"boil",4)==0)
	{
		return 5;
	}
	else if(strncasecmp(name,"den",3)==0)
	{
		return 6;
	}
	else if(strncasecmp(name,"atomic radius",13)==0)
	{
		return 7;
	}
	else if(strncasecmp(name,"spe",3)==0)
	{
		return 8;
	}
	else if(strncasecmp(name,"val",3)==0)
	{
		return 9;
	}
	else if(strncasecmp(name,"cost",4)==0)
	{
		return 10;
	}
	else if(strncasecmp(name,"blo",3)==0)
	{
		return 11;
	}
	else if(strncasecmp(name,"col",3)==0)
	{
		return 12;
	}
	else if(strncasecmp(name,"pha",3)==0)
	{
		return 13;
	}
	else if(strncasecmp(name,"cat",3)==0)
	{
		return 14;
	}
	return 0;
}

int get_name()
{
	int i=0;
	char name[50];
	cout<<"Enter Property name : "<<endl;
	cin.getline(name,50);
	i=checkname(name);
	return i;
}

int main()
{
	int i;
	i=get_name();
	cout<<i<<endl;
}

