//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <idhashmessagedigest.hpp>
#include <IdHashSha.hpp>

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "login.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Xlogin->Active=true;
	int brojkorisnika=0;
	_di_IXMLusersType var = Getusers(Xlogin);
	for (int i = 0; i < var->Count ; i++) {
		brojkorisnika++;
	}
	ShowMessage(brojkorisnika);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	/* Logiranje */
	_di_IXMLusersType var = Getusers(Xlogin);

	int hek=0;

	TIdHashSHA1* sha1 = new TIdHashSHA1;

	for (int i = 0; i < var->Count  ; i++) {


		if (var->user[i]->name == Username->Text && sha1->HashStringAsHex(Password->Text)==var->user[i]->password) {
			TForm3 *Form = new TForm3( this );
			hek=1;
			Form->ShowModal();

		}

	}
	if (hek==0) {
		ShowMessage("Krivo korisničko ime ili lozinka!");
	}

	delete sha1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	/* Kreiranje korisnika */
	TForm2 *Form = new TForm2( this );
	Form->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	TForm1::Close();
}
//---------------------------------------------------------------------------

