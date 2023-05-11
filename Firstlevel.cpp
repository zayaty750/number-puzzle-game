//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Firstlevel.h"
#include "Secondlevel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFirstname *Firstname;

Integer counter = 0;


void _fastcall Emptyspotchecker(TButton* button1,TButton* button2)
{
	if(button2->Caption == "" )
	{
	   button2->Caption = button1->Caption;
	   button1->Caption="";
	}
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
__fastcall TFirstname::TFirstname(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum1Click(TObject *Sender)
{
	Emptyspotchecker(btnum1,btnum2);
	Emptyspotchecker(btnum1,btnum5);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum2Click(TObject *Sender)
{
	Emptyspotchecker(btnum2,btnum1);
	Emptyspotchecker(btnum2,btnum6);
	Emptyspotchecker(btnum2,btnum3);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum3Click(TObject *Sender)
{
	Emptyspotchecker(btnum3,btnum2);
	Emptyspotchecker(btnum3,btnum4);
	Emptyspotchecker(btnum3,btnum7);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum4Click(TObject *Sender)
{
	Emptyspotchecker(btnum4,btnum3);
	Emptyspotchecker(btnum4,btnum8);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum5Click(TObject *Sender)
{
	Emptyspotchecker(btnum5,btnum1);
	Emptyspotchecker(btnum5,btnum6);
	Emptyspotchecker(btnum5,btnum9);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum6Click(TObject *Sender)
{
                   Emptyspotchecker(btnum6,btnum5);
	Emptyspotchecker(btnum6,btnum2);
	Emptyspotchecker(btnum6,btnum7);
	Emptyspotchecker(btnum6,btnum10);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum7Click(TObject *Sender)
{
           Emptyspotchecker(btnum7,btnum3);
	Emptyspotchecker(btnum7,btnum8);
	Emptyspotchecker(btnum7,btnum6);
	Emptyspotchecker(btnum7,btnum11);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum8Click(TObject *Sender)
{
      Emptyspotchecker(btnum8 , btnum4);
	Emptyspotchecker(btnum8 , btnum7);
	Emptyspotchecker(btnum8 , btnum12);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum9Click(TObject *Sender)
{
   Emptyspotchecker(btnum9 , btnum5);
	Emptyspotchecker(btnum9 , btnum10);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum10Click(TObject *Sender)
{
     Emptyspotchecker(btnum10 , btnum6);
	Emptyspotchecker(btnum10 , btnum11);
	Emptyspotchecker(btnum10 , btnum9);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum11Click(TObject *Sender)
{
    Emptyspotchecker(btnum11 , btnum10);
	Emptyspotchecker(btnum11 , btnum7);
	Emptyspotchecker(btnum11 , btnum12);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnum12Click(TObject *Sender)
{
   Emptyspotchecker(btnum12 , btnum8);
	Emptyspotchecker(btnum12, btnum11);
	counter = 1 + counter;
	numberofbl->Caption = counter;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::FormCreate(TObject *Sender)
{
	 numberofbl->Caption = "0";
	 counter = 0 ;

	 int bnum[12] , i ,j , rowchecker;
	 bool flag = false;
		  i = 1;
	 do
	 {
		 Randomize();
		 rowchecker  =  (Random(11))+ 1;

		 for ( j=1;j<= i;j++)
		 {
			 if(bnum[j] == rowchecker)
			 {
			 flag = true;
			 break;
			 }
		 }

		 if(flag == true)
		 {
			flag = false;
		 }
		 else
		 {
			 bnum[i] = rowchecker;
			 i = i + 1;
		 }
	 }

	 while (i<=11);

	  btnum1 ->Caption =(bnum[1]);
	  btnum2 ->Caption =(bnum[2]);
	  btnum3 ->Caption =(bnum[3]);
	  btnum4 ->Caption =(bnum[4]);
	  btnum5 ->Caption =(bnum[5]);
	  btnum6 ->Caption =(bnum[6]);
	  btnum7 ->Caption =(bnum[7]);
	  btnum8 ->Caption =(bnum[8]);
	  btnum9 ->Caption =(bnum[9]);
	  btnum10 ->Caption =(bnum[10]);
	  btnum11 ->Caption =(bnum[11]);
	  btnum12 ->Caption = "" ;

}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnexitClick(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------
void __fastcall TFirstname::btnresetClick(TObject *Sender)
{
	 numberofbl->Caption = "0";
	 counter = 0 ;

	 int bnum[12] , i ,j , rowchecker;
	 bool flag = false;
		  i = 1;
	 do
	 {
		 Randomize();
		 rowchecker  =  (Random(11))+ 1;

		 for ( j=1;j<= i;j++)
		 {
			 if(bnum[j] == rowchecker)
			 {
			 flag = true;
			 break;
			 }
		 }

		 if(flag == true)
		 {
			flag = false;
		 }
		 else
		 {
			 bnum[i] = rowchecker;
			 i = i + 1;
		 }
	 }

	 while (i<=11);

	  btnum1 ->Caption =(bnum[1]);
	  btnum2 ->Caption =(bnum[2]);
	  btnum3 ->Caption =(bnum[3]);
	  btnum4 ->Caption =(bnum[4]);
	  btnum5 ->Caption =(bnum[5]);
	  btnum6 ->Caption =(bnum[6]);
	  btnum7 ->Caption =(bnum[7]);
	  btnum8 ->Caption =(bnum[8]);
	  btnum9 ->Caption =(bnum[9]);
	  btnum10 ->Caption =(bnum[10]);
	  btnum11 ->Caption =(bnum[11]);
	  btnum12 ->Caption = "" ;

}
//---------------------------------------------------------------------------




void __fastcall TFirstname::Next1Click(TObject *Sender)
{
  //if( btnum1 ->Caption == 1 && btnum2 ->Caption == 2 && btnum3 ->Caption == 3
   //&& btnum4 ->Caption == 4 && btnum5 ->Caption == 5 && btnum6 ->Caption == 6
   //&& btnum7 ->Caption == 7 && btnum8 ->Caption == 8 && btnum9 ->Caption == 9
   //	&& btnum10 ->Caption == 10 && btnum11 ->Caption == 11 && btnum12->Caption == "")
	 //{
	  Form2->Show();
   Firstname->Hide();
   //}


   //else
   //{
	 //ShowMessage("you must arrange the numbers correctly to pass the level");
   //}


}

//---------------------------------------------------------------------------

