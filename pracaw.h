//---------------------------------------------------------------------------

#ifndef pracawH
#define pracawH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Graphics.hpp>
#include <ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TLabel *Label1;
	TButton *Button1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TTimer *Timer1;
	TTimer *Timer2;
	TTimer *Timer3;
	TButton *Button2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Timer3Timer(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);



private:         	// User declarations
Graphics::TBitmap * Sygnalizator;
Graphics::TBitmap * Syg2;
Graphics::TBitmap * Ziel;
Graphics::TBitmap * Cze;
TRect ProstSygnalizator;
TRect ProstSyg2;
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	void wywolaj();
	void czerwony();
	void zielony();
	void migaj();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
