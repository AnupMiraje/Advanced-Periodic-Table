#include<cstdio>
#include<climits>
#include<cstdlib>
#include<iostream>

using namespace std;

Element element_group[118]={
{1,"hydrogen","H",1.00794,1,1,"S",20.13,13.86,0.0899,53,14300,1,"colourless","gas","non-metal",168.128},
{3,"lithium","Li",6.941,2,1,"S",453.54,1615,535,167,3570,1,"silver","solid","alkali-metal",821.47},
{11,"sodium","Na",22.9898,3,1,"S",370.72,1156,968,190,1230,1,"silver","solid","alkali-metal",21.584},
{19,"potassium","K",39.0983,4,1,"S",336.38,1032,856,243,757,1,"silver","solid","alkali-metal",92.442},
{37,"rubidium","Rb",85.4678,5,1,"S",312.31,961,1532,265,364,1,"silver","solid","alkali-metal",104512},
{55,"cesium","Cs",132.905,6,1,"S",301.44,944,1879,298,242,1,"golden","solid","alkali-metal",521140},
{87,"francium","Fr",223,7,1,"S",9999,9999,9999,9999,9999,1,"silver","solid","alkali-metal",9999},
{4,"beryllium","Be",9.01218,2,2,"S",1560,2743,1848,112,1820,2,"grey","solid","alkaline-earth-metal",5904.36},
{12,"magnesium","Mg",24.305,3,2,"S",923,1363,1738,145,1020,2,"silver","solid","alkaline-earth-metal",16.046},
{20,"calcium","Ca",40.078,4,2,"S",1115,1757,1550,194,631,2,"silver","solid","alkaline-earth-metal",42.103},
{38,"strontium","Sr",87.62,5,2,"S",1050,1655,2630,219,300,2,"silver","solid","alkaline-earth-metal",38.34},
{56,"barium","Ba",137.327,6,2,"S",1000,2143,3510,253,205,2,"silver","solid","alkaline-earth-metal",3905},
{88,"radium","Ra",226,7,2,"S",973,2010,5000,9999,92,2,"silver","solid","alkaline-earth-metal",9999},
{21,"scandium","Sc",44.9559,4,3,"D",1814,3103,2985,184,567,3,"silver","solid","transition-metal",106500},
{39,"yttrium","Y",88.9059,5,3,"D",1799,3618,4472,212,298,3,"silver","solid","transition-metal",248.5},
{57,"lanthanum","La",138.906,6,3,"F",1193,3737,6146,240,195,3,"silver","solid","lanthanide",49.7},
{58,"cerium","Ce",140.116,6,3,"F",1071,3633,6689,235,192,4,"grey","solid","lanthanide",49.7},
{59,"praseodymium","Pr",140.908,6,3,"F",1204,3563,6640,247,193,3,"green","solid","lanthanide",603.5},
{60,"neodymium","Nd",144.24,6,3,"F",1294,3373,7010,206,190,3,"silver","solid","lanthanide",426},
{61,"promethium","Pm",145,6,3,"F",1373,3273,7264,205,180,3,"silver","solid","lanthanide",9999},
{62,"samarium","Sm",150.36,6,3,"F",1345,2076,7353,238,196,3,"silver","solid","lanthanide",101.885},
{63,"europium","Eu",151.964,6,3,"F",1095,1800,5244,231,182,3,"silver","solid","lanthanide",1831.8},
{64,"gadolinium","Gd",157.25,6,3,"F",1586,3523,7901,233,240,3,"silver","solid","lanthanide",390.5},
{65,"terbium","Tb",158.925,6,3,"F",1629,3503,8219,225,182,3,"silver","solid","lanthanide",3905},
{66,"dysprosium","Dy",162.5,6,3,"F",1685,2840,8551,228,167,3,"silver","solid","lanthanide",2485},
{67,"holmium","Ho",164.93,6,3,"F",1747,2973,8795,226,165,3,"silver","solid","lanthanide",9940},
{68,"erbium","Er",167.259,6,3,"F",1770,3141,9066,226,168,3,"silver","solid","lanthanide",674.5},
{69,"thulium","Tm",168.934,6,3,"F",1818,2223,9321,222,160,3,"silver","solid","lanthanide",44020},
{70,"ytterbium","Yb",173.04,6,3,"F",1092,1469,6570,222,154,3,"silver","solid","lanthanide",11360},
{71,"lutetium","Lu",174.967,6,3,"D",1936,3675,9841,217,154,3,"silver","solid","lanthanide",44509.9},
{89,"Actinium","Ac",227,7,3,"F",1323,3473,10070,9999,120,3,"silver","solid","actinide",9999},
{90,"thorium","Th",232.038,7,3,"F",2023,5093,11724,9999,118,4,"silver","solid","actinide",1249.6},
{91,"protactinium","Pa",231.036,7,3,"F",1845,4273,15370,9999,99.1,5,"silver","solid","actinide",9999},
{92,"uranium","U",238.029,7,3,"F",1408,4200,19050,9999,116,6,"silver","solid","actinide",410.096},
{93,"neptunium","Np",237,7,3,"F",917,4273,20450,9999,9999,6,"silver","solid","actinide",9999},
{94,"plutonium","Pu",244,7,3,"F",913,3503,19816,9999,9999,6,"silver","solid","actinide",9999},
{95,"americium","Am",243,7,3,"F",1449,2284,9999,9999,9999,4,"silver","solid","actinide",9999},
{96,"curium","Cm",247,7,3,"F",1618,3383,13510,9999,9999,4,"silver","solid","actinide",9999},
{97,"berkelium","Bk",247,7,3,"F",1323,9999,14780,9999,9999,4,"silver","solid","actinide",9999},
{98,"californium","Cf",251,7,3,"F",1173,9999,15100,9999,9999,4,"-","solid","actinide",9999},
{99,"einsteinium","Es",252,7,3,"F",1133,9999,9999,9999,9999,4,"-","solid","actinide",9999},
{100,"fermium","Fm",257,7,3,"F",18000,9999,9999,9999,9999,3,"-","-","actinide",9999},
{101,"mendelevium","Md",258,7,3,"F",1100,9999,9999,9999,9999,3,"-","-","actinide",9999},
{102,"nobelium","No",259,7,3,"F",1100,9999,9999,9999,9999,3,"-","-","actinide",9999},
{103,"lawrencium","Lr",262,7,3,"D",1900,9999,9999,9999,9999,3,"-","-","actinide",9999},
{22,"titanium","Ti",47.867,4,4,"D",1941,3560,4507,176,520,4,"silver","solid","transition-metal",26.767},
{40,"zirconium","Zr",91.224,5,4,"D",2128,4682,6511,206,278,4,"grey","solid","transition-metal",164.294},
{72,"hafnium","Hf",178.49,6,4,"D",2506,4876,13310,208,144,4,"silver","solid","transition-metal",10039.4},
{104,"rutherfordium","Rf",261,7,4,"D",9999,9999,9999,9999,9999,4,"-","-","transition-metal",9999},
{23,"vanadium","V",50.9415,4,5,"D",2183,3680,6110,171,489,3,"silver","solid","transition-metal",160.46},
{41,"niobium","Nb",92.9064,5,5,"D",2750,5017,8570,198,265,5,"silver","solid","transition-metal",298.2},
{73,"tantalum","Ta",180.948,6,5,"D",3290,5731,16650,200,140,5,"grey","solid","transition-metal",1689.8},
{105,"dubnium","Db",268,7,5,"D",9999,9999,9999,9999,9999,5,"-","-","transition-metal",9999},
{24,"chromium","Cr",51.9961,4,6,"D",2180,2944,7140,166,448,2,"silver","solid","transition-metal",54.244},
{42,"molybdenum","Mo",95.94,5,6,"D",2896,4912,10280,190,251,4,"silver","solid","transition-metal",113.6},
{74,"tungsten","W",183.84,6,6,"D",3695,5828,19250,193,132,6,"grey","solid","transition-metal",181.192},
{106,"seaborgium","Sg",271,7,6,"D",9999,9999,9999,9999,9999,6,"-","-","transition-metal",9999},
{25,"manganese","Mn",54.938,4,7,"D",1519,2334,7470,161,479,2,"pink","solid","transition-metal",14.626},
{43,"technetium","Tc",98,5,7,"D",2430,4538,11500,183,63,6,"silver","solid","transition-metal",9999},
{75,"rhenium","Re",186.207,6,7,"D",3459,5869,21020,188,137,7,"silver","solid","transition-metal",11608.5},
{107,"bohrium","Bh",270,7,7,"D",9999,9999,9999,9999,9999,7,"-","-","transition-metal",9999},
{26,"iron","Fe",55.845,4,8,"D",1811,3134,7874,156,449,2,"silver","solid","transition-metal",0.568},
{44,"ruthenium","Ru",101.07,5,8,"D",2607,4423,12370,178,238,3,"silver","solid","transition-metal",21683.4},
{76,"osmium","Os",190.23,6,8,"D",3306,5285,22610,185,130,6,"blue","solid","transition-metal",91306},
{108,"hassium","Hs",269,7,8,"D",9999,9999,9999,9999,9999,9999,"-","-","transition-metal",9999},
{27,"cobalt","Co",58.9332,4,9,"D",1768,3200,8900,152,421,2,"blue","solid","transition-metal",422.45},
{45,"rhodium","Rh",102.906,5,9,"D",2237,3968,12450,173,240,3,"silver","solid","transition-metal",545564},
{77,"iridium","Ir",192.217,6,9,"D",2739,4701,22650,180,131,6,"silver","solid","transition-metal",221421},
{109,"meitnerium","Mt",278,7,9,"D",9999,9999,9999,9999,9999,9999,"-","-","transition-metal",9999},
{28,"nickel","Ni",58.6934,4,10,"D",1728,3186,8908,149,445,2,"silver","solid","transition-metal",65.249},
{46,"palladium","Pd",106.42,5,10,"D",1827.9,3236,12023,169,240,4,"silver","solid","transition-metal",244247},
{78,"platinum","Pt",195.078,6,10,"D",2041.3,98,21090,177,133,6,"blue","solid","transition-metal",188093},
{110,"darmstadtium","Ds",281,7,10,"D",9999,9999,9999,9999,9999,9999,"-","-","transition-metal",9999},
{29,"copper","Cu",63.546,4,11,"D",1357.62,3200,8920,145,384.4,1,"brown","solid","transition-metal",41.89},
{47,"silver","Ag",107.868,5,11,"D",1234.78,2435,10490,165,235,2,"silver","solid","transition-metal",3280.2},
{79,"gold","Au",196.967,6,11,"D",1337.18,3129,19300,174,129.1,3,"golden","solid","transition-metal",271142},
{111,"roentgenium","Rg",281,7,11,"D",9999,9999,9999,9999,9999,9999,"-","-","transition-metal",9999},
{30,"zinc","Zn",65.409,4,12,"D",692.53,1180,7140,142,388,2,"blue","solid","transition-metal",20.093},
{48,"cadmium","Cd",112.411,5,12,"D",594.07,1040,8650,161,230,2,"blue","solid","transition-metal",14.058},
{80,"mercury","Hg",200.59,6,12,"D",234.17,629.73,13534,171,139.5,2,"silver","liquid","transition-metal",272.924},
{112,"copernicium","Cn",285,7,12,"D",9999,9999,9999,9999,9999,9999,"-","-","transition-metal",9999},
{5,"boron","B",10.811,2,13,"P",2348,4273,2460,87,1030,3,"black","solid","non-metal",16940.6},
{13,"aluminum","Al",26.9815,3,13,"P",933.32,2792,2700,118,904,3,"silver","solid","poor-metal",13.561},
{31,"gallium","Ga",69.723,4,13,"P",302.76,2477,5904,136,371,3,"silver","solid","poor-metal",1975.22},
{49,"indium","In",114.818,5,13,"P",429.6,2345,7310,156,233,3,"silver","solid","poor-metal",2425.36},
{81,"thallium","Tl",204.383,6,13,"P",577,1746,11850,156,129,3,"silver","solid","poor-metal",52540},
{113,"ununtrium","Unt",286,7,13,"P",9999,9999,9999,9999,9999,9999,"-","-","poor-metal",9999},
{6,"carbon","C",12.0107,2,14,"P",3823,4300,2260,67,710,4,"black","solid","non-metal",170.4},
{14,"silicon","Si",28.0855,3,14,"P",1687,3173,2330,111,710,4,"silver","solid","non-metal",13.561},
{32,"germanium","Ge",72.64,4,14,"P",1211.3,3097,5323,125,321.4,4,"grey","solid","poor-metal",13014.3},
{50,"tin","Sn",118.71,5,14,"P",504.93,2875,7310,145,217,4,"silver","solid","poor-metal",142},
{82,"lead","Pb",207.2,6,14,"P",600.46,2022,11340,154,127,4,"blue","solid","poor-metal",16.259},
{114,"flerovium","Fl",289,7,14,"P",9999,9999,9999,9999,9999,9999,"-","-","poor-metal",9999},
{7,"nitrogen","N",14.0067,2,15,"P",62.9,77.21,1.251,56,1040,3,"colourless","gas","non-metal",19.667},
{15,"phosphorus","P",30.9738,3,15,"P",317.2,553.5,1823,98,769.7,3,"colourless","solid","non-metal",2130},
{33,"arsenic","As",74.9216,4,15,"P",1090,667,5727,114,328,3,"grey","solid","non-metal",12.354},
{51,"antimony","Sb",121.76,5,15,"P",903.63,1860,6697,133,207,5,"silver","solid","poor-metal",50.055},
{83,"bismuth","Bi",208.98,6,15,"P",544.3,1837,9780,143,122,5,"silver","solid","poor-metal",73.414},
{115,"ununpentium","Unp",289,7,15,"P",9999,9999,9999,9999,9999,9999,"-","-","poor-metal",9999},
{8,"oxygen","O",15.9994,2,16,"P",54.7,90.1,1.429,48,919,2,"colourless","gas","non-metal",4.544},
{16,"sulphur","S",32.065,3,16,"P",388.21,717.72,1960,88,705,2,"yellow","solid","non-metal",0.71},
{34,"selenium","Se",78.96,4,16,"P",494,958,4819,103,321.2,2,"red","solid","non-metal",215.627},
{52,"tellurium","Te",127.6,5,16,"P",722.51,1261,6240,123,201,6,"silver","solid","non-metal",395.328},
{84,"polonium","Po",209,6,16,"P",527,1235,9196,135,120,6,"silver","solid","poor-metal",9999},
{116,"livermorium","Lv",293,7,16,"P",9999,9999,9999,9999,9999,9999,"-","-","poor-metal",9999},
{9,"fluorine","F",18.9984,2,17,"P",53.4,84.88,1.696,42,824,1,"yellow","gas","non-metal",13490},
{17,"chlorine","Cl",35.453,3,17,"P",171.5,238.96,3.214,79,478.2,1,"yellow","gas","non-metal",10.65},
{35,"bromine","Br",79.904,4,17,"P",265.7,332,3120,94,947.3,1,"brown","liquid","non-metal",31.24},
{53,"iodine","I",126.904,5,17,"P",386.7,457.3,4940,115,429,7,"violet","solid","non-metal",198.8},
{85,"astatine","At",210,6,17,"P",575,609.8,6350,127,9999,7,"silver","solid","non-metal",9999},
{117,"ununseptium","Uns",294,7,17,"P",9999,9999,9999,9999,9999,9999,"-","-","-",9999},
{2,"helium","He",4.0026,1,18,"P",0.8,4.07,0.1785,31,5193.1,0,"colourless","gas","noble-gas",286.769},
{10,"neon","Ne",20.1797,2,18,"P",24.41,26.92,0.9,38,1030,0,"colourless","gas","noble-gas",4472.29},
{18,"argon","Ar",39.948,3,18,"P",83.7,87.2,1.784,71,520.33,0,"colourless","gas","noble-gas",18.176},
{36,"krypton","Kr",83.798,4,18,"P",115.64,119.78,3.75,88,248.05,0,"colourless","gas","noble-gas",9.94},
{54,"xenon","Xe",131.293,5,18,"P",161.2,165,5.9,108,158.32,0,"colourless","gas","noble-gas",65.32},
{86,"radon","Rn",222,6,18,"P",202,211.3,9.73,120,93.65,0,"colourless","gas","noble-gas",9999},
{118,"ununoctium","Uno",294,7,18,"P",9999,9999,9999,9999,9999,9999,"-","-","noble-gas",9999}
};
