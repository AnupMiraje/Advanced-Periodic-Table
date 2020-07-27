#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstring>
#include"input.cpp"
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

void swap(Element element[118],int m,int n)
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

void swapl(Element element[118],int m,int n)
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

void sortcat(Element element[118])
{
	int i=0,j=0;
	for(i=0;i<118;i++)
	{
		if(strcmp(element[i].category,"alkali-metal")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].category,"alkaline-earth-metal")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].category,"transition-metal")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].category,"poor-metal")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].category,"non-metal")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].category,"noble-gas")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].category,"lanthanide")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].category,"actinide")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
}

void sortcol(Element element[118])
{
	int i=0,j=0,k=117,min=0;
	while(i<118-min)
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
	k=min;
	for(i=0;i<118-k;i++)
	{
		if(strcmp(element[i].colour,"grey")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118-k;i++)
	{
		if(strcmp(element[i].colour,"black")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118-k;i++)
	{
		if(strcmp(element[i].colour,"yellow")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118-k;i++)
	{
		if(strcmp(element[i].colour,"pink")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118-k;i++)
	{
		if(strcmp(element[i].colour,"blue")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].colour,"brown")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].colour,"red")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118-k;i++)
	{
		if(strcmp(element[i].colour,"violet")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118-k;i++)
	{
		if(strcmp(element[i].colour,"golden")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118-k;i++)
	{
		if(strcmp(element[i].colour,"green")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118-k;i++)
	{
		if(strcmp(element[i].colour,"colourless")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118-k;i++)
	{
		if(strcmp(element[i].colour,"silver")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
}

void sortph(Element element[118])
{
	int i=0,j=0;
	for(i=0;i<118;i++)
	{
		if(strcmp(element[i].phase,"liquid")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].phase,"gas")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].phase,"solid")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
}

void sortbk(Element element[118])
{
	int i=0,j=0;
	for(i=0;i<118;i++)
	{
		if(strcmp(element[i].block,"S")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].block,"P")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].block,"D")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	for(i=j;i<118;i++)
	{
		if(strcmp(element[i].block,"F")==0)
		{
			swap(element,i,j);
			j++;
		}
	}
	
}

void sortan(Element element[118])
{
	int i,j,min,k=117;
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<k+1;j++)
		{
			if(element[j].atm_no<element[min].atm_no)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortp(Element element[118])
{
	int i,j,min,k=117;
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<118;j++)
		{
			if(element[j].period<element[min].period)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortg(Element element[118])
{
	int i,j,min,k=117;
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<118;j++)
		{
			if(element[j].group<element[min].group)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortam(Element element[118])
{
	int i=0,j,min=0,k=117;
	while(i<118-min)
	{
		if(element[i].atm_mass==9999)
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
	for(i=0;i<117-k;i++)
	{
		min=i;
		for(j=i+1;j<118-k;j++)
		{
			if(element[j].atm_mass<element[min].atm_mass)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortm(Element element[118])
{
	int i=0,j,min=0,k=117;
	while(i<118-min)
	{
		if(element[i].melting_point==9999)
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
	for(i=0;i<117-k;i++)
	{
		min=i;
		for(j=i+1;j<118-k;j++)
		{
			if(element[j].melting_point<element[min].melting_point)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortb(Element element[118])
{
	int i=0,j,min=0,k=117;
	while(i<118-min)
	{
		if(element[i].boiling_point==9999)
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
	for(i=0;i<117-k;i++)
	{
		min=i;
		for(j=i+1;j<118-k;j++)
		{
			if(element[j].boiling_point<element[min].boiling_point)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortd(Element element[118])
{
	int i=0,j,min=0,k=117;
	while(i<118-min)
	{
		if(element[i].density==9999)
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
	for(i=0;i<117-k;i++)
	{
		min=i;
		for(j=i+1;j<118-k;j++)
		{
			if(element[j].density<element[min].density)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortar(Element element[118])
{
	int i=0,j,min=0,k=117;
	while(i<118-min)
	{
		if(element[i].atm_radius==9999)
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
	for(i=0;i<117-k;i++)
	{
		min=i;
		for(j=i+1;j<118-k;j++)
		{
			if(element[j].atm_radius<element[min].atm_radius)
			{
				swap(element,j,min);
			}
		}
	}
}

void sorts(Element element[118])
{
	int i=0,j,min=0,k=117;
	while(i<118-min)
	{
		if(element[i].specific_heat==9999)
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
	for(i=0;i<117-k;i++)
	{
		min=i;
		for(j=i+1;j<118-k;j++)
		{
			if(element[j].specific_heat<element[min].specific_heat)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortv(Element element[118])
{
	int i=0,j,min=0,k=117;
	for(i=0;i<117;i++)
	{
		min=i;
		for(j=i+1;j<118;j++)
		{
			if(element[j].valency<element[min].valency)
			{
				swap(element,j,min);
			}
		}
	}
}

void sortc(Element element[118])
{
	int i=0,j,min=0,k=117;
	while(i<118-min)
	{
		if(element[i].cost==9999)
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
	for(i=0;i<117-k;i++)
	{
		min=i;
		for(j=i+1;j<118-k;j++)
		{
			if(element[j].cost<element[min].cost)
			{
				swap(element,j,min);
			}
		}
	}
}

int update_file(Element element[118],char *filename)
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
	char loginID[10]="Admin",user_loginID[10];
	char password[20]="Admin@123",user_password[20];
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
	return flag;
}

int edit_data(Element element[118])
{
	int i=0;
	char filename[50]="sahil.cpp";
	double cost;
	char name[50];
	cout<<"Enter name of element to edit its properties : "<<endl;
	cin>>name;
	while(strcmp(element[i].element_name,name)!=0)
	{
		i++;
	}
	cout<<"Enter updated cost : "<<endl;
	cin>>cost;
	element[i].cost=cost;
	update_file(element,filename);
}

/*int main()
{
	int i=0;
	Element E[118];
	for(i=0;i<118;i++)
	{E[i]=element[i];}
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
	strcpy(filename[15],"input.cpp");
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
	sortam(element);
	update_file(element,filename[0]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortam(element);
	update_file(element,filename[1]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortp(element);
	update_file(element,filename[2]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortg(element);
	update_file(element,filename[3]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortbk(element);
	update_file(element,filename[4]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortm(element);
	update_file(element,filename[5]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortb(element);
	update_file(element,filename[6]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortd(element);
	update_file(element,filename[7]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortar(element);
	update_file(element,filename[8]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sorts(element);
	update_file(element,filename[9]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortv(element);
	update_file(element,filename[10]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortcol(element);
	update_file(element,filename[11]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortph(element);
	update_file(element,filename[12]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortcat(element);
	update_file(element,filename[13]);
	for(i=0;i<118;i++)
	{element[i]=E[i];}
	sortc(element);
	update_file(element,filename[14]);
		
}*/
