//---------------------------------------------------------------------------

#ifndef SecondlevelH
#define SecondlevelH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TLabel *numberofclicks;
	TPanel *gamename;
	TButton *btnum1;
	TButton *btnum2;
	TButton *btnum3;
	TButton *btnum4;
	TButton *btnum5;
	TButton *btnum6;
	TButton *btnum7;
	TButton *btnum8;
	TButton *btnreset;
	TButton *btnexit;
	TButton *Next1;
	TLabel *numberofbl;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btnum1Click(TObject *Sender);
	void __fastcall btnum2Click(TObject *Sender);
	void __fastcall btnum3Click(TObject *Sender);
	void __fastcall btnum4Click(TObject *Sender);
	void __fastcall btnum5Click(TObject *Sender);
	void __fastcall btnum6Click(TObject *Sender);
	void __fastcall btnum7Click(TObject *Sender);
	void __fastcall btnum8Click(TObject *Sender);
	void __fastcall btnresetClick(TObject *Sender);
	void __fastcall btnexitClick(TObject *Sender);
	void __fastcall Next1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
