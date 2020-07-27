#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include<stdio.h>
//#include<conio.h>
#include"periodic_graphics.cpp"
#include"mini_help.cpp"

using namespace std;

class Element
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
};

#include"editfun.cpp"

void display_atm_no(int i)
{
	i--;
	if(i>117)
	{
		cout<<"Invalid Atomic Number"<<endl;
		return;
	}
	system("cls");
	cout<<"________DISPLAY ELEMENT DETAILS__________"<<endl;
	cout<<"Atomic number            : "<<element[i].atm_no<<endl;
	cout<<"Element Name             : "<<element[i].element_name<<endl;
	cout<<"Symbol                   : "<<element[i].symbol<<endl;
	cout<<"atomic mass              : "<<element[i].atm_mass<<endl;
	cout<<"Period                   : "<<element[i].period<<endl;
	cout<<"Group                    : "<<element[i].group<<endl;
	cout<<"Block                    : "<<element[i].block<<endl;
	if(element[i].melting_point!=9999)
		cout<<"Melting Point            : "<<element[i].melting_point<<"K"<<endl;
	if(element[i].boiling_point!=9999)
		cout<<"Boiling Point            : "<<element[i].boiling_point<<"K"<<endl;
	if(element[i].density!=9999)
		cout<<"Density                  : "<<element[i].density<<"g/cm^3"<<endl;
	if(element[i].atm_radius!=9999)
		cout<<"Atomic Radius            : "<<element[i].atm_radius<<"pm"<<endl;
	if(element[i].specific_heat!=9999)
		cout<<"Specific Heat            : "<<element[i].specific_heat<<"J/Kg*K"<<endl;
	if(element[i].valency!=9999)
		cout<<"Valency                  : "<<element[i].valency<<endl;
	if(strcmp(element[i].colour,"-")!=0)
		cout<<"Colour                   : "<<element[i].colour<<endl;
	if(strcmp(element[i].phase,"-")!=0)
		cout<<"Phase                    : "<<element[i].phase<<endl;
	if(strcmp(element[i].category,"-")!=0)
		cout<<"Category                 : "<<element[i].category<<endl;
	if(element[i].cost!=999999)
		cout<<"Cost                     : Rs." <<element[i].cost<<" per gram\n\n"<<endl;
}

void display_name(char name[50])
{
	int i=0;
	while(strcmp(name,element[i].element_name)!=0)
	{
		i++;
		if(i>117)
        {
            cout<<"Invalid Name"<<endl;
            return;
        }
	}
	display_atm_no(i+1);
}

int check_validity(int s,double x)
{
    switch(s)
    {
    case 2:
        if(x>7||x<1)
        {
            cout<<"Invalid Period number"<<endl;
            return 0;
        }
        break;
    case 3:
        if(x>18||x<1)
        {
            cout<<"Invalid Group number"<<endl;
            return 0;
        }
        break;
    case 9:
        if(x>7||x<0)
        {
            cout<<"Invalid Valency"<<endl;
            return 0;
        }
        break;
    }
    return 1;
}

int check_validity(int s,char *name)
{
    int i=0;
    while(name[i]!='\0')
    {
        name[i]=tolower(name[i]);
        i++;
    }
    switch(s)
    {
    case 11:
        i=0;
        while(name[i]!='\0')
        {
            name[i]=toupper(name[i]);
            i++;
        }
        if((strcmp(name,"S")!=0) && (strcmp(name,"D")!=0) && (strcmp(name,"P")!=0)&&(strcmp(name,"F")!=0))
        {
            cout<<"Invalid Block"<<endl;
            return 0;
        }
        break;
    case 12:
        if((strcmp(name,"grey")!=0)&&(strcmp(name,"black")!=0)&&(strcmp(name,"pink")!=0)&&(strcmp(name,"yellow")!=0)&&(strcmp(name,"blue")!=0)&&(strcmp(name,"brown")!=0)&&(strcmp(name,"red")!=0)&&(strcmp(name,"violet")!=0)&&(strcmp(name,"golden")!=0)&&(strcmp(name,"green")!=0)&&(strcmp(name,"silver")!=0)&&(strcmp(name,"colourless")!=0))
        {
            cout<<"Invalid colour"<<endl;
            return 0;
        }
        break;
    case 13:
        if((strcmp(name,"liqiud")!=0)&&(strcmp(name,"gas")!=0)&&(strcmp(name,"solid")!=0))
        {
            cout<<"Invalid phase"<<endl;
            return 0;
        }
        break;
    case 14:
        if((strcmp(name,"alkali-metal")!=0)&&(strcmp(name,"alkaline-earth-metal")!=0)&&(strcmp(name,"transition-metal")!=0)&&(strcmp(name,"poor-metal")!=0)&&(strcmp(name,"non-metal")!=0)&&(strcmp(name,"noble-gas")!=0)&&(strcmp(name,"lanthanide")!=0)&&(strcmp(name,"actinide")!=0))
        {
            cout<<"Invalid Category"<<endl;
            return 0;
        }
        break;
    }
    return 1;
}

class Queue
{
	private:
	int tail, head;
	unsigned capacity;
	public:
    int size;
    Element E[118];
	Queue()
	{
		capacity=118;
		tail=0;
		head=0;
		size=0;
	}
	int isFull()
	{
		return size==capacity;
	}
	int isEmpty()
	{
		return tail==head;
	}
	void enqueue(Element element)
	{
		if (isFull())
		{
			return;
		}
		E[tail]=element;
		tail=tail+1;
		size=size+1;
	}
	Element dequeue()
	{
		Element element;
		if (isEmpty())
    		{
    			head=tail=0;
		}
		else
		{
			element=E[head];
			head=head+1;
			size=size-1;
			return element;
		}
	}
	int empty_queue()
	{
		while(head!=tail)
		{
			dequeue();
		}
		head=tail=0;
		size=0;
	}
	void set_queue(Element element[],int s,char *name)
	{
		int i=0;
		empty_queue();
		switch(s)
		{
			case 11:
				while(strcmp(element[i].block,name)!=0)
				{
					i++;
				}
				while(i<118 && strcmp(element[i].block,name)==0)
				{
					enqueue(element[i]);
					i++;
				}
				break;
			case 12:
				while(strcmp(element[i].colour,name)!=0)
				{
					i++;
				}
				while(i<118 && strcmp(element[i].colour,name)==0)
				{
					enqueue(element[i]);
					i++;
				}
				break;
			case 13:
				while(strcmp(element[i].phase,name)!=0)
				{
					i++;
				}
				while(i<118 && strcmp(element[i].phase,name)==0)
				{
					enqueue(element[i]);
					i++;
				}
				break;
			case 14:
				while(strcmp(element[i].category,name)!=0)
				{
					i++;
				}
				while(i<118 && strcmp(element[i].category,name)==0)
				{
					enqueue(element[i]);
					i++;
				}
				break;
		}
	}
	void set_queue(Element element[],int s,double limit1,double limit2)
	{
		int i=0;
		empty_queue();
		switch(s)
		{
			case 1:
				while(element[i].atm_mass<limit1)
				{
					i++;
				}
				while(i<118 && element[i].atm_mass<=limit2)
                {
                    if(element[i].atm_mass!=9999)
                    {
                        enqueue(element[i]);
                    }
					i++;
				}
				break;
			case 2:
				while(element[i].period<limit1)
				{
					i++;
				}
				while(i<118 && element[i].period<=limit2)
				{
					enqueue(element[i]);
					i++;
				}
				break;
			case 3:
				while(element[i].group<limit1)
				{
					i++;
				}
				while(i<118 && element[i].group<=limit2)
				{
					enqueue(element[i]);
					cout<<
					i++;
				}
				break;
			case 4:
				while(element[i].melting_point<limit1)
				{
					i++;
				}
				while(i<118 && element[i].melting_point<=limit2)
                {
                    if(element[i].melting_point!=9999)
                    {
                        enqueue(element[i]);
                    }
					i++;
				}
				break;
			case 5:
				while(element[i].boiling_point<limit1)
				{
					i++;
				}
				while(i<118 && element[i].boiling_point<=limit2)
                {
                    if(element[i].boiling_point!=9999)
                    {
                        enqueue(element_boiling_point[i]);
                    }
					i++;
				}
				break;
			case 6:
				while(element[i].density<limit1)
				{
					i++;
				}
				while(i<118 && element[i].density<=limit2)
                {
                    if(element[i].density!=9999)
                    {
                        enqueue(element_density[i]);
                    }
					i++;
				}
				break;
			case 7:
				while(element[i].atm_radius<limit1)
				{
					i++;
				}
				while(i<118 && element[i].atm_radius<=limit2)
                {
                    if(element[i].atm_radius!=9999)
					{
                        enqueue(element[i]);
					}
					i++;
				}
				break;
			case 8:
				while(element[i].specific_heat<limit1)
				{
					i++;
				}
				while(i<118 && element[i].specific_heat<=limit2)
                {
                    if(element[i].specific_heat!=9999)
					{
                        enqueue(element[i]);
					}
					i++;
				}
				break;
			case 9:
				while(element[i].valency<limit1)
				{
					i++;
				}
				while(i<118 && element[i].valency<=limit2)
                {
                    if(element[i].valency!=9999)
					{
                        enqueue(element[i]);
					}
					i++;
				}
				break;
			case 10:
				while(element[i].cost<limit1)
				{
					i++;
				}
				while(i<118 && element[i].cost<=limit2)
                {
                    if(element[i].cost!=9999)
					{
                        enqueue(element[i]);
					}
					i++;
				}
				break;
		}
	}
	int traverse_queue(int s)
	{
		int s1=0,i=0;
		if(isEmpty())
        {
            cout<<"No Elements Found"<<endl;
            cout<<"1.Back\n2.Main Menu\n3.Exit"<<endl;
            cin>>s1;
            switch(s1)
            {
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 0;
            default:
                cout<<"Invalid input"<<endl;
            }
        }
		do
		{
			i=head;
			switch(s)
			{
				case 1:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<endl;
					while(i<tail && E[i].atm_mass!=0)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<endl;
						i++;
					}
					break;
				case 2:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<endl;
					while(i<tail && E[i].period!=0)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<endl;
						i++;
					}
					break;
				case 3:
					cout<<setw(6)<<"sr.no"<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<endl;
					while(i<tail && E[i].group!=0)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<endl;
						i++;
					}
					break;
				case 4:
					cout<<setw(7)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<endl;
					while(i<tail && E[i].melting_point!=0)
					{
						cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<endl;
						i++;
					}
					break;
				case 5:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<endl;
					while(i<tail && E[i].boiling_point!=0)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<endl;
						i++;
					}
					break;
				case 6:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<endl;
					while(i<tail && E[i].density!=0)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<endl;
						i++;
					}
					break;
				case 7:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<endl;
					while(i<tail && E[i].atm_radius!=0)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<endl;
						i++;
					}
					break;
				case 8:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<endl;
					while(i<tail && E[i].specific_heat!=0)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<endl;
						i++;
					}
					break;
				case 9:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<endl;
					while(i<tail && E[i].valency!=0)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<endl;
						i++;
					}
					break;
				case 10:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<endl;
					while(i<tail && E[i].cost!=0)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<endl;
						i++;
					}
					break;
				case 11:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<endl;
					while(i<tail)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<endl;
						i++;
					}
					break;
				case 12:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<endl;
					while(i<tail)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<endl;
						i++;
					}
					break;
				case 13:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<endl;
					while(i<tail)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<endl;
						i++;
					}
					break;
				case 14:
					cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<endl;
					while(i<tail)
					{
						cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<endl;
						i++;
					}
					break;

			}
			L1000: cout<<"\n1.View element details\n2.Back\n3.Main Menu\n4.Exit"<<endl;
			cin>>s1;
			switch(s1)
			{
				case 1:
					cout<<"Enter element number : ";
					cin>>i;
					if(i>tail)
                    {
                        cout<<"Invalid Serial Number"<<endl;
                        goto L1000;
                    }
					display_atm_no(E[i-1].atm_no);
					system("pause");
					system("cls");
					break;
				case 2:
					return 1;
				case 3:
					return 2;
				case 4:
					return 0;
				default:
					cout<<"Invalid input"<<endl;
			}
		}while(s1!=4);
	}
};

Queue queue;
Queue queue_double;

char *lower_case(char *name)
{
    int i=0;
    while(name[i]!='\0')
    {
        name[i]=tolower(name[i]);
        i++;
    }
    return name;
}

char *upper_case(char *name)
{
    int i=0;
    while(name[i]!='\0')
    {
        name[i]=toupper(name[i]);
        i++;
    }
    return name;
}

int checkname(char *name)
{
	if((strncasecmp(name,"atomic m",8)==0) || (strncasecmp(name,"tomic m",7)==0))
	{
		return 1;
	}
	else if((strncasecmp(name,"per",3)==0) || (strncasecmp(name,"eri",3)==0))
	{
		return 2;
	}
	else if((strncasecmp(name,"gro",3)==0) || (strncasecmp(name,"rou",3)==0))
	{
		return 3;
	}
	else if((strncasecmp(name,"melt",4)==0) || (strncasecmp(name,"elt",3)==0))
	{
		return 4;
	}
	else if((strncasecmp(name,"boil",4)==0) || (strncasecmp(name,"oil",3)==0))
	{
		return 5;
	}
	else if((strncasecmp(name,"den",3)==0) || (strncasecmp(name,"ens",3)==0))
	{
		return 6;
	}
	else if((strncasecmp(name,"atomic r",8)==0) || (strncasecmp(name,"tomic r",7)==0))
	{
		return 7;
	}
	else if((strncasecmp(name,"spe",3)==0) || (strncasecmp(name,"pec",3)==0))
	{
		return 8;
	}
	else if((strncasecmp(name,"val",3)==0) || (strncasecmp(name,"ale",3)==0))
	{
		return 9;
	}
	else if((strncasecmp(name,"cos",3)==0) || (strncasecmp(name,"ost",3)==0))
	{
		return 10;
	}
	else if((strncasecmp(name,"blo",3)==0) || (strncasecmp(name,"loc",3)==0))
	{
		return 11;
	}
	else if((strncasecmp(name,"colo",4)==0) || (strncasecmp(name,"olo",3)==0))
	{
		return 12;
	}
	else if((strncasecmp(name,"pha",3)==0) || (strncasecmp(name,"has",3)==0))
	{
		return 13;
	}
	else if((strncasecmp(name,"cat",3)==0) || (strncasecmp(name,"ate",3)==0))
	{
		return 14;
	}
	return 0;
}

int sort_queue(int s)
{
	int x,y;
	char name[50];
	switch(s)
	{
		case 1:
			sortam(queue.E,queue.size);
			cout<<"Enter Limit 1 of Atomic Mass : ";
			cin>>x;
			cout<<"Enter Limit 2 of Atomic Mass : ";
			cin>>y;
			queue_double.set_queue(queue.E,s,x,y);
			x=queue_double.traverse_queue(s);
			return x;
        case 2:
			sortp(queue.E,queue.size);
			L200: cout<<"Enter Period number : ";
			cin>>x;
			if(check_validity(s,x)==0)
            {
                goto L200;
            }
            queue_double.set_queue(queue.E,s,x,x);
			x=queue_double.traverse_queue(s);
			return x;
        case 3:
			sortg(queue.E,queue.size);
			L201: cout<<"Enter Group number : ";
			cin>>x;
			if(check_validity(s,x)==0)
            {
                goto L201;
            }
            queue_double.set_queue(queue.E,s,x,x);
			x=queue_double.traverse_queue(s);
			return x;
        case 4:
			sortm(queue.E,queue.size);
			cout<<"Enter Limit 1 of Melting Point : ";
			cin>>x;
			cout<<"Enter Limit 2 of Melting Point : ";
			cin>>y;
			queue_double.set_queue(queue.E,s,x,y);
			x=queue_double.traverse_queue(s);
			return x;
		case 5:
			sortb(queue.E,queue.size);
			cout<<"Enter Limit 1 of Boiling Point : ";
			cin>>x;
			cout<<"Enter Limit 2 of Boiling Point : ";
			cin>>y;
			queue_double.set_queue(queue.E,s,x,y);
			x=queue_double.traverse_queue(s);
			return x;
		case 6:
			sortd(queue.E,queue.size);
			cout<<"Enter Limit 1 of Density : ";
			cin>>x;
			cout<<"Enter Limit 2 of Density : ";
			cin>>y;
			queue_double.set_queue(queue.E,s,x,y);
			x=queue_double.traverse_queue(s);
			return x;
		case 7:
			sortar(queue.E,queue.size);
			cout<<"Enter Limit 1 of Atomic Radius : ";
			cin>>x;
			cout<<"Enter Limit 2 of Atomic Radius : ";
			cin>>y;
			queue_double.set_queue(queue.E,s,x,y);
			x=queue_double.traverse_queue(s);
			return x;
		case 8:
			sorts(queue.E,queue.size);
			cout<<"Enter Limit 1 of Specific Heat : ";
			cin>>x;
			cout<<"Enter Limit 2 of Specific Heat : ";
			cin>>y;
			queue_double.set_queue(queue.E,s,x,y);
			x=queue_double.traverse_queue(s);
			return x;
		case 9:
			sortv(queue.E,queue.size);
			L203: cout<<"Enter Limit 1 of Valency : ";
			cin>>x;
			if(check_validity(s,x)==0)
            {
                goto L203;
            }
			L204: cout<<"Enter Limit 2 of Valency : ";
			cin>>y;
			if(check_validity(s,y)==0)
            {
                goto L204;
            }
            queue_double.set_queue(queue.E,s,x,y);
            x=queue_double.traverse_queue(s);
			return x;
        case 10:
			sortc(queue.E,queue.size);
			cout<<"Enter Limit 1 of Cost : ";
			cin>>x;
			cout<<"Enter Limit 2 of Cost : ";
			cin>>y;
			queue_double.set_queue(queue.E,s,x,y);
			x=queue_double.traverse_queue(s);
			return x;
		case 11:
			sortbk(queue.E,queue.size);
			L205: cout<<"Enter Block : ";
			cin>>name;
			strcpy(name,upper_case(name));
			if(check_validity(s,name)==0)
            {
                goto L205;
            }
            queue_double.set_queue(queue.E,s,name);
			x=queue_double.traverse_queue(s);
			return x;
        case 12:
			sortcol(queue.E,queue.size);
			L206: cout<<"Enter Colour : ";
			cin>>name;
			strcpy(name,lower_case(name));
			if(check_validity(s,x)==0)
            {
                goto L206;
            }
            queue_double.set_queue(queue.E,s,name);
            x=queue_double.traverse_queue(s);
            return x;
        case 13:
			sortph(queue.E,queue.size);
			L207: cout<<"Enter Phase : ";
			cin>>name;
			strcpy(name,lower_case(name));
			if(check_validity(s,name)==0)
            {
                goto L207;
            }
            queue_double.set_queue(queue.E,s,name);
            x=queue_double.traverse_queue(s);
            return x;
        case 14:
            sortcat(queue.E,queue.size);
            L208: cout<<"Enter Category : ";
			cin>>name;
			strcpy(name,lower_case(name));
			if(check_validity(s,name)==0)
            {
                goto L208;
            }
            queue_double.set_queue(queue.E,s,name);
			x=queue_double.traverse_queue(s);
			return x;
        default:
			cout<<"Invalid Property"<<endl;
			x=1;
			return x;
    }
}

int double_search(int b,int d)
{
    int x=0,y=0;
    char name[50];
    switch(b)
    {
		case 1:
			cout<<"Enter Limit 1 of Atomic Mass : ";
			cin>>x;
			cout<<"Enter Limit 2 of Atomic Mass : ";
			cin>>y;
			queue.set_queue(element_atm_mass,b,x,y);
			x=sort_queue(d);
			break;
		case 2:
			L100: cout<<"Enter Period number : ";
			cin>>x;
			if(check_validity(b,x)==0)
            {
                goto L100;
            }
			queue.set_queue(element_period,b,x,x);
			x=sort_queue(d);
			break;
        case 3:
			L101: cout<<"Enter Group number : ";
			cin>>x;
			if(check_validity(b,x)==0)
            {
                goto L101;
            }
			queue.set_queue(element_group,b,x,x);
			x=sort_queue(d);
			break;
        case 4:
			cout<<"Enter Limit 1 of Melting Point : ";
			cin>>x;
			cout<<"Enter Limit 2 of Melting Point : ";
			cin>>y;
            queue.set_queue(element_melting_point,b,x,y);
			x=sort_queue(d);
			break;
        case 5:
			cout<<"Enter Limit 1 of Boiling Point : ";
			cin>>x;
			cout<<"Enter Limit 2 of Boiling Point : ";
			cin>>y;
			queue.set_queue(element_boiling_point,b,x,y);
			x=sort_queue(d);
			break;
		case 6:
			cout<<"Enter Limit 1 of Density : ";
			cin>>x;
			cout<<"Enter Limit 2 of Density : ";
			cin>>y;
			queue.set_queue(element_density,b,x,y);
			x=sort_queue(d);
			break;
		case 7:
			cout<<"Enter Limit 1 of Atomic Radius : ";
			cin>>x;
			cout<<"Enter Limit 2 of Atomic Radius : ";
			cin>>y;
			queue.set_queue(element_atm_radius,b,x,y);
			x=sort_queue(d);
			break;
		case 8:
			cout<<"Enter Limit 1 of Specific Heat : ";
			cin>>x;
            cout<<"Enter Limit 2 of Specific Heat : ";
			cin>>y;
			queue.set_queue(element_specific_heat,b,x,y);
			x=sort_queue(d);
			break;
		case 9:
			L109: cout<<"Enter Limit 1 of Valency : ";
			cin>>x;
			if(check_validity(b,x)==0)
            {
                goto L109;
            }
			L110: cout<<"Enter Limit 2 of Valency : ";
			cin>>y;
			if(check_validity(b,y)==0)
            {
                goto L110;
            }
			queue.set_queue(element_valency,b,x,y);
			x=sort_queue(d);
			break;
        case 11:
            L111: cout<<"Enter block : ";
            cin>>name;
            if(check_validity(b,name)==0)
            {
                goto L111;
            }
            queue.set_queue(element_block,b,name);
            x=sort_queue(d);
            break;
        case 12:
            L112: cout<<"Enter colour : ";
            cin>>name;
            if(check_validity(b,name)==0)
            {
                goto L112;
            }
            queue.set_queue(element_colour,b,name);
            x=sort_queue(d);
            break;
        case 13:
            L113: cout<<"Enter phase : ";
            cin>>name;
            if(check_validity(b,name)==0)
            {
                goto L113;
            }
            queue.set_queue(element_phase,b,name);
            x=sort_queue(d);
            break;
        case 14:
            L114: cout<<"Enter category : ";
            cin>>name;
            if(check_validity(b,name)==0)
            {
                goto L114;
            }
            queue.set_queue(element_category,b,name);
            x=sort_queue(d);
            break;
        default:
            x=1;
            cout<<"Invalid Property"<<endl;
            system("pause");
            break;
	}
	return x;
}

int main()
{
    char p[10],q[10];
	int a=0,b=0,c=0,d=0,z=0;
	int i=0,j=0;
	double x=0,y=0;
	char name[50];
	char name1[50],name2[50];
	do{
	A: system("cls");
    cout<<"**********MAIN MENU**********\n\n1.View Periodic Table\n2.Display Element Details\n3.Search by property\n4.Advanced Search\n5.Double Search\n6.Industry Need\n7.Admin Login\n8.Help\n9.Exit\n"<<endl;
	cin>>p;
	if((strcmp(p,"1")!=0) && (strcmp(p,"2")!=0) && (strcmp(p,"3")!=0) && (strcmp(p,"4")!=0) && (strcmp(p,"5")!=0) && (strcmp(p,"6")!=0) && (strcmp(p,"7")!=0) && (strcmp(p,"8")!=0))
    {
        cout<<"Invalid option"<<endl;
        system("pause");
        goto A;
    }
    a=atoi(p);
	switch(a)
	{
		case 1:
			periodic();
			break;
		case 2:
			B: system("cls");
            cout<<"________DISPLAY ELEMENT DETAILS________"<<endl;
            cout<<"\n**********MENU**********\n\n1.Display details by Name of Element\n2.Display details by Atomic Number of Element\n"<<endl;
			cin>>q;
			if((strcmp(q,"1")!=0) && (strcmp(q,"2")!=0))
            {
                    cout<<"Invalid option"<<endl;
                    goto A;
            }
            b=atoi(q);
			system("cls");
			switch(b)
			{
				case 1:
				    cout<<"________DISPLAY ELEMENT DETAILS________"<<endl;
					cout<<"\nEnter Element Name : ";
					cin>>name;
					system("cls");
					cout<<"________DISPLAY ELEMENT DETAILS________"<<endl;
					display_name(name);
					break;
				case 2:
				    cout<<"________DISPLAY ELEMENT DETAILS________"<<endl;
					cout<<"\nEnter Atomic number of Element : ";
					cin>>i;
					system("cls");
					cout<<"________DISPLAY ELEMENT DETAILS________"<<endl;
					display_atm_no(i);
					break;
				default:
					cout<<"\nInvalid option"<<endl;
					break;
			}
			L1010: cout<<"\n**********MENU**********\n\n1.Get Details of another Element\n2.Main Menu\n3.Exit\n"<<endl;
			cin>>c;
			switch(c)
			{
				case 1:
					goto B;
				case 2:
					goto A;
				case 3:
					return 0;
				default:
				    system("cls");
					cout<<"\nInvalid option"<<endl;
				    goto L1010;
			}
			break;
		case 3:
			C: system("cls");
            cout<<"________SEARCH BY PROPERTY________"<<endl;
            cout<<"\nSearch by Period, Group, Valency, Block, Colour, Phase, Category"<<endl;
			cout<<"\nEnter Property name : ";
			x=1;
			fflush(stdin);
			cin.ignore();
			cin.getline(name,50);
			cout<<name;
			system("cls");
			cout<<"________SEARCH BY PROPERTY________"<<endl;
			b=checkname(name);
			switch(b)
			{
				case 2:
					L2: cout<<"Enter Period number : ";
					cin>>x;
					system("cls");
                    cout<<"________SEARCH BY PROPERTY________"<<endl;
                    if(check_validity(b,x)==0)
                    {
                        goto L2;
                    }
					queue.set_queue(element_period,b,x,x);
					x=queue.traverse_queue(b);
					break;
				case 3:
					L3: cout<<"Enter Group number : ";
					cin>>x;
					system("cls");
                    cout<<"________SEARCH BY PROPERTY________"<<endl;
					if(check_validity(b,x)==0)
                    {
                        goto L3;
                    }
					queue.set_queue(element_group,b,x,x);
					x=queue.traverse_queue(b);
					break;
				case 9:
					L9: cout<<"Enter valency : ";
					cin>>x;
					system("cls");
                    cout<<"________SEARCH BY PROPERTY________"<<endl;
					if(check_validity(b,x)==0)
                    {
                        goto L9;
                    }
					queue.set_queue(element_valency,b,x,x);
					x=queue.traverse_queue(b);
					break;
				case 11:
					L11: cout<<"Search by S, P, D, F "<<endl;
                    cout<<"Enter block : ";
					cin>>name;
					strcpy(name,upper_case(name));
					system("cls");
                    cout<<"________SEARCH BY PROPERTY________"<<endl;
					if(check_validity(b,name)==0)
                    {
                        goto L11;
                    }
					queue.set_queue(element_block,b,name);
					x=queue.traverse_queue(b);
					break;
				case 12:
					L12: cout<<"Search by grey, black, yellow, pink, blue, brown, red, voilet, golden, green, silver, colourless"<<endl;
                    cout<<"Enter colour : ";
					cin>>name;
                    strcpy(name,lower_case(name));
					system("cls");
                    cout<<"________SEARCH BY PROPERTY________"<<endl;
					if(check_validity(b,name)==0)
                    {
                        goto L12;
                    }
					queue.set_queue(element_colour,b,name);
					x=queue.traverse_queue(b);
					break;
				case 13:
					L13: cout<<"Search by solid, liquid, gas"<<endl;
                    cout<<"Enter phase : ";
					cin>>name;
					strcpy(name,lower_case(name));
					system("cls");
                    cout<<"________SEARCH BY PROPERTY________"<<endl;
					if(check_validity(b,name)==0)
                    {
                        goto L13;
                    }
					queue.set_queue(element_phase,b,name);
					x=queue.traverse_queue(b);
					break;
				case 14:
					L14: cout<<"Search by alkali-metal, alkaline-earth-metal, poor-metal, non-metal, noble-gas, transition-metal, lanthanide, actinide"<<endl;
                    cout<<"Enter category : ";
					cin>>name;
					strcpy(name,lower_case(name));
					system("cls");
                    cout<<"________SEARCH BY PROPERTY________"<<endl;
					if(check_validity(b,name)==0)
                    {
                        goto L14;
                    }
					queue.set_queue(element_category,b,name);
					x=queue.traverse_queue(b);
					break;
				default:
					cout<<"Invalid Property"<<endl;
					break;
			}
			if(x==1)
			{goto C;}
			else if(x==2)
			{goto A;}
			else
			{return 0;}
		case 4:
			D: system("cls");
			x=1;
			cout<<"__________ADVANCED SEARCH__________"<<endl;
            cout<<"\nSearch by Atomic Mass, Melting Point, Boiling Point, Density, Atomic Radius, Specific Heat, Valency"<<endl;
			cout<<"\nEnter Property name : ";
			fflush(stdin);
			cin.ignore();
			cin.getline(name,50);
			system("cls");
			cout<<"__________ADVANCED SEARCH__________"<<endl;
			b=checkname(name);
			switch(b)
			{
				case 1:
					cout<<"Enter Limit 1 of Atomic Mass : ";
					cin>>x;
					cout<<"Enter Limit 2 of Atomic Mass : ";
					cin>>y;
					system("cls");
                    cout<<"__________ADVANCED SEARCH__________"<<endl;
					queue.set_queue(element_atm_mass,b,x,y);
					x=queue.traverse_queue(b);
					break;
				case 4:
					cout<<"Enter Limit 1 of Melting Point : ";
					cin>>x;
					cout<<"Enter Limit 2 of Melting Point : ";
					cin>>y;
					system("cls");
                    cout<<"__________ADVANCED SEARCH__________"<<endl;
					queue.set_queue(element_melting_point,b,x,y);
					x=queue.traverse_queue(b);
					break;
				case 5:
					cout<<"Enter Limit 1 of Boiling Point : ";
					cin>>x;
					cout<<"Enter Limit 2 of Boiling Point : ";
					cin>>y;
					system("cls");
                    cout<<"__________ADVANCED SEARCH__________"<<endl;
					queue.set_queue(element_boiling_point,b,x,y);
					x=queue.traverse_queue(b);
					break;
				case 6:
					cout<<"Enter Limit 1 of Density : ";
					cin>>x;
					cout<<"Enter Limit 2 of Density : ";
					cin>>y;
					system("cls");
                    cout<<"__________ADVANCED SEARCH__________"<<endl;
					queue.set_queue(element_density,b,x,y);
					x=queue.traverse_queue(b);
					break;
				case 7:
					cout<<"Enter Limit 1 of Atomic Radius : ";
					cin>>x;
					cout<<"Enter Limit 2 of Atomic Radius : ";
					cin>>y;
					system("cls");
                    cout<<"__________ADVANCED SEARCH__________"<<endl;
					queue.set_queue(element_atm_radius,b,x,y);
					x=queue.traverse_queue(b);
					break;
				case 8:
					cout<<"Enter Limit 1 of Specific Heat : ";
					cin>>x;
					cout<<"Enter Limit 2 of Specific Heat : ";
					cin>>y;
					system("cls");
                    cout<<"__________ADVANCED SEARCH__________"<<endl;
					queue.set_queue(element_specific_heat,b,x,y);
					x=queue.traverse_queue(b);
					break;
				case 9:
					L29: cout<<"Enter Limit 1 of Valency : ";
					cin>>x;
					if(check_validity(b,x)==0)
                    {
                        goto L29;
                    }
					L229: cout<<"Enter Limit 2 of Valency : ";
					cin>>y;
					if(check_validity(b,y)==0)
                    {
                        goto L229;
                    }
                    system("cls");
                    cout<<"__________ADVANCED SEARCH__________"<<endl;
					queue.set_queue(element_valency,b,x,y);
					x=queue.traverse_queue(b);
					break;
				default:
					cout<<"Invalid Property"<<endl;
					x=1;
					break;
			}
			if(x==1)
			{goto D;}
			else if(x==2)
			{goto A;}
			else
			{return 0;}
		case 5:
			E:  system("cls");
			x=1;
			cout<<"____________DOUBLE SEARCH____________"<<endl;
            cout<<"Search by Atomic Mass, Period, Group, Melting Point, Boiling Point, Density, Atomic Radius, Specific Heat, Valency, Block, Colour, Phase, Category"<<endl;
			cout<<"Enter 1st Property name : ";
			fflush(stdin);
			cin.ignore();
			cin.getline(name1,50);
			b=checkname(name1);
			cout<<"Enter 2nd Property name : ";
			fflush(stdin);
			cin.ignore();
			cin.getline(name2,50);
			d=checkname(name2);
			system("cls");
			cout<<"____________DOUBLE SEARCH____________"<<endl;
			x=double_search(b,d);
			if(x==1)
			{goto E;}
			else if(x==2)
			{goto A;}
			else
			{return 0;}
		case 6:
			F:  system("cls");
			x=1;
			cout<<"____________INDUSTRY NEED____________"<<endl;
            cout<<"\n***Menu***\n\n1.Search by cost\n2.Search by cost and property\n"<<endl;
			cin>>b;
			system("cls");
			cout<<"____________INDUSTRY NEED____________"<<endl;
			switch(b)
			{
				case 1:
					cout<<"Enter Limit 1 of Cost : ";
					cin>>x;
					cout<<"Enter Limit 2 of Cost : ";
					cin>>y;
					system("cls");
                    cout<<"____________INDUSTRY NEED____________"<<endl;
					queue.set_queue(element_cost,10,x,y);
					x=queue.traverse_queue(10);
					break;
				case 2:
					L1001: cout<<"Enter 2nd Property name : "<<endl;
					fflush(stdin);
					cin.ignore();
					cin.getline(name2,50);
					d=checkname(name2);
					if(d==0)
                    {
                        cout<<"Invalid property"<<endl;
                        goto L1001;
                    }
                    system("cls");
                    cout<<"____________INDUSTRY NEED____________"<<endl;
                    x=double_search(d,10);
					break;
			}
			if(x==1)
			{goto F;}
			else if(x==2)
			{goto A;}
			else
			{return 0;}
		case 7:
		    x=admin_login();
		    if(x==1)
            {goto A;}
            else
            {return 0;}
		    break;
        case 8:
            x=help();
            if(x==2)
            {
                goto A;
            }
            else if(x==0)
            {
                return 0;
            }
            break;
        case 9:
            break;
        default:
            cout<<"Invalid Choice"<<endl;
            break;
	}
	}while(a!=9);
}
