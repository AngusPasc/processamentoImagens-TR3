//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "resultados.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	Form2->Color = clWhite;
	SpeedButton2->Enabled = false;
	SpeedButton3->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
{
	Image1->Picture->LoadFromFile("image1.bmp"); // Carregando imagem
	Image1->Stretch = true; //redimensiona
	Image1->Refresh(); //atualiza

	Image2->Picture->LoadFromFile("image2.bmp");
	Image2->Stretch = true; //redimensiona
	Image2->Refresh(); //atualiza

	SpeedButton2->Enabled = true;
	SpeedButton3->Enabled =  true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{
	int x, y, a, b;
	for(x = 0; x < Image1->Width; x++){
		for(y = 0; y < Image1->Height; y++){
			a = Image1->Canvas->Pixels[x][y];
			b = Image2->Canvas->Pixels[x][y];
			Image3->Canvas->Pixels[x][y] = ((a+b)/2);
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton3Click(TObject *Sender)
{
	int x, y, a, b;
	for(x = 0; x < Image1->Width; x++){
		for(y = 0; y < Image1->Height; y++){
			a = Image1->Canvas->Pixels[x][y];
			b = Image2->Canvas->Pixels[x][y];
			Image3->Canvas->Pixels[x][y] = (a*b)/2;
		}
	}
}
//---------------------------------------------------------------------------



