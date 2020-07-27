#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstring>

/*class Element
{
	public:
	int atm_no;
	char element_name[50];
	char symbol[6];
	float atm_mass;
	int period,group;
	char block[2];
	float melting_point,boiling_point,density;//(Kelvin),(Kelvin),(kg/m^3)
	float atm_radius,specific_heat;//(pm),(J/kg*K)
	int valency;
	char colour[40];
	char phase[15];
	char category[50];
	double cost;//($/gm)
};*/

#include"element.cpp"
#include"element_atm_no.cpp"
#include"element_atm_mass.cpp"
#include"element_period.cpp"
#include"element_group.cpp"
#include"element_block.cpp"
#include"element_melting_point.cpp"
#include"element_boiling_point.cpp"
#include"element_density.cpp"
#include"element_atm_radius.cpp"
#include"element_specific_heat.cpp"
#include"element_valency.cpp"
#include"element_colour.cpp"
#include"element_phase.cpp"
#include"element_category.cpp"
#include"element_cost.cpp"

using namespace std;

void swap(Element element[],int m,int n)
{
	Element temp;
	temp=element[m];
	while(n<m)
	{
		element[m]=element[m-1];
		m--;
	}
	element[n]=temp;
}

void swapl(Element element[],int m,int n)
{
	Element temp;
	temp=element[m];
	while(n>m)
	{
		element[m]=element[m+1];
		m++;
	}
	element[n]=temp;
}

void sortcat(Element element[],int k)
{
	int i=0,j=0;
	for(i=0;i<k;i++)
	{
		if(strcmp(element[i].category,"alkali-metal")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].category,"alkaline-earth-metal")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].category,"transition-metal")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].category,"poor-metal")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].category,"non-metal")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].category,"noble-gas")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].category,"lanthanide")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].category,"actinide")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
}

void sortcol(Element element[],int k)
{
	int i=0,j=0,min=0;
	while(i<k-1-min)
	{
		if(strcmp(element[i].colour,"-")==0)
		{
			swapl(element,i,k);
			min++;
		}
		else
		{
			i++;
		}
	}
	for(i=0;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"grey")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"black")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"yellow")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"pink")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"blue")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"brown")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"red")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"violet")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"golden")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"green")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"colourless")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k-min;i++)
	{
		if(strcmp(element[i].colour,"silver")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
}

void sortph(Element element[],int k)
{
	int i=0,j=0;
	for(i=0;i<k;i++)
	{
		if(strcmp(element[i].phase,"liquid")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].phase,"gas")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].phase,"solid")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
}

void sortbk(Element element[],int k)
{
	int i=0,j=0;
	for(i=0;i<k;i++)
	{
		if(strcmp(element[i].block,"S")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	cout<<"done3"<<endl;
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].block,"P")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].block,"D")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<k;i++)
	{
		if(strcmp(element[i].block,"F")==0)
		{
			swap(element,i,j);
			j++;
		}
	}

}

void sortan(Element element[],int k)
{
	int i,j,min;
	for(i=0;i<k-1;i++)
	{
		min=i;
		for(j=i+1;j<k;j++)
		{
			if(element[j].atm_no<element[min].atm_no)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortp(Element element[],int k)
{
	int i,j,min;
	for(i=0;i<k-1;i++)
	{
		min=i;
		for(j=i+1;j<k;j++)
		{
			if(element[j].period<element[min].period)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortg(Element element[],int k)
{
	int i,j,min;
	for(i=0;i<k-1;i++)
	{
		min=i;
		for(j=i+1;j<k;j++)
		{
			if(element[j].group<element[min].group)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortam(Element element[],int k)
{
	int i=0,j,min=0,l=0;
	while(i<k-min)
	{
		if(element[i].atm_mass==9999)
		{
			swapl(element,i,k-1);
			min++;
		}
		else
		{
			i++;
		}
	}
	l=min;
	for(i=0;i<k-1-l;i++)
	{
		min=i;
		for(j=i+1;j<k-l;j++)
		{
			if(element[j].atm_mass<element[min].atm_mass)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortm(Element element[],int k)
{
	int i=0,j,min=0,l=0;
	while(i<k-min)
	{
		if(element[i].melting_point==9999)
		{
			swapl(element,i,k-1);
			min++;
		}
		else
		{
			i++;
		}
	}
	l=min;
	for(i=0;i<k-1-l;i++)
	{
		min=i;
		for(j=i+1;j<k-l;j++)
		{
			if(element[j].melting_point<element[min].melting_point)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortb(Element element[],int k)
{
	int i=0,j,min=0,l=0;
	while(i<k-min)
	{
		if(element[i].boiling_point==9999)
		{
			swapl(element,i,k-1);
			min++;
		}
		else
		{
			i++;
		}
	}
	l=min;
	for(i=0;i<k-l-1;i++)
	{
		min=i;
		for(j=i+1;j<k-l;j++)
		{
			if(element[j].boiling_point<element[min].boiling_point)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortd(Element element[],int k)
{
	int i=0,j,min=0,l=0;
	while(i<k-min)
	{
		if(element[i].density==9999)
		{
			swapl(element,i,k-1);
			min++;
		}
		else
		{
			i++;
		}
	}
	l=min;
	for(i=0;i<k-l-1;i++)
	{
		min=i;
		for(j=i+1;j<k-l;j++)
		{
			if(element[j].density<element[min].density)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortar(Element element[],int k)
{
	int i=0,j,min=0,l=0;
	while(i<k-min)
	{
		if(element[i].atm_radius==9999)
		{
			swapl(element,i,k-1);
			min++;
		}
		else
		{
			i++;
		}
	}
	l=min;
	for(i=0;i<k-1-l;i++)
	{
		min=i;
		for(j=i+1;j<k-l;j++)
		{
			if(element[j].atm_radius<element[min].atm_radius)
			{
				swap(element,j,min);
			}
		}
	}
}

void sorts(Element element[],int k)
{
	int i=0,j,min=0,l=0;
	while(i<k-min)
	{
		if(element[i].specific_heat==9999)
		{
			swapl(element,i,k-1);
			min++;
		}
		else
		{
			i++;
		}
	}
	l=min;
	for(i=0;i<k-1-l;i++)
	{
		min=i;
		for(j=i+1;j<k-l;j++)
		{
			if(element[j].specific_heat<element[min].specific_heat)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortv(Element element[],int k)
{
	int i=0,j,min=0;
	for(i=0;i<k-1;i++)
	{
		min=i;
		for(j=i+1;j<k;j++)
		{
			if(element[j].valency<element[min].valency)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortc(Element element[],int k)
{
	int i=0,j,min=0,l=0;
	while(i<k-min)
	{
		if(element[i].cost==9999)
		{
			swapl(element,i,k-1);
			min++;
		}
		else
		{
			i++;
		}
	}
	l=min;
	for(i=0;i<k-l-1;i++)
	{
		min=i;
		for(j=i+1;j<k-l;j++)
		{
			if(element[j].cost<element[min].cost)
			{
				swap(element,j,min);
			}
		}
	}
}

int update_file(Element element[],char *filename)
{
	char a='"',c=',';
	ofstream p;
	int i=0;
	char file[31];
	while(filename[i]!='.')
	{
		file[i]=filename[i];
		i++;
	}
	file[i]='\0';
	p.open(filename,ios::in|ios::out|ios::trunc);
	if(p.fail())
	{
		cout<<"\nfile not found"<<endl;
		return 0;
	}
	p<<"#include<cstdio>\n#include<climits>\n#include<cstdlib>\n#include<iostream>\n\nusing namespace std;\n\nElement "<<file<<"[118]={"<<endl;
	for(i=0;i<118;i++)
	{
		if(i!=117)
		{
				p<<"{"<<element[i].atm_no<<c<<a<<element[i].element_name<<a<<c<<a<<element[i].symbol<<a<<c<<element[i].atm_mass<<c<<element[i].period<<c<<element[i].group<<c<<a<<element[i].block<<a<<c<<element[i].melting_point<<c<<element[i].boiling_point<<c<<element[i].density<<c<<element[i].atm_radius<<c<<element[i].specific_heat<<c<<element[i].valency<<c<<a<<element[i].colour<<a<<c<<a<<element[i].phase<<a<<c<<a<<element[i].category<<a<<c<<element[i].cost<<"},"<<endl;
		}
		if(i==117)
		{
			p<<"{"<<element[i].atm_no<<c<<a<<element[i].element_name<<a<<c<<a<<element[i].symbol<<a<<c<<element[i].atm_mass<<c<<element[i].period<<c<<element[i].group<<c<<a<<element[i].block<<a<<c<<element[i].melting_point<<c<<element[i].boiling_point<<c<<element[i].density<<c<<element[i].atm_radius<<c<<element[i].specific_heat<<c<<element[i].valency<<c<<a<<element[i].colour<<a<<c<<a<<element[i].phase<<a<<c<<a<<element[i].category<<a<<c<<element[i].cost<<"}"<<endl;
		}
	}
	p<<"};"<<endl;
	p.close();
}

int login()
{
	int flag=0;
	char a;
	cout<<"ADMIN LOGIN"<<endl;
	char loginID[10]="Admin",user_loginID[10];
	char password[20]="admin",user_password[20];
	cout<<"Enter Login ID : ";
	cin>>user_loginID;
	cout<<"Enter Password : ";
    cin>>user_password;
	if(strcmp(user_loginID,loginID)==0)
	{
		if(strcmp(user_password,password)==0)
		{
			flag=1;
		}
	}
	cout<<flag<<endl;
	return flag;
}

int edit_data(Element element[],char *name,double cost,char *filename)
{
	int i=0;
	while(strcmp(element[i].element_name,name)!=0)
	{
		i++;
	}
	element[i].cost=cost;
	update_file(element,filename);
}

int admin_login()
{
	int flag=0,i=0;
	double cost;
	char name[50];
	char filename[20][31];
	strcpy(filename[0],"element_atm_no.cpp");
	strcpy(filename[1],"element_atm_mass.cpp");
	strcpy(filename[2],"element_period.cpp");
	strcpy(filename[3],"element_group.cpp");
	strcpy(filename[4],"element_block.cpp");
	strcpy(filename[5],"element_melting_point.cpp");
	strcpy(filename[6],"element_boiling_point.cpp");
	strcpy(filename[7],"element_density.cpp");
	strcpy(filename[8],"element_atm_radius.cpp");
	strcpy(filename[9],"element_specific_heat.cpp");
	strcpy(filename[10],"element_valency.cpp");
	strcpy(filename[11],"element_colour.cpp");
	strcpy(filename[12],"element_phase.cpp");
	strcpy(filename[13],"element_category.cpp");
	strcpy(filename[14],"element_cost.cpp");
	strcpy(filename[15],"element.cpp");
	while(i<3)
	{
		flag=login();
		if(flag==1)
		{
			i=0;
			break;
		}
		else
		{
			cout<<"Invalid user ID or Password"<<endl;
			cout<<"re-enter user ID and Password"<<endl;
			i++;
		}
	}
	if(flag!=1)
	{
		cout<<"Accsess Denied"<<endl;
		return 0;
	}
	cout<<"WELCOME LOGIN"<<endl;
	A: cout<<"Enter name of element to edit its properties : "<<endl;
	cin>>name;
	for(i=0;i<118;i++)
	{
		if(strcmp(element[i].element_name,name)==0)
		{
			break;
		}
	}
	if(i>117)
	{
		cout<<"Enter Valid Name"<<endl;
		goto A;
	}
	cout<<"current Cost : Rs."<<element[i].cost<<endl;
	cout<<"Enter updated cost : "<<endl;
	cin>>cost;
	edit_data(element,name,cost,filename[15]);
	edit_data(element_atm_no,name,cost,filename[0]);
	edit_data(element_atm_mass,name,cost,filename[1]);
	edit_data(element_period,name,cost,filename[2]);
	edit_data(element_group,name,cost,filename[3]);
	edit_data(element_block,name,cost,filename[4]);
	edit_data(element_melting_point,name,cost,filename[5]);
	edit_data(element_boiling_point,name,cost,filename[6]);
	edit_data(element_density,name,cost,filename[7]);
	edit_data(element_atm_radius,name,cost,filename[8]);
	edit_data(element_specific_heat,name,cost,filename[9]);
	edit_data(element_valency,name,cost,filename[10]);
	edit_data(element_colour,name,cost,filename[11]);
	edit_data(element_phase,name,cost,filename[12]);
	edit_data(element_category,name,cost,filename[13]);
	while(strcmp(element_cost[i].element_name,name)!=0)
	{
		i++;
	}
	element_cost[i].cost=cost;
	sortc(element_cost,118);
	edit_data(element_cost,name,cost,filename[14]);
	cout<<"Cost Updated Successfully"<<endl;
	cout<<"************MENU************\n\n1.Main Menu\n2.Exit"<<endl;
	cin>>i;
	return i;
}
	/*int i=0;
	Element E[118];
	for(i=0;i<118;i++)
	{E[i]=element[i];}

	int flag=0;
	double temp;
	/*while(i<3)
	{
		flag=login();
		if(flag==1)
		{
			i=0;
			break;
		}
		else
		{
			cout<<"Invalid user ID or Password"<<endl;
			cout<<"re-enter user ID and Password"<<endl;
			i++;
		}
	}
	if(flag==1)
	{//update_file(element,filename);
		edit_data(element);
	}
	else
	{
		cout<<"Accsess Denied"<<endl;
		return 0;
	}
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortam(element,118);
	update_file(element,filename[0]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortam(element,118);
	update_file(element,filename[1]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortp(element,118);
	update_file(element,filename[2]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortg(element,118);
	update_file(element,filename[3]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortbk(element,118);
	update_file(element,filename[4]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortm(element,118);
	update_file(element,filename[5]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortb(element,118);
	update_file(element,filename[6]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortd(element,118);
	update_file(element,filename[7]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortar(element,118);
	update_file(element,filename[8]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sorts(element,118);
	update_file(element,filename[9]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortv(element,118);
	update_file(element,filename[10]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortcol(element,118);
	update_file(element,filename[11]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortph(element,118);
	update_file(element,filename[12]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortcat(element,118);
	update_file(element,filename[13]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortc(element,118);
	update_file(element,filename[14]);

}*/
