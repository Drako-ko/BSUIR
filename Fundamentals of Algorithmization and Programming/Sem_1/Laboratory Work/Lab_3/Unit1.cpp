//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#include <stdio.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        double  a = StrToFloat(Edit1->Text),
                b = StrToFloat(Edit2->Text),
                h = StrToFloat(Edit3->Text),
                x, s, y, res, zn=-1;

        int     n = StrToFloat(Edit4->Text),k;


        Results->Lines->Add( "                     x                                         Y(x)                                           S(x)                                       |  Y(x)-S(x)  |");

        for(x = a; x<=b; x+=h) {

                y=(zn*log(sqrt(1+pow(x,2))))+(x*atan(x));

                s = 0;

                for(k = 1; k<=n; k++) {

                       s+=pow(zn,k+1)*pow(x,2*k)/(2*k*(2*k-1));

                }
                
                res=fabs(y-s);

                Results->Lines->Add( FloatToStrF(x,ffExponent,20,0) + "  |  " + FloatToStrF(y,ffExponent,20,0) + "  |  " + FloatToStrF(s,ffExponent,20,0) + "  |  " + FloatToStrF(res,ffExponent,20,0));

         }



}

void __fastcall TForm1::Button2Click(TObject *Sender)
{
  Results->Clear();
}
//---------------------------------------------------------------------------




