#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstring>
#include<conio.h>
#include<string.h>
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
	int flag=0,i=0;
	char loginID[10]="Admin",user_loginID[10];
	char password[20]="admin@123",user_password[20];
	cout<<"Enter Login ID : ";
	cin>>user_loginID;
	cout<<"Enter Password : ";
	for(i=0;i<10;i++)
    {
        user_password[i]=_getch();
        cout<<"*";
    }
    user_password[i]='\0';
	if(strcmp(user_loginID,loginID)==0)
	{
		if(strncmp(user_password,password,9)==0)
		{
			flag=1;
		}
	}
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

int create_file()
{
    Element element_atm_mass[118],element_atm_no[118],element_period[118],element_group[118],element_block[118],element_melting_point[118],element_boiling_point[118],element_density[118],element_atm_radius[118];
    Element element_specific_heat[118],element_valency[118],element_colour[118],element_phase[118],element_category[118],element_cost[118];
    int i=0;
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
	update_file(element,filename[15]);
	for(i=0;i<118;i++)
    {
        element_category[i]=element[i];
    }
    sortcat(element_category,118);
    update_file(element_category,filename[13]);
    for(i=0;i<118;i++)
    {
        element_colour[i]=element[i];
    }
    sortcol(element_colour,118);
    update_file(element_colour,filename[11]);
    for(i=0;i<118;i++)
    {
        element_phase[i]=element[i];
    }
    sortph(element_phase,118);
    update_file(element_phase,filename[12]);
    for(i=0;i<118;i++)
    {
        element_block[i]=element[i];
    }
    sortbk(element_block,118);
    update_file(element_block,filename[4]);
    for(i=0;i<118;i++)
    {
        element_atm_no[i]=element[i];
    }
    sortan(element_atm_no,118);
    update_file(element_atm_no,filename[0]);
    for(i=0;i<118;i++)
    {
        element_period[i]=element[i];
    }
    sortp(element_period,118);
    update_file(element_period,filename[2]);
    for(i=0;i<118;i++)
    {
        element_group[i]=element[i];
    }
    sortg(element_group,118);
    update_file(element_group,filename[3]);
    for(i=0;i<118;i++)
    {
        element_atm_mass[i]=element[i];
    }
    sortam(element_atm_mass,118);
    update_file(element_atm_mass,filename[1]);
    for(i=0;i<118;i++)
    {
        element_atm_radius[i]=element[i];
    }
    sortar(element_atm_radius,118);
    update_file(element_atm_radius,filename[8]);
    for(i=0;i<118;i++)
    {
        element_melting_point[i]=element[i];
    }
    sortm(element_melting_point,118);
    update_file(element_melting_point,filename[5]);
    for(i=0;i<118;i++)
    {
        element_boiling_point[i]=element[i];
    }
    sortb(element_boiling_point,118);
    update_file(element_boiling_point,filename[6]);
    for(i=0;i<118;i++)
    {
        element_density[i]=element[i];
    }
    sortd(element_density,118);
    update_file(element_density,filename[7]);
    for(i=0;i<118;i++)
    {
        element_specific_heat[i]=element[i];
    }
    sorts(element_specific_heat,118);
    update_file(element_specific_heat,filename[9]);
    for(i=0;i<118;i++)
    {
        element_valency[i]=element[i];
    }
    sortv(element_valency,118);
    update_file(element_valency,filename[10]);
    for(i=0;i<118;i++)
    {
        element_cost[i]=element[i];
    }
    sortc(element_cost,118);
    update_file(element_cost,filename[14]);
}

int admin_login()
{
    system("cls");
    cout<<"____________ADMIN LOGIN____________"<<endl;
	int flag=0,i=0;
	double cost;
	char name[50];

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
			cout<<"\nInvalid user ID or Password"<<endl;
			cout<<"re-enter user ID and Password"<<endl;
			i++;
		}
	}
	if(flag!=1)
	{
		cout<<"Accsess Denied"<<endl;
		system("pause");
		return 2;
	}
	A:  system("cls");
	    cout<<"____________WELCOME ADMIN____________"<<endl;
	    cout<<"Enter name of element to edit its properties : "<<endl;
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
		system("pause");
		goto A;
	}
	cout<<"Current cost :"<<element[i].cost<<endl;
	cout<<"Enter updated cost : "<<endl;
	cin>>cost;
	while(i<118)
    {
        if(strcmp(element[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_atm_mass[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_atm_mass[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_atm_no[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_atm_no[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_atm_radius[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_atm_radius[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_block[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_block[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_boiling_point[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_boiling_point[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_category[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_category[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_colour[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_colour[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_cost[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_cost[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_density[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_density[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_group[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_group[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_melting_point[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_melting_point[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_period[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_period[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_phase[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_phase[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_specific_heat[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_specific_heat[i].cost=cost;
    while(i<118)
    {
        if(strcmp(element_valency[i].element_name,name)==0)
        {
            break;
        }
        i++;
    }
    element_valency[i].cost=cost;
    create_file();
	cout<<"Cost Updated Successfully"<<endl;
	system("pause");
	cout<<"************MENU************\n\n1.Back\n2.Main Menu\n3.Exit"<<endl;
	cin>>i;
	if(i==1)
    {
        goto A;
    }
	return i;
}
