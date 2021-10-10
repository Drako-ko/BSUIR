//---------------------------------------------------------------------------

#include <vcl.h>

#include <math.h>

#include <stdio.h>

#pragma hdrstop

#include "Unit1.h"

//------------ Декларация типа указателя на функции -------------------------

typedef double (*TFun)(double,double);

//------------Декларации прототипов функций Пользователя ---------------

double yFx(double,double);

double sFx(double,double);

double modFsy(double,double);

void Out_Rez(TFun, double, double, double, double, double,TMemo*);
//---------------------------------------------------------------------------
double modFsy( double y,double s){
        return fabs(y-s);
}
double yFx( double zn,double x){
        return (zn*log(sqrt(1+pow(x,2))))+(x*atan(x));
}
double sFx(double n, double x) {
        double s=0;
        for(int k = 1; k<=n; k++) {
              s+=pow((-1),k+1)*pow(x,2*k)/(2*k*(2*k-1));
        }
        return s;
}
void Out_Rez (TFun fy,TFun fs,TFun fys,double a,double b, double h,double n, TMemo *mem) {
                 for(double x = a; x<=b; x+=h) {
                        double dfy=fy(-1,x);
                        double dfs=fs(n,x);
                        double dmodfys=fys(dfy,dfs);
                        mem->Lines->Add( FloatToStrF(x,ffExponent,20,0) + "  |  " + FloatToStrF(dfy,ffExponent,20,0) + "  |  " + FloatToStrF(dfs,ffExponent,20,0) + "  |  " + FloatToStrF(dmodfys,ffExponent,20,0));
                }
}

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

                n = StrToFloat(Edit4->Text);


        Results->Lines->Add( "                     x                                         Y(x)                                           S(x)                                       |  Y(x)-S(x)  |");

        Out_Rez (yFx,sFx,modFsy,a,b,h,n, Results );


}

void __fastcall TForm1::Button2Click(TObject *Sender)

{
  Results->Clear();
}
//---------------------------------------------------------------------------




