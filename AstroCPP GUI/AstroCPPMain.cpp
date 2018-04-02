/***************************************************************
 * Name:      AstroCPPMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Jacek Goczkowski (perk166@gmail.com)
 * Created:   2014-12-30
 * Copyright: Jacek Goczkowski ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "AstroCPPMain.h"
#include <wx/msgdlg.h>
#include "headline.h"
#include "str.h"

//(*InternalHeaders(AstroCPPFrame)
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(AstroCPPFrame)
const long AstroCPPFrame::ID_STATICTEXT1 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT2 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT3 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT4 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT5 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT6 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT7 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT8 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT9 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT10 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT11 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT12 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT13 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT14 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT15 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT27 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT16 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT17 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT18 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT19 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT20 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT21 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT22 = wxNewId();
const long AstroCPPFrame::ID_TEXTCTRL1 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT23 = wxNewId();
const long AstroCPPFrame::ID_BUTTON1 = wxNewId();
const long AstroCPPFrame::ID_CHOICE2 = wxNewId();
const long AstroCPPFrame::ID_CHOICE1 = wxNewId();
const long AstroCPPFrame::ID_CHOICE3 = wxNewId();
const long AstroCPPFrame::ID_STATICBITMAP1 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT24 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT25 = wxNewId();
const long AstroCPPFrame::ID_STATICTEXT26 = wxNewId();
const long AstroCPPFrame::idMenuQuit = wxNewId();
const long AstroCPPFrame::idMenuAbout = wxNewId();
const long AstroCPPFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AstroCPPFrame,wxFrame)
    //(*EventTable(AstroCPPFrame)
    //*)
END_EVENT_TABLE()

AstroCPPFrame::AstroCPPFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(AstroCPPFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, _("AstroCPP"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(700,500));
    SetBackgroundColour(wxColour(103,106,131));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("C:\\Users\\Jacek\\Desktop\\AstroCPP GUI\\acpp.bmp"))));
    	SetIcon(FrameIcon);
    }
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("AstroCPP"), wxPoint(32,16), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Arial Narrow"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Musisz wybrac kolor!"), wxPoint(168,128), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText2->Hide();
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Musisz wybrac poziom trudnosci!"), wxPoint(168,96), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText3->Hide();
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Musisz wybrac czy gra ma byc wczytana czy nie!"), wxPoint(168,64), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText4->Hide();
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Sterowanie:"), wxPoint(32,296), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    wxFont StaticText5Font(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Arial Narrow"),wxFONTENCODING_DEFAULT);
    StaticText5->SetFont(StaticText5Font);
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Klawisze sterowania statkiem:"), wxPoint(16,328), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    wxFont StaticText6Font(8,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,true,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText6->SetFont(StaticText6Font);
    StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("W- ruch do przodu;"), wxPoint(24,352), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("S- ruch do tylu;"), wxPoint(24,368), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("A- ruch w lewo;"), wxPoint(24,384), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    StaticText10 = new wxStaticText(this, ID_STATICTEXT10, _("D-ruch w prawo;"), wxPoint(24,400), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    StaticText11 = new wxStaticText(this, ID_STATICTEXT11, _("F-przyspieszenie \'PP\';"), wxPoint(24,416), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    StaticText12 = new wxStaticText(this, ID_STATICTEXT12, _("SPACJA- strzal."), wxPoint(24,432), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    StaticText13 = new wxStaticText(this, ID_STATICTEXT13, _("Pozostale klawisze:"), wxPoint(216,328), wxDefaultSize, 0, _T("ID_STATICTEXT13"));
    wxFont StaticText13Font(8,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,true,_T("Arial Narrow"),wxFONTENCODING_DEFAULT);
    StaticText13->SetFont(StaticText13Font);
    StaticText14 = new wxStaticText(this, ID_STATICTEXT14, _("F1- pomoc;"), wxPoint(224,368), wxDefaultSize, 0, _T("ID_STATICTEXT14"));
    StaticText15 = new wxStaticText(this, ID_STATICTEXT15, _("ESC- wyjscie;"), wxPoint(224,352), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
    StaticText27 = new wxStaticText(this, ID_STATICTEXT27, _("F5- zapis (DB);"), wxPoint(224,400), wxDefaultSize, 0, _T("ID_STATICTEXT27"));
    StaticText16 = new wxStaticText(this, ID_STATICTEXT16, _("F7- zapis (FILE);"), wxPoint(224,416), wxDefaultSize, 0, _T("ID_STATICTEXT16"));
    StaticText17 = new wxStaticText(this, ID_STATICTEXT17, _("X- cofnij."), wxPoint(224,432), wxDefaultSize, 0, _T("ID_STATICTEXT17"));
    StaticText18 = new wxStaticText(this, ID_STATICTEXT18, _("Musisz podac nazwe!"), wxPoint(168,176), wxDefaultSize, 0, _T("ID_STATICTEXT18"));
    StaticText18->Hide();
    StaticText19 = new wxStaticText(this, ID_STATICTEXT19, _("Cele gry:"), wxPoint(488,32), wxDefaultSize, 0, _T("ID_STATICTEXT19"));
    wxFont StaticText19Font(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Arial Narrow"),wxFONTENCODING_DEFAULT);
    StaticText19->SetFont(StaticText19Font);
    StaticText20 = new wxStaticText(this, ID_STATICTEXT20, _("-zabic wszystkich przeciwnikow;"), wxPoint(464,56), wxDefaultSize, 0, _T("ID_STATICTEXT20"));
    StaticText21 = new wxStaticText(this, ID_STATICTEXT21, _("-przezyc."), wxPoint(464,72), wxDefaultSize, 0, _T("ID_STATICTEXT21"));
    StaticText22 = new wxStaticText(this, ID_STATICTEXT22, _("Twoja nazwa:"), wxPoint(24,160), wxDefaultSize, 0, _T("ID_STATICTEXT22"));
    StaticText22->Hide();
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(24,176), wxSize(128,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2->SetMaxLength(20);
    TextCtrl2->Hide();
    StaticText23 = new wxStaticText(this, ID_STATICTEXT23, _("F2- statystyki;"), wxPoint(224,384), wxDefaultSize, 0, _T("ID_STATICTEXT23"));
    Button1 = new wxButton(this, ID_BUTTON1, _("START"), wxPoint(464,384), wxSize(123,63), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont Button1Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Arial Black"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    Choice2 = new wxChoice(this, ID_CHOICE2, wxPoint(24,96), wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    Choice2->SetSelection( Choice2->Append(_("Poziom trudnosci")) );
    Choice2->Append(_("Latwy"));
    Choice2->Append(_("Sredni"));
    Choice2->Append(_("Trudny"));
    Choice2->Hide();
    Choice1 = new wxChoice(this, ID_CHOICE1, wxPoint(24,64), wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    Choice1->SetSelection( Choice1->Append(_("Wczytaj")) );
    Choice1->Append(_("TAK (FILE)"));
    Choice1->Append(_("TAK (DB)"));
    Choice1->Append(_("NIE"));
    Choice3 = new wxChoice(this, ID_CHOICE3, wxPoint(24,128), wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
    Choice3->SetSelection( Choice3->Append(_("Kolor")) );
    Choice3->Append(_("Czarny"));
    Choice3->Append(_("Zielony"));
    Choice3->Append(_("Niebieski"));
    Choice3->Append(_("Czerwony"));
    Choice3->Hide();
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\Jacek\\Desktop\\AstroCPP GUI\\gwiazdy.jpg")).Rescale(wxSize(256,152).GetWidth(),wxSize(256,152).GetHeight())), wxPoint(408,216), wxSize(256,152), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
    StaticText24 = new wxStaticText(this, ID_STATICTEXT24, _("Pamietaj:"), wxPoint(488,96), wxDefaultSize, 0, _T("ID_STATICTEXT24"));
    wxFont StaticText24Font(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Arial Narrow"),wxFONTENCODING_DEFAULT);
    StaticText24->SetFont(StaticText24Font);
    StaticText25 = new wxStaticText(this, ID_STATICTEXT25, _("-im wyzszy poziom tym wiecej punktow za zabicie przeciwnika;"), wxPoint(464,120), wxSize(216,32), 0, _T("ID_STATICTEXT25"));
    StaticText26 = new wxStaticText(this, ID_STATICTEXT26, _("-nie zabijaj odrazu bosa, wykoncz jego pomocnikow da ci to wiekszy wynik."), wxPoint(464,152), wxSize(216,32), 0, _T("ID_STATICTEXT26"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Wyjscie\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("Plik"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("AstroCPP\tF1"), wxEmptyString, wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("O grze"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&AstroCPPFrame::OnTextCtrl1Text);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AstroCPPFrame::OnButton1Click);
    Connect(ID_CHOICE2,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&AstroCPPFrame::OnChoice2Select1);
    Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&AstroCPPFrame::OnChoice1Select1);
    Connect(ID_CHOICE3,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&AstroCPPFrame::OnChoice3Select1);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&AstroCPPFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&AstroCPPFrame::OnAbout);
    //*)
}

poziomgry poziom;
mojstatek wirek;

AstroCPPFrame::~AstroCPPFrame()
{
    //(*Destroy(AstroCPPFrame)
       //*)
}

void AstroCPPFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void AstroCPPFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
 wxMessageBox( "AstroCPP gra napisana przez Jacka Goczkowskiego, wzorowana na Arcanoid.",
"AstroCPP info.", wxOK | wxICON_INFORMATION );
}

void AstroCPPFrame::OnButton1Click(wxCommandEvent& event)
{
    int error;
    if(Choice1->GetSelection()==0){
        StaticText4 ->Show(true);
        error=1;}
    if(Choice2->GetSelection()==0&&Choice1->GetSelection()==3){
        StaticText3 ->Show(true);
        error=1;}
    if(Choice3->GetSelection()==0&&Choice1->GetSelection()==3){
        StaticText2 ->Show(true);
        error=1;}
    if(TextCtrl2->IsEmpty()&&Choice1->GetSelection()==3){
        StaticText18->Show(true);
    }
    if(Choice1->GetSelection()==1){
    error=0;}
    if(Choice1->GetSelection()==2){
    error=0;}
    if((Choice1->GetSelection()==3)&&(Choice2->GetSelection()!=0)&&(Choice3->GetSelection()!=0)&&!(TextCtrl2->IsEmpty())&&(TextCtrl2->IsEditable())){
       error=0;}
    if(error==0){
    if(poziom.wczytaj==1){
        odczytpoziomBD();
    }
    if(poziom.wczytaj==2){
        odczytpoziom();
    }
    if(poziom.wczytaj==3){
        poziom.poziom=1;
    }
    ingr();
    if(poziom.poziom==1){
    misja1();}
    if(poziom.poziom==2){
    misja1bos();}
    if(poziom.poziom==3){
    misja2();}
    if(poziom.poziom==4){
    misja2bos();}}
}

void AstroCPPFrame::OnChoice1Select1(wxCommandEvent& event)
{
int i;
i=Choice1->GetSelection();
switch(i) {

case 1:
StaticText22->Show(false);
Choice2->Show(false);
Choice3->Show(false);
poziom.wczytaj=i;
TextCtrl2->Show(false);
StaticText4 ->Show(false);
break;

case 2:
StaticText22->Show(false);
Choice2->Show(false);
Choice3->Show(false);
poziom.wczytaj=i;
TextCtrl2->Show(false);
StaticText4 ->Show(false);
break;

case 3:
StaticText22->Show(true);
Choice2->Show(true);
Choice3->Show(true);
poziom.wczytaj=i;
TextCtrl2->Show(true);
StaticText4 ->Show(false);
break;

default:
StaticText22->Show(false);
Choice2->Show(false);
Choice3->Show(false);
StaticText4 ->Show(true);
TextCtrl2->Show(false);
break;

}
}

void AstroCPPFrame::OnChoice2Select1(wxCommandEvent& event)
{
int i;
i=Choice2->GetSelection();
switch(i) {

case 1:
poziom.trudnosc=i;
StaticText3 ->Show(false);
break;

case 2:
poziom.trudnosc=i;
StaticText3 ->Show(false);
break;

case 3:
poziom.trudnosc=i;
StaticText3 ->Show(false);
break;

default:
StaticText3 ->Show(true);
break;

}
}

void AstroCPPFrame::OnChoice3Select1(wxCommandEvent& event)
{
int i;
i=Choice3->GetSelection();
switch(i) {

case 1:
poziom.kolor=i;
StaticText2 ->Show(false);
break;

case 2:
poziom.kolor=i;
StaticText2 ->Show(false);
break;

case 3:
poziom.kolor=i;
StaticText2 ->Show(false);
break;

case 4:
poziom.kolor=i;
StaticText2 ->Show(false);
break;

default:
StaticText2 ->Show(true);
break;
}
}

void AstroCPPFrame::OnTextCtrl1Text(wxCommandEvent& event)
{
    if(TextCtrl2->IsEmpty()){
        StaticText18->Show(true);
    }
    else{
        StaticText18->Show(false);
    }
    poziom.nazwa=TextCtrl2->GetValue();
}
