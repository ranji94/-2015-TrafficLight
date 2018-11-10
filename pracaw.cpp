//---------------------------------------------------------------------------
/*-----------------------------------------
Jêdrzej Piasecki grupa E4Y3S1  Mtp2
Praca w³asna - sygnalizacja œwietlna
30.04.2015

*/
#include <vcl.h>
#pragma hdrstop

#include "pracaw.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int WysokoscWskaznika, SzerokoscWskaznika, Wys2, Sz2, cze, zie, mig; //deklaracja
int x=5;
bool wlacz=false;
bool miganie=false;
bool konieccze=false;
bool check=true;
int a=0;
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
DoubleBuffered=True;
	Sygnalizator=new Graphics::TBitmap;
	Syg2=new Graphics::TBitmap;
			// Ustawianie wymiarów //
		WysokoscWskaznika=Image1->Height;
		SzerokoscWskaznika=Image1->Width;
		Wys2=Image2->Height;
		Sz2=Image2->Width;
		Sygnalizator->Width=SzerokoscWskaznika;
		Sygnalizator->Height=WysokoscWskaznika;
		Syg2->Width=Sz2;
		Syg2->Height=Wys2;
		// -- funkcje wlasne --//
	wywolaj();
	czerwony();
	zielony();
	Image3->Visible=false;
	Image4->Visible=false;
	// -- przypisanie -- //
		ProstSygnalizator.left=0;
		ProstSygnalizator.top=0;
		ProstSygnalizator.right=WysokoscWskaznika;
		ProstSygnalizator.bottom=SzerokoscWskaznika;
		ProstSyg2.left=0;
		ProstSyg2.top=265;
		ProstSyg2.right=2*Wys2;
		ProstSyg2.bottom=2*Sz2;
		// -----------------------

		Image1->Canvas->CopyRect(ProstSygnalizator,Sygnalizator->Canvas,ProstSygnalizator);
		Image2->Canvas->CopyRect(ProstSyg2,Syg2->Canvas,ProstSyg2);
}

void TForm1::migaj()
{
	if (Image4->Visible==true)
	{
	Image4->Visible=false;
	}
	else
	{
	Image4->Visible=true;
	}
}

void TForm1::wywolaj()
{
	  Timer1->Enabled=false;
	  Timer2->Enabled=false;
	  Timer3->Enabled=false;
	  Sygnalizator->Canvas->Brush->Color=RGB(0,0,0);
	  Sygnalizator->Canvas->Rectangle(0,0,Image1->Width,Image1->Height);
	  Sygnalizator->Canvas->Pen->Color=RGB(255,255,255);
	  Sygnalizator->Canvas->Pen->Width=4;
	  Sygnalizator->Canvas->Brush->Color=RGB(0,0,0);
	  Sygnalizator->Canvas->Ellipse(25,25,240,240);


	  Image2->Canvas->Brush->Color=RGB(0,0,0);
	  Image2->Canvas->Rectangle(0,0,Image1->Width,Image1->Height);
	  Image2->Canvas->Pen->Color=RGB(255,255,255);
	  Image2->Canvas->Pen->Width=4;
	  Image2->Canvas->Brush->Color=RGB(0,0,0);
	  Image2->Canvas->Ellipse(25,25,240,240);

	  Image3->Canvas->Brush->Color=RGB(0,0,0);
	  Image3->Canvas->Rectangle(0,0,Image1->Width,Image1->Height);
	  Image3->Canvas->Pen->Color=RGB(255,255,255);
	  Image3->Canvas->Pen->Width=4;
	  Image3->Canvas->Brush->Color=RGB(0,0,0);
	  Image3->Canvas->Ellipse(25,25,240,240);

	  Image4->Canvas->Brush->Color=RGB(0,0,0);
	  Image4->Canvas->Rectangle(0,0,Image1->Width,Image1->Height);
	  Image4->Canvas->Pen->Color=RGB(255,255,255);
	  Image4->Canvas->Pen->Width=4;
	  Image4->Canvas->Brush->Color=RGB(0,0,0);
	  Image4->Canvas->Ellipse(25,25,240,240);

	   // szarak na zielonym polu
	  Image2->Canvas->Pen->Color=RGB(80,80,80);
	  Image2->Canvas->Brush->Color=RGB(80,80,80);
	  Image2->Canvas->Rectangle(125,90,145,150);
	  // glowica
	  Image2->Canvas->Ellipse(115,40,155,80);
	  // lramie
	  TPoint lramie[4];
	  lramie[0]. x=115;
	  lramie[0]. y=89;
	  lramie[1]. x=105;
	  lramie[1]. y=83;
	  lramie[2]. x=93;
	  lramie[2]. y=102;
	  lramie[3]. x=103;
	  lramie[3]. y=110;
	  Image2->Canvas->Polygon(lramie, 3);
	  // lreka
	  TPoint lreka[4];
	  lreka[0]. x=103;
	  lreka[0]. y=110;
	  lreka[1]. x=93;
	  lreka[1]. y=102;
	  lreka[2]. x=60;
	  lreka[2]. y=120;
	  lreka[3]. x=65;
	  lreka[3]. y=130;
	  Image2->Canvas->Polygon(lreka, 3);
	  // pramie
	  TPoint pramie[4];
	  pramie[0]. x=155;
	  pramie[0]. y=89;
	  pramie[1]. x=165;
	  pramie[1]. y=83;
	  pramie[2]. x=185;
	  pramie[2]. y=115;
	  pramie[3]. x=170;
	  pramie[3]. y=115;
	  Image2->Canvas->Polygon(pramie, 3);
	  // preka
	  TPoint preka[4];
	  preka[0]. x=185;
	  preka[0]. y=115;
	  preka[1]. x=170;
	  preka[1]. y=115;
	  preka[2]. x=153;
	  preka[2]. y=140;
	  preka[3]. x=163;
	  preka[3]. y=145;
	  Image2->Canvas->Polygon(preka, 3);
	  // lnoga
	  TPoint lnoga[4];
	  lnoga[0]. x=120;
	  lnoga[0]. y=155;
	  lnoga[1]. x=128;
	  lnoga[1]. y=160;
	  lnoga[2]. x=95;
	  lnoga[2]. y=205;
	  lnoga[3]. x=87;
	  lnoga[3]. y=200;
	  Image2->Canvas->Polygon(lnoga, 3);
	  // lstopa
	  TPoint lstopa[4];
	  lstopa[0]. x=95;
	  lstopa[0]. y=205;
	  lstopa[1]. x=80;
	  lstopa[1]. y=195;
	  lstopa[2]. x=75;
	  lstopa[2]. y=197;
	  lstopa[3]. x=90;
	  lstopa[3]. y=207;
	  Image2->Canvas->Polygon(lstopa, 3);
	  // pnoga
	  TPoint pnoga[4];
	  pnoga[0]. x=140;
	  pnoga[0]. y=160;
	  pnoga[1]. x=148;
	  pnoga[1]. y=155;
	  pnoga[2]. x=181;
	  pnoga[2]. y=200;
	  pnoga[3]. x=173;
	  pnoga[3]. y=205;
	  Image2->Canvas->Polygon(pnoga, 3);
	  // pstopa
	  TPoint pstopa[4];
	  pstopa[0]. x=181;
	  pstopa[0]. y=200;
	  pstopa[1]. x=161;
	  pstopa[1]. y=212;
	  pstopa[2]. x=162;
	  pstopa[2]. y=216;
	  pstopa[3]. x=183;
	  pstopa[3]. y=203;
	  Image2->Canvas->Polygon(pstopa, 3);


	  // szary ludzik na czerwonym polu
	  Sygnalizator->Canvas->Pen->Color=RGB(80,80,80);
	  Sygnalizator->Canvas->Brush->Color=RGB(80,80,80);
	  Sygnalizator->Canvas->Rectangle(120,90,150,150);
	  // glowica
	  Sygnalizator->Canvas->Ellipse(115,40,155,80);
	  // rece
	  Sygnalizator->Canvas->Rectangle(101,90,108,160);
	  Sygnalizator->Canvas->Rectangle(162,90,169,160);
	  // nogi
	  Sygnalizator->Canvas->Rectangle(120,160,130,215);
	  Sygnalizator->Canvas->Rectangle(140,160,150,215);

}

void TForm1::czerwony()
{
	  Image3->Canvas->Pen->Color=RGB(255,0,0);
	  Image3->Canvas->Brush->Color=RGB(255,0,0);
	  Image3->Canvas->Rectangle(120,90,150,150);
	  // glowica
	  Image3->Canvas->Ellipse(115,40,155,80);
	  // rece
	  Image3->Canvas->Rectangle(101,90,108,160);
	  Image3->Canvas->Rectangle(162,90,169,160);
	  // nogi
	  Image3->Canvas->Rectangle(120,160,130,215);
	  Image3->Canvas->Rectangle(140,160,150,215);

}

void TForm1::zielony()
{
	  Image4->Canvas->Pen->Color=RGB(0,160,0);
	  Image4->Canvas->Brush->Color=RGB(0,160,0);
	  Image4->Canvas->Rectangle(125,90,145,150);
	  // glowica
	  Image4->Canvas->Ellipse(115,40,155,80);
	  // lramie
	  TPoint lramie[4];
	  lramie[0]. x=115;
	  lramie[0]. y=89;
	  lramie[1]. x=105;
	  lramie[1]. y=83;
	  lramie[2]. x=93;
	  lramie[2]. y=102;
	  lramie[3]. x=103;
	  lramie[3]. y=110;
	  Image4->Canvas->Polygon(lramie, 3);
	  // lreka
	  TPoint lreka[4];
	  lreka[0]. x=103;
	  lreka[0]. y=110;
	  lreka[1]. x=93;
	  lreka[1]. y=102;
	  lreka[2]. x=60;
	  lreka[2]. y=120;
	  lreka[3]. x=65;
	  lreka[3]. y=130;
	  Image4->Canvas->Polygon(lreka, 3);
	  // pramie
	  TPoint pramie[4];
	  pramie[0]. x=155;
	  pramie[0]. y=89;
	  pramie[1]. x=165;
	  pramie[1]. y=83;
	  pramie[2]. x=185;
	  pramie[2]. y=115;
	  pramie[3]. x=170;
	  pramie[3]. y=115;
	  Image4->Canvas->Polygon(pramie, 3);
	  // preka
	  TPoint preka[4];
	  preka[0]. x=185;
	  preka[0]. y=115;
	  preka[1]. x=170;
	  preka[1]. y=115;
	  preka[2]. x=153;
	  preka[2]. y=140;
	  preka[3]. x=163;
	  preka[3]. y=145;
	  Image4->Canvas->Polygon(preka, 3);
	  // lnoga
	  TPoint lnoga[4];
	  lnoga[0]. x=120;
	  lnoga[0]. y=155;
	  lnoga[1]. x=128;
	  lnoga[1]. y=160;
	  lnoga[2]. x=95;
	  lnoga[2]. y=205;
	  lnoga[3]. x=87;
	  lnoga[3]. y=200;
	  Image4->Canvas->Polygon(lnoga, 3);
	  // lstopa
	  TPoint lstopa[4];
	  lstopa[0]. x=95;
	  lstopa[0]. y=205;
	  lstopa[1]. x=80;
	  lstopa[1]. y=195;
	  lstopa[2]. x=75;
	  lstopa[2]. y=197;
	  lstopa[3]. x=90;
	  lstopa[3]. y=207;
	  Image4->Canvas->Polygon(lstopa, 3);
	  // pnoga
	  TPoint pnoga[4];
	  pnoga[0]. x=140;
	  pnoga[0]. y=160;
	  pnoga[1]. x=148;
	  pnoga[1]. y=155;
	  pnoga[2]. x=181;
	  pnoga[2]. y=200;
	  pnoga[3]. x=173;
	  pnoga[3]. y=205;
	  Image4->Canvas->Polygon(pnoga, 3);
	  // pstopa
	  TPoint pstopa[4];
	  pstopa[0]. x=181;
	  pstopa[0]. y=200;
	  pstopa[1]. x=161;
	  pstopa[1]. y=212;
	  pstopa[2]. x=162;
	  pstopa[2]. y=216;
	  pstopa[3]. x=183;
	  pstopa[3]. y=203;
	  Image4->Canvas->Polygon(pstopa, 3);
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
if (wlacz==false)
{
   Button2->Enabled=false;
   Image3->Visible=true;
   wlacz=true;
   Button1->Caption="Wy³¹cz";
   cze=StrToInt(Edit1->Text);
   zie=StrToInt(Edit2->Text);
   mig=StrToInt(Edit3->Text)*3;
   Timer1->Interval=cze*1000;
   Timer2->Interval=zie*1000;
   Edit1->Enabled=false;
   Edit2->Enabled=false;
   Edit3->Enabled=false;
   Timer1->Enabled=true;
}
else
{
   Button2->Enabled=true;
   Timer1->Enabled=false;
   Timer2->Enabled=false;
   Timer3->Enabled=false;
   Image3->Visible=false;
   Image4->Visible=false;
   wlacz=false;
   Button1->Caption="W³¹cz";
   Edit1->Enabled=true;
   Edit2->Enabled=true;
   Edit3->Enabled=true;
}
}
//---------------------------------------------------------------------------






void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	Image3->Visible=false;
	Image4->Visible=true;
	Timer2->Enabled=true;
	Timer1->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
	Timer3->Enabled=true;
	Timer2->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
	if (a<=mig)
	{
	a++;
	migaj();
	}
	else
	{
	Image4->Visible=false;
	Timer1->Enabled=true;
	Timer3->Enabled=false;
	Image3->Visible=true;
	a=0;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	 if (check==true)
	 {
	 Image3->Visible=true;
	 Image4->Visible=true;
	 Button1->Enabled=false;
	 check=false;
	 }
	 else
	 {
	 Button1->Enabled=true;
	 check=true;
	 Image3->Visible=false;
	 Image4->Visible=false;
	 }
}
//---------------------------------------------------------------------------

