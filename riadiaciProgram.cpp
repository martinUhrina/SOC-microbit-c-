#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void HS();
void pingPong();
void lod();
void kpm();
void kalkulacka();
void kompas();
void trafStred();
void strelba();
int v= 0;

int main()
{
	int volba;
	do
	{
		HS();
		cin>>volba;
		getchar();
		switch(volba)
		{
			case 1:pingPong();break;
			case 2:lod();break;
			case 3:kpm();break;
			case 4:kalkulacka();break;
			case 5:kompas();break;
			case 6:trafStred();break;
			case 7:strelba();break;
			default:;
		}
	}
	while(volba!=0);
	ifstream SRC("C:\\Socka\\freee.txt",std::ios::binary);
	ofstream dst("E:\\new.hex",::std::ios::binary);
	dst<<SRC.rdbuf();
	cout<<endl<<"		Dovidenia"<<endl;
	return 0;
}

void HS()
{
	system("cls");
	cout<<"			***Riadiaci program pre microbit***"<<endl<<endl<<endl;
	cout<<"		MENU"<<endl<<endl;
	cout<<"		1. Ping Pong"<<endl;
	cout<<"		2. Lod"<<endl;
	cout<<"		3. Kamen, papier, noznice"<<endl;
	cout<<"		4. Kalkulacka"<<endl;
	cout<<"		5. Kompas"<<endl;
	cout<<"		6. TrafStred"<<endl;
	cout<<"		7. Strelba"<<endl;
	cout<<"		0. koniec"<<endl<<endl;
	cout<<"		Volba: ";
}

void pingPong()
{
	system("cls");
	cout<<"			**Ping Pong**"<<endl<<endl;
	cout<<"Zvolili ste si hru ping-pong"<<endl;
	cout<<"Pravidla: "<<endl;
	cout<<"1. Hra sa sklada z 2 objektov, hrac a lopticka"<<endl;
	cout<<"2. Hraca ovladate vy pomocou tlacitok A a B po vodorovnej osi"<<endl;
	cout<<"3. Lopticku sa pohybuje vsetkymi smermi a odraza sa od stien "<<endl;
	cout<<"4. Tvojou ulohou je odrazat lopticku pomocou hraca postavenim sa do cesty lopticke"<<endl;
	cout<<"5. Ak odrazis lopticku skore sa ti zvisi ak nie hra pre teba konci"<<endl<<endl;
	cout<<endl<<"Ak si pripraveni, zadaj 1"<<endl;
	cin>>v;
	if (v == 1){
		getchar();
		ifstream SRC("C:\\Socka\\pingpong.txt",std::ios::binary);
		ofstream dst("E:\\new.hex",::std::ios::binary);
		dst<<SRC.rdbuf();
		}
	cout<<endl<<"Enter";
	getchar(); 	
}
void lod()
{
	system("cls");
	cout<<"			**Lod**"<<endl<<endl;
	cout<<"Zvolili ste si hru lod"<<endl;
	cout<<"Pravidla: "<<endl;
	cout<<"1. Hra sa sklada z 3 objektov, lod, strela a neprietel"<<endl;
	cout<<"2. Lod ovladate vy pomocou talcidiel A a B po vodorovnej osi"<<endl;
	cout<<"3. Strelu vytvorite stlacenim A a B sucasne, strela sa vytvori pred lodou"<<endl;
	cout<<"4. Nepriatelia sa vytvaraju nahodne "<<endl;
	cout<<"5. Ak zasiahnete nepriatela strelou vase skore sa zvysi"<<endl;
	cout<<"6. Ak nepriatel zasiahne vasu lod, hra pre vas konci "<<endl<<endl;
	cout<<"Ak ste pripraveni, zadajte 1"<<endl;
	cin>>v;
	if (v==1){
		getchar();
		ifstream SRC("C:\\Socka\\lod.txt",std::ios::binary);
		ofstream dst("E:\\new.hex",::std::ios::binary);
		dst<<SRC.rdbuf();
	}
	cout<<endl<<"Enter";
	getchar();
}

void kalkulacka()
{
	system("cls");
	cout<<"			**Kalkulacka**"<<endl<<endl;
	cout<<"Zvolili ste si funkciu kalkulacka"<<endl;
	cout<<"Kalkulacka sluzi na operacie +, -, *, / a odmocnina "<<endl;
	cout<<"Pouzitie:"<<endl;
	cout<<"1. Tlacitko A sluzi na zmenu cisla alebo operacie"<<endl;
	cout<<"2. Tlacitko B sluzi na posun"<<endl;
	cout<<"3. Po dokonceni prikladu mozete stlacit A a B sucasne a zobrazi sa vam cely priklad s vysledkom "<<endl<<endl;
	cout<<"AK chcete spustit kalkulacku, zadajte 1"<<endl;
	cin>>v;
	if(v==1)
	{
		getchar();
		ifstream SRC("C:\\Socka\\kalkulacka.txt",std::ios::binary);
		ofstream dst("E:\\new.hex",::std::ios::binary);
		dst<<SRC.rdbuf();
	}
	cout<<endl<<"Enter";
	getchar();
}
void kompas()
{
	system("cls");
	cout<<"			**Kompas**"<<endl<<endl;
	cout<<"Zvolili ste kompas "<<endl;
	cout<<"Pouzitie: "<<endl;
	cout<<"1. Microbit sa potrebuje zorientovat"<<endl;
	cout<<"2. Snazte sa microbit otacat tak aby svietili vsetky ledky"<<endl;
	cout<<"3. Ak sa vam to podarilo led display zhansne a vasou ulohou je najst sever"<<endl;
	cout<<"4. Nastavne svoj microbit na sever a stlacte A a B sucasne"<<endl;
	cout<<"5. Vypis vas upozorni ci sa vam to podarilo"<<endl;
	cout<<"3. Ochvilu by sa vam mal zobrazit S, J, V, Z"<<endl;
	cout<<"4. S = sever, J = juh, V = vychod, Z = zapad"<<endl<<endl;
	cout<<"Ak chcete kompas spustit, zadajte 1"<<endl<<endl;;
	cin>>v;
	if(v == 1)
	{	
		getchar();
		ifstream SRC("C:\\Socka\\kompas.txt",std::ios::binary);
		ofstream dst("E:\\new.hex",::std::ios::binary);
		dst<<SRC.rdbuf();
	}
	cout<<endl<<"Enter";
	getchar();
}

void trafStred()
{
	system("cls");
	cout<<"		**Traf Stred**"<<endl<<endl;
	cout<<"Zvoli ste hru "<<endl;
	cout<<"Pravidla: "<<endl;
	cout<<"1. Hra obsahuje 2 pohyblive objekty"<<endl;
	cout<<"2. Uloha hraca je stalcit tlacitko ked je objekt v strede "<<endl;
	cout<<"3. Ak je objek pohybujuci sa horizontalne v strede, pouzite tlacitko A"<<endl;
	cout<<"4. Ak je objek pohybujuci sa vertikalne v strede, pouzite tlacitko B"<<endl;
	cout<<"5. Ak su oba objekty v strede sucasne, hrac moze stlacit kombinaciu A+B a jeho skore sa zvysi o 5 bodov"<<endl;
	cout<<"6. Ak hrac netrafi, hra pre neho konci"<<endl<<endl;
	cout<<"Ak ste pripraveni, zadajte 1"<<endl;
	cin>>v;
	if(v == 1)
	{
	
		getchar();
		ifstream SRC("C:\\Socka\\trafstred.txt",std::ios::binary);
		ofstream dst("E:\\new.hex",::std::ios::binary);
		dst<<SRC.rdbuf();
	}
	cout<<endl<<"Enter";
	getchar();
}

void kpm()
{
	system("cls");
	cout<<"		**Kamen Papier Noznice**"<<endl<<endl;
	cout<<"Zvolili ste hru Kamen papier noznice"<<endl;
	cout<<"Pravidla: "<<endl;
	cout<<"1. Hra je urcena pre 2 hracov"<<endl;
	cout<<"2. Prvy hrac je oznaceni P1 a druhy hrac ma oznacenie P2"<<endl;
	cout<<"3. Obaja hraci maju moznost vyberu medzi 3 moznostami"<<endl;
	cout<<"4. Tlacidlo A je kamen, tlacitlo B je papier a ked microbit otocite o 180 stupnov zadate noznice"<<endl;
	cout<<"5. Pred zadanim je hrac vzdy vyzvani vypisom jeho oznacenia"<<endl;
	cout<<"6. Ak obaja hraci zadaju to iste, bod neziska nikto"<<endl;
	cout<<"7. Po zadani oboch hracov, sa vypise oznacenie hraca, ktory ziskal bod"<<endl;
	cout<<"8. Hra sa hra na 3 body"<<endl<<endl;
	cout<<endl<<"Ak ste pripraveni, zadajte 1"<<endl;
	cin>>v;
	if (v == 1)
	{
		getchar();
		ifstream SRC("C:\\Socka\\kpn.txt",std::ios::binary);
		ofstream dst("E:\\new.hex",::std::ios::binary);
		dst<<SRC.rdbuf();
	}
	cout<<"Enter";
	getchar();
}

void strelba()
{
	system("cls");
	cout<<"		**Strelba**"<<endl<<endl;
	cout<<"Zvolili ste hru strelba"<<endl;
	cout<<"Pravidla: "<<endl;
	cout<<"1. Hra sa sklada z 2 objektov"<<endl;
	cout<<"2. Jeden objekt je strelec, nachadza sa na spodnej casti a neustale sa pohybuje"<<endl;
	cout<<"3. Druhy objekt je terc, ten je na hornej casti a nehybe sa, po zostreleni sa obnovi na nahodnom mieste pred strelcom"<<endl;
	cout<<"4. Ulohou hraca je stlaci tlacidlo A ak sa strelec nachadza pod tercom"<<endl;
	cout<<"5. AK trafi skore sa zvysi, ak nie hra pre neho konci"<<endl;
	cout<<"6. S pribudanim skore sa zvysuje aj rychlost strelca"<<endl<<endl;
	cout<<endl<<"Ak ste pripraveni, zadajte 1"<<endl;
	cin>>v;
	if (v == 1)
	{
		getchar();
		ifstream SRC("C:\\Socka\\strelba.txt",std::ios::binary);
		ofstream dst("E:\\new.hex",::std::ios::binary);
		dst<<SRC.rdbuf();
	}
	cout<<"Enter";
	getchar();	
}
