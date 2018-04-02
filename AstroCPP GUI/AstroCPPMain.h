/***************************************************************
 * Name:      AstroCPPMain.h
 * Purpose:   Defines Application Frame
 * Author:    Jacek Goczkowski (perk166@gmail.com)
 * Created:   2014-12-30
 * Copyright: Jacek Goczkowski ()
 * License:
 **************************************************************/

#ifndef ASTROCPPMAIN_H
#define ASTROCPPMAIN_H

//(*Headers(AstroCPPFrame)
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class AstroCPPFrame: public wxFrame
{
    public:

        AstroCPPFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~AstroCPPFrame();

    private:

        //(*Handlers(AstroCPPFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnChoice3Select(wxCommandEvent& event);
        void OnChoice2Select(wxCommandEvent& event);
        void OnChoice1Select(wxCommandEvent& event);
        void OnChoice1Select1(wxCommandEvent& event);
        void OnChoice2Select1(wxCommandEvent& event);
        void OnChoice3Select1(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnTextCtrl2Text(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        //*)

        //(*Identifiers(AstroCPPFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT8;
        static const long ID_STATICTEXT9;
        static const long ID_STATICTEXT10;
        static const long ID_STATICTEXT11;
        static const long ID_STATICTEXT12;
        static const long ID_STATICTEXT13;
        static const long ID_STATICTEXT14;
        static const long ID_STATICTEXT15;
        static const long ID_STATICTEXT27;
        static const long ID_STATICTEXT16;
        static const long ID_STATICTEXT17;
        static const long ID_STATICTEXT18;
        static const long ID_STATICTEXT19;
        static const long ID_STATICTEXT20;
        static const long ID_STATICTEXT21;
        static const long ID_STATICTEXT22;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT23;
        static const long ID_BUTTON1;
        static const long ID_CHOICE2;
        static const long ID_CHOICE1;
        static const long ID_CHOICE3;
        static const long ID_STATICBITMAP1;
        static const long ID_STATICTEXT24;
        static const long ID_STATICTEXT25;
        static const long ID_STATICTEXT26;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(AstroCPPFrame)
        wxStaticText* StaticText10;
        wxStaticText* StaticText22;
        wxStaticText* StaticText9;
        wxStaticText* StaticText20;
        wxStaticText* StaticText13;
        wxStaticText* StaticText2;
        wxStaticText* StaticText14;
        wxChoice* Choice3;
        wxButton* Button1;
        wxStaticText* StaticText26;
        wxStaticText* StaticText6;
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText19;
        wxStaticText* StaticText8;
        wxStaticText* StaticText11;
        wxStaticText* StaticText18;
        wxStaticText* StaticText1;
        wxStaticText* StaticText27;
        wxStaticText* StaticText3;
        wxStaticText* StaticText21;
        wxStaticText* StaticText23;
        wxStaticText* StaticText24;
        wxStaticText* StaticText5;
        wxStaticText* StaticText7;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl2;
        wxStaticText* StaticText15;
        wxStaticText* StaticText12;
        wxStaticText* StaticText25;
        wxStaticText* StaticText17;
        wxStaticText* StaticText4;
        wxChoice* Choice1;
        wxStaticText* StaticText16;
        wxChoice* Choice2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // ASTROCPPMAIN_H
