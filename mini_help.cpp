#include<iostream>
#include<cstdlib>
using namespace std;

int loop()
{
    int i=0;
    system("cls");
    cout<<"______________HELP____________"<<endl;
    cout<<"1.back\n2.Main Menu\n3.Exit"<<endl;
    cin>>i;
    switch(i)
    {
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 0;
    }
}

int help()
{
    int ch ,y,x;
    y=1;

LA1:    system("cls");
cout<<"_________________________________________________HELP_________________________________________________\n\n"<<endl;
cout<<" *******************************************Main operation window**************************************** "<<endl;

cout<<" The common interface of this  project is selecting the operation you want to perform .the options will be displayed on the screen main options are:  "<<endl;
 cout<<"\n\t1.\tView periodic table \n\t2.\tDisplay Element Details\n\t3.\tSearch by property\n\t4.\tAdvanced Search\n\t5.\tDouble Search\n\t6.\tIndustry Need\n\t7.\tAdmin Login\n\t8.\tExit\n"<<endl;

cout<<"\n*************************************** Common option interface *************************************\n"<<endl;
cout<<"Once you select the proper options corresponding results will be shown after this screen again option will be provided like:"<<endl;
cout<<"\t1.\tView element detail: display the full details about resulted element\n\t2.	Back : back to the current function \n\t3.	main menu: back to the main window of options\n\t4.	Exit: terminates the program"<<endl;
cout<<"According to your choice choose the option. "<<endl;
cout<<"\n\nenter your choice: ";
cin>>ch;
system("cls");

switch(ch)
{
    case 1:
        system("cls");
        cout<<"\n\n================================= 1) View periodic table =================================="<<endl;
        cout<<"When user want to see the actual modern periodic table the option VIEW PERIODIC TABLE will show the periodic table  "<<endl;
        system("pause");
        x=loop();
        break;
    case 2:
        cout<<"\n\n================================ 2) Display Element Details =============================="<<endl;
        cout<<"1.Display details by Name of Element:\n\tenter the name of the element you want to search"<<endl;
        cout<<"2.Display details by Atomic Number of Element: \n\tenter the atomic number of the element you want to search"<<endl;
        cout<<"details will be displayed on the screen with common interface window  "<<endl;
        system("pause");
        x=loop();
        break;

    case 3:
        cout<<"\n\n================================  3) Search by property ================================"<<endl;
        cout<<"By this operation you can search any element by its specific property like: "<<endl;
        cout<<"\t Search by Period, Group, Valency, Block, Colour, Phase, Category "<<endl;
        cout<<"\tEnter the property you want to search according to: "<<endl;
        cout<<"The results will be displayed on the screen with common interface window"<<endl;
        system("pause");
        x=loop();
        break;

    case 4:
        cout<<"\n\n================================    4) Advanced Search ============================="<<endl;
        cout<<"By this operation you can search any element by its specific numeric property like:"<<endl;
        cout<<"\t Search by Atomic Mass, Melting Point, Boiling Point, Density, Atomic Radius, Specific Heat, Valency\n\t Enter the numeric property you want to search according to:\n\t Enter the limit 1 and limit 2 for your numeric property: \nThe results will be displayed on the screen with common interface window "<<endl;
        system("pause");
        x=loop();
        break;
    case 5:
        cout<<" \n\n===============================   5) Double Search =================================="<<endl;
        cout<<"By this operation you can search any element by its specific property and specific numeric property at the same time like:   "<<endl;
        cout<<"\tSearch by: Atomic Mass, Period, Group, Melting Point, Boiling Point, Density, Atomic Radius,\n\tSpecific Heat, Valency, Block, Colour, Phase, Category  "<<endl;
        cout<<"\nEnter the numeric property you want to search according to:\n\tEnter the limit 1 and limit 2 for your property number 1: \n\tEnter the limit 1 and limit 2 for your property number 2:"<<endl;
        cout<<"The results will be displayed on the screen with common interface window "<<endl;
        system("pause");
        x=loop();
        break;

    case 6:
        cout<<" \n\n===============================   6) Industry Need ================================="<<endl;
        cout<<"\tThis has two options "<<endl;
        cout<<"\t1.Search by cost  "<<endl;
        cout<<"\t2.Search by cost and property  "<<endl;
        cout<<"\n\t1.Search by cost:  "<<endl;
        cout<<"\tBy this operation you can search any element sorting them by their cost: "<<endl;
        cout<<"\tEnter Limit 1 of Cost:  "<<endl;
        cout<<"\tEnter Limit 2 of Cost:"<<endl;

        cout<<"\tThe results will be displayed on the screen with common interface window. "<<endl;
        cout<<"\n\t2.Search by cost and property "<<endl;
        cout<<"\tBy this option you can search any element by its property lying between specific cost limit:"<<endl;
        cout<<"\tEnter 2nd Property name:  "<<endl;
        cout<<"\tEnter Limit 1 of Cost:  "<<endl;
        cout<<"\tEnter Limit 2 of Cost: "<<endl;
        cout<<"\n\tThe results will be displayed on the screen with common interface window. "<<endl;
        system("pause");
        x=loop();
        break;

    case 7:
        cout<<"\n\n========================== 7) Admin Login ====================="<<endl;
        cout<<"This operation will allow the admin to change the cost of elements by giving ID and passward."<<endl;
        system("pause");
        x=loop();
        break;

    case 8:
        cout<<"\n\n========================= 8)help ===================================="<<endl;
        cout<<"This operation display the help window along with common interface window.  "<<endl;
        system("pause");
        x=loop();
        break;
    case 9:
        cout<<"\n\n========================= 9)Exit ==================================="<<endl;
        cout<<"This option on main screen will terminate the execution of program.  "<<endl;
        system("pause");
        x=loop();
        break;
    default:
        cout<<"enter valid choice"<<endl;
        x=1;
        break;
}
if(x==1)
{
    goto LA1;
}
else if(x==2)
{
        return 2;
}
else if(x==0)
{
    return 0;
}
}
