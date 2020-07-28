#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include<cstdio>

using namespace std;

void swapm(Element E[118],int i,int j)
{
    int m=j;
    Element temp;
    temp=E[j];
    while(m>i)
    {
        E[m]=E[m-1];
        m--;
    }
    E[i]=temp;
}

void sort_mass(Element E[118],int s)
{
    int i=0,j=1;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(E[j].atm_mass<E[i].atm_mass)
            {
                swapm(E,i,j);
            }
        }
    }
}

void sort_period(Element E[118],int s)
{
    int i=0,j=1;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(E[j].period<E[i].period)
            {
                swapm(E,i,j);
            }
        }
    }
}

void sort_group(Element E[118],int s)
{
    int i=0,j=1;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(E[j].group<E[i].group)
            {
                swapm(E,i,j);
            }
        }
    }
}

void sort_melting(Element E[118],int s)
{
    int i=0,j=1;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(E[j].melting_point<E[i].melting_point)
            {
                swapm(E,i,j);
            }
        }
    }
}

void sort_boiling(Element E[118],int s)
{
    int i=0,j=1;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(E[j].boiling_point<E[i].boiling_point)
            {
                swapm(E,i,j);
            }
        }
    }
}

void sort_density(Element E[118],int s)
{
    int i=0,j=1;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(E[j].density<E[i].density)
            {
                swapm(E,i,j);
            }
        }
    }
}

void sort_specific(Element E[118],int s)
{
    int i=0,j=1;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(E[j].specific_heat<E[i].specific_heat)
            {
                swapm(E,i,j);
            }
        }
    }
}

void sort_radius(Element E[118],int s)
{
    int i=0,j=1;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(E[j].atm_radius<E[i].atm_radius)
            {
                swapm(E,i,j);
            }
        }
    }
}

void sort_valency(Element E[118],int s)
{
    int i=0,j=1;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(E[j].valency<E[i].valency)
            {
                swapm(E,i,j);
            }
        }
    }
}

void sort_cost(Element E[118],int s)
{
    int i=0,j=1;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(E[j].cost<E[i].cost)
            {
                swapm(E,i,j);
            }
        }
    }
}

void sort_category(Element E[118],int s,char *name)
{
    int i=0,j=0;
    for(i=0;i<s;i++)
    {
        if(strcmp(E[i].category,name)==0)
        {
            swapm(E,j,i);
            j++;
        }
    }
}

void sort_colour(Element E[118],int s,char *name)
{
    int i=0,j=0;
    for(i=0;i<s;i++)
    {
        if(strcmp(E[i].colour,name)==0)
        {
            swapm(E,j,i);
            j++;
        }
    }
}

void sort_phase(Element E[118],int s,char *name)
{
    int i=0,j=0;
    for(i=0;i<s;i++)
    {
        if(strcmp(E[i].phase,name)==0)
        {
            swapm(E,j,i);
            j++;
        }
    }
}

void sort_block(Element E[118],int s,char *name)
{
    int i=0,j=0;
    for(i=0;i<s;i++)
    {
        if(strcmp(E[i].block,name)==0)
        {
            swapm(E,j,i);
            j++;
        }
    }
}
