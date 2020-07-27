#include<iostream>

int Queue :: double_traverse(int a,int b)
{
    switch(a)
    {
    case 1:
        switch(b)
        {
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no"<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(7)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(10)<<E[i].block<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                break;
            case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
        }
    case 2:
         switch(b)
         {

         }
    }
}
