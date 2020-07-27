#include<stdio.h>
//#include<conio>
//#include<graphics.h>
#include<dos.h>

int periodic()
{
int gdriver = DETECT,gmode;
int x,y,i;
#pragma GCC diagnostic ignored "-Wwrite-strings"

	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;

	settextstyle(8,0,2);
	outtextxy(150,10,"Modern Periodic Table");

	//Font
	settextstyle(2,0,0);



//-------------------------S-Block-----------------------------------------

	outtextxy(2,2,"S-Block");
	//H
	setfillstyle(SOLID_FILL,GREEN);
	rectangle(0,15,35,55);
	floodfill(5,20,WHITE);
	outtextxy(4,20,"1");
	outtextxy(13,33,"H");

	//Li
	setfillstyle(SOLID_FILL,4);
	rectangle(0,55,35,95);
	floodfill(5,60,WHITE);
	outtextxy(4,60,"3");
	outtextxy(12,74,"Li");

	//Na
	setfillstyle(SOLID_FILL,4);
	rectangle(0,95,35,135);
	floodfill(5,100,WHITE);
	outtextxy(4,100,"11");
	outtextxy(12,114,"Na");

	//K
	setfillstyle(SOLID_FILL,4);
	rectangle(0,135,35,175);
	floodfill(5,140,WHITE);
	outtextxy(4,140,"19");
	outtextxy(12,154,"K");

	//Rb
	setfillstyle(SOLID_FILL,4);
	rectangle(0,175,35,215);
	floodfill(5,180,WHITE);
	outtextxy(4,180,"37");
	outtextxy(12,194,"Rb");

	//Cs
	setfillstyle(SOLID_FILL,4);
	rectangle(0,215,35,255);
	floodfill(5,220,WHITE);
	outtextxy(4,220,"55");
	outtextxy(12,234,"Cs");

	//Fr
	setfillstyle(SOLID_FILL,4);
	rectangle(0,255,35,295);
	floodfill(5,260,WHITE);
	outtextxy(4,260,"87");
	outtextxy(12,274,"Fr");

	//Be
	setfillstyle(SOLID_FILL,6);
	rectangle(35,55,70,95);
	floodfill(40,60,WHITE);
	outtextxy(39,60,"4");
	outtextxy(47,74,"Be");

	//Mg
	setfillstyle(SOLID_FILL,6);
	rectangle(35,95,70,135);
	floodfill(40,100,WHITE);
	outtextxy(39,100,"12");
	outtextxy(47,114,"Mg");

	//Ca
	setfillstyle(SOLID_FILL,6);
	rectangle(35,135,70,175);
	floodfill(40,140,WHITE);
	outtextxy(39,140,"20");
	outtextxy(47,154,"Ca");

	//Sr
	setfillstyle(SOLID_FILL,6);
	rectangle(35,175,70,215);
	floodfill(40,180,WHITE);
	outtextxy(39,180,"38");
	outtextxy(47,194,"Sr");

	//Ba
	setfillstyle(SOLID_FILL,6);
	rectangle(35,215,70,255);
	floodfill(40,220,WHITE);
	outtextxy(39,220,"56");
	outtextxy(47,234,"Ba");

	//Ra
	setfillstyle(SOLID_FILL,6);
	rectangle(35,255,70,295);
	floodfill(40,260,WHITE);
	outtextxy(39,260,"88");
	outtextxy(47,274,"Ra");


//-------------------------D-Block-----------------------------------------

	outtextxy(215,110,"D-Block");
	//Coloring block
	setfillstyle(SOLID_FILL,9);
	rectangle(70,135,420,295);
	floodfill(80,140,WHITE);

	//Loop for boxes
	for(y=135;y<256;y=y+40)
		for(x=70;x<386;x=x+35)
			rectangle(x,y,x+35,y+40);

	//Sc
	outtextxy(74,140,"21");
	outtextxy(83,153,"Sc");

	//Ti
	outtextxy(109,140,"22");
	outtextxy(118,153,"Ti");

	//V
	outtextxy(144,140,"23");
	outtextxy(153,153,"V");

	//Cr
	outtextxy(179,140,"24");
	outtextxy(188,153,"Cr");

	//Mn
	outtextxy(214,140,"25");
	outtextxy(223,153,"Mn");

	//Fe
	outtextxy(249,140,"26");
	outtextxy(258,153,"Fe");

	//Co
	outtextxy(284,140,"27");
	outtextxy(293,153,"Co");

	//Ni
	outtextxy(319,140,"28");
	outtextxy(328,153,"Ni");

	//Cu
	outtextxy(354,140,"29");
	outtextxy(363,153,"Cu");

	//Zn
	outtextxy(389,140,"30");
	outtextxy(398,153,"Zn");

	//Y
	outtextxy(74,180,"39");
	outtextxy(83,193,"Y");

	//Zr
	outtextxy(109,180,"40");
	outtextxy(118,193,"Zr");

	//Nb
	outtextxy(144,180,"41");
	outtextxy(153,193,"Nb");

	//Mo
	outtextxy(179,180,"42");
	outtextxy(188,193,"Mo");

	//Tc
	outtextxy(214,180,"43");
	outtextxy(223,193,"Tc");

	//Ru
	outtextxy(249,180,"44");
	outtextxy(258,193,"Ru");

	//Rh
	outtextxy(284,180,"45");
	outtextxy(293,193,"Rh");

	//Pd
	outtextxy(319,180,"46");
	outtextxy(328,193,"Pd");

	//Ag
	outtextxy(354,180,"47");
	outtextxy(363,193,"Ag");

	//Cd
	outtextxy(389,180,"48");
	outtextxy(398,193,"Cd");

	//F-Exeption rectangle
	setfillstyle(SOLID_FILL,13);
	rectangle(70,215,105,255);
	floodfill(80,220,WHITE);
	setfillstyle(SOLID_FILL,5);
	rectangle(70,255,105,295);
	floodfill(80,260,WHITE);
	//F-Exeption-1
	outtextxy(74,230,"57-71");
	//F-Exeption-2
	outtextxy(71,270,"89-103");

	//Hf
	outtextxy(109,220,"72");
	outtextxy(118,233,"Hf");

	//Ta
	outtextxy(144,220,"73");
	outtextxy(153,233,"Ta");

	//W
	outtextxy(179,220,"74");
	outtextxy(188,233,"W");

	//Re
	outtextxy(214,220,"75");
	outtextxy(223,233,"Re");

	//Os
	outtextxy(249,220,"76");
	outtextxy(258,233,"Os");

	//Ir
	outtextxy(284,220,"77");
	outtextxy(293,233,"Ir");

	//Pt
	outtextxy(319,220,"78");
	outtextxy(328,233,"Pt");

	//Au
	outtextxy(354,220,"79");
	outtextxy(363,233,"Au");

	//Hg
	outtextxy(389,220,"80");
	outtextxy(398,233,"Hg");

	//Rf
	outtextxy(109,260,"104");
	outtextxy(118,273,"Rf");

	//Db
	outtextxy(144,260,"105");
	outtextxy(153,273,"Db");

	//Sg
	outtextxy(179,260,"106");
	outtextxy(188,273,"Sg");

	//Bh
	outtextxy(214,260,"107");
	outtextxy(223,273,"Bh");

	//Os
	outtextxy(249,260,"108");
	outtextxy(258,273,"Hs");

	//Mt
	outtextxy(284,260,"109");
	outtextxy(293,273,"Mt");

	//Ds
	outtextxy(319,260,"110");
	outtextxy(328,273,"Ds");

	//Rg
	outtextxy(354,260,"111");
	outtextxy(363,273,"Rg");

	//Cn
	outtextxy(389,260,"112");
	outtextxy(398,273,"Cn");


//--------------------F-Block------------------------------------------------

	outtextxy(280,310,"F-Block");

	//Lanthanides coloring block
	setfillstyle(SOLID_FILL,13);
	rectangle(70,335,595,375);
	floodfill(75,340,WHITE);

	//Actinides coloring block
	setfillstyle(SOLID_FILL,5);
	rectangle(70,375,595,415);
	floodfill(75,380,WHITE);

	//line(70,295,70,335);

	//Loop for boxes
	for(y=335;y<376;y=y+40)
		for(x=70;x<561;x=x+35)
			rectangle(x,y,x+35,y+40);

	//Lanthanides
	outtextxy(0,353,"Lanthanides:");
	//La
	outtextxy(74,340,"57");
	outtextxy(83,353,"La");

	//Ce
	outtextxy(109,340,"58");
	outtextxy(118,353,"Ce");

	//Pr
	outtextxy(144,340,"59");
	outtextxy(153,353,"Pr");

	//Nd
	outtextxy(179,340,"60");
	outtextxy(188,353,"Nd");

	//Pm
	outtextxy(214,340,"61");
	outtextxy(223,353,"Pm");

	//Sm
	outtextxy(249,340,"62");
	outtextxy(258,353,"Sm");

	//Eu
	outtextxy(284,340,"63");
	outtextxy(293,353,"Eu");

	//Gd
	outtextxy(319,340,"64");
	outtextxy(328,353,"Gd");

	//Tb
	outtextxy(354,340,"65");
	outtextxy(363,353,"Tb");

	//Dy
	outtextxy(389,340,"66");
	outtextxy(398,353,"Dy");

	//Ho
	outtextxy(424,340,"67");
	outtextxy(433,353,"Ho");

	//Er
	outtextxy(459,340,"68");
	outtextxy(468,353,"Er");

	//Tm
	outtextxy(494,340,"69");
	outtextxy(503,353,"Tm");

	//Yb
	outtextxy(529,340,"70");
	outtextxy(538,353,"Yb");

	//Lu
	outtextxy(564,340,"71");
	outtextxy(573,353,"Lu");

	//Actinides
	outtextxy(13,393,"Actinides:");
	//Ac
	outtextxy(74,380,"89");
	outtextxy(83,393,"Ac");

	//Th
	outtextxy(109,380,"90");
	outtextxy(118,393,"Th");

	//Pa
	outtextxy(144,380,"91");
	outtextxy(153,393,"Pa");

	//U
	outtextxy(179,380,"92");
	outtextxy(188,393,"U");

	//Np
	outtextxy(214,380,"93");
	outtextxy(223,393,"Np");

	//Pu
	outtextxy(249,380,"94");
	outtextxy(258,393,"Pu");

	//Am
	outtextxy(284,380,"95");
	outtextxy(293,393,"Am");

	//Cm
	outtextxy(319,380,"96");
	outtextxy(328,393,"Cm");

	//Bk
	outtextxy(354,380,"97");
	outtextxy(363,393,"Bk");

	//Cf
	outtextxy(389,380,"98");
	outtextxy(398,393,"Cf");

	//Es
	outtextxy(424,380,"99");
	outtextxy(433,393,"Es");

	//Fm
	outtextxy(459,380,"100");
	outtextxy(468,393,"Fm");

	//Md
	outtextxy(494,380,"101");
	outtextxy(503,393,"Md");

	//No
	outtextxy(529,380,"102");
	outtextxy(538,393,"No");

	//Lr
	outtextxy(564,380,"103");
	outtextxy(573,393,"Lr");

//--------------------------P-Block-------------------------------------------

	outtextxy(490,30,"P-Block");

	//Coloring block
	setfillstyle(SOLID_FILL,1);
	rectangle(420,55,595,295);
	floodfill(425,60,WHITE);

	//Loop for boxes
	for(y=55;y<256;y=y+40)
		for(x=420;x<561;x=x+35)
			rectangle(x,y,x+35,y+40);

	//P-Block Noble gases coloring block
	setfillstyle(SOLID_FILL,12);
	rectangle(595,15,630,295);
	floodfill(600,20,WHITE);

	//P-Block Noble gases loop for boxes
	for(y=15;y<256;y=y+40)
		for(x=595;x<596;x=x+35)
			rectangle(x,y,x+35,y+40);

	//He
	outtextxy(599,20,"2");
	outtextxy(608,33,"He");

	//---------Row1------------
	setfillstyle(SOLID_FILL,2);
	rectangle(420,55,595,95);
	floodfill(425,60,WHITE);
	floodfill(460,60,WHITE);
	floodfill(495,60,WHITE);
	floodfill(530,60,WHITE);
	floodfill(565,60,WHITE);

	//B
	outtextxy(424,60,"5");
	outtextxy(433,73,"B");

	//C
	outtextxy(459,60,"6");
	outtextxy(468,73,"C");

	//N
	outtextxy(494,60,"7");
	outtextxy(503,73,"N");

	//O
	outtextxy(529,60,"8");
	outtextxy(538,73,"O");

	//F
	outtextxy(564,60,"9");
	outtextxy(573,73,"F");

	//Ne
	outtextxy(599,60,"10");
	outtextxy(608,73,"Ne");

	//---------Row2----------
	setfillstyle(SOLID_FILL,2);
	rectangle(455,95,595,135);
	floodfill(460,100,WHITE);
	floodfill(495,100,WHITE);
	floodfill(530,100,WHITE);
	floodfill(565,100,WHITE);

	//Al
	outtextxy(424,100,"13");
	outtextxy(433,113,"Al");

	//Si
	outtextxy(459,100,"14");
	outtextxy(468,113,"Si");

	//P
	outtextxy(494,100,"15");
	outtextxy(503,113,"P");

	//S
	outtextxy(529,100,"16");
	outtextxy(538,113,"S");

	//Cl
	outtextxy(564,100,"17");
	outtextxy(573,113,"Cl");

	//Ar
	outtextxy(599,100,"18");
	outtextxy(608,113,"Ar");

	//--------Row3------------
	setfillstyle(SOLID_FILL,2);
	rectangle(490,135,595,175);
	floodfill(495,140,WHITE);
	floodfill(530,140,WHITE);
	floodfill(565,140,WHITE);

	//Ga
	outtextxy(424,140,"31");
	outtextxy(433,153,"Ga");

	//Ge
	outtextxy(459,140,"32");
	outtextxy(468,153,"Ge");

	//As
	outtextxy(494,140,"33");
	outtextxy(503,153,"As");

	//Se
	outtextxy(529,140,"34");
	outtextxy(538,153,"Se");

	//Br
	outtextxy(564,140,"35");
	outtextxy(573,153,"Br");

	//Kr
	outtextxy(599,140,"36");
	outtextxy(608,153,"Kr");

	//----------Row4----------
	setfillstyle(SOLID_FILL,2);
	rectangle(525,175,595,215);
	floodfill(530,180,WHITE);
	floodfill(565,180,WHITE);

	//In
	outtextxy(424,180,"49");
	outtextxy(433,193,"In");

	//Sn
	outtextxy(459,180,"50");
	outtextxy(468,193,"Sn");

	//Sb
	outtextxy(494,180,"51");
	outtextxy(503,193,"Sb");

	//Te
	outtextxy(529,180,"52");
	outtextxy(538,193,"Te");

	//I
	outtextxy(564,180,"53");
	outtextxy(573,193,"I");

	//Xe
	outtextxy(599,180,"54");
	outtextxy(608,193,"Xe");

	//---------Row5------------
	setfillstyle(SOLID_FILL,2);
	rectangle(560,215,595,255);
	floodfill(565,220,WHITE);

	//Tl
	outtextxy(424,220,"81");
	outtextxy(433,233,"Tl");

	//Pb
	outtextxy(459,220,"82");
	outtextxy(468,233,"Pb");

	//Bi
	outtextxy(494,220,"83");
	outtextxy(503,233,"Bi");

	//Po
	outtextxy(529,220,"84");
	outtextxy(538,233,"Po");

	//At
	outtextxy(564,220,"85");
	outtextxy(573,233,"At");

	//Rn
	outtextxy(599,220,"86");
	outtextxy(608,233,"Rn");

	//---------Row6------------

	//Uut
	outtextxy(423,260,"113");
	outtextxy(430,273,"Uut");

	//Fl
	outtextxy(458,260,"114");
	outtextxy(468,273,"Fl");

	//Uup
	outtextxy(493,260,"115");
	outtextxy(500,273,"Uup");

	//Lv
	outtextxy(528,260,"116");
	outtextxy(535,273,"Lv");

	//Uus
	outtextxy(563,260,"117");
	outtextxy(570,273,"Uus");

	//Uuo
	outtextxy(598,260,"118");
	outtextxy(605,273,"Uuo");

//-----------------------------Appearances-----------------------------------

	rectangle(33,420,606,470);

	//Alkali Metals
	setfillstyle(SOLID_FILL,4);
	rectangle(37,425,102,465);
	floodfill(42,440,WHITE);
	outtextxy(47,435,"Alkali");
	outtextxy(47,445,"Metals");

	//Alkaline Earth Metals
	setfillstyle(SOLID_FILL,6);
	rectangle(107,425,172,465);
	floodfill(110,440,WHITE);
	outtextxy(117,430,"Alkaline");
	outtextxy(117,440,"Earth");
	outtextxy(117,450,"Metals");

	//Transition Metals
	setfillstyle(SOLID_FILL,9);
	rectangle(177,425,247,465);
	floodfill(180,440,WHITE);
	outtextxy(187,435,"Transition");
	outtextxy(187,445,"Metals");

	//Poor Metals
	setfillstyle(SOLID_FILL,1);
	rectangle(252,425,312,465);
	floodfill(255,440,WHITE);
	outtextxy(262,435,"Poor");
	outtextxy(262,445,"Metals");

	//Other Non-metals
	setfillstyle(SOLID_FILL,2);
	rectangle(317,425,387,465);
	floodfill(325,440,WHITE);
	outtextxy(327,435,"Other");
	outtextxy(327,445,"Non-metals");

	//Noble gases
	setfillstyle(SOLID_FILL,12);
	rectangle(392,425,447,465);
	floodfill(395,440,WHITE);
	outtextxy(402,435,"Noble");
	outtextxy(402,445,"gases");

	//Lanthanoids
	setfillstyle(SOLID_FILL,13);
	rectangle(452,425,527,465);
	floodfill(455,440,WHITE);
	outtextxy(459,438,"Lanthanoids");

	//Actinoids
	setfillstyle(SOLID_FILL,5);
	rectangle(532,425,602,465);
	floodfill(535,440,WHITE);
	outtextxy(542,438,"Actinoids");
}
