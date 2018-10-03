/***************************************************************
 * Name:      test5Main.h
 * Purpose:   Defines Application Frame
 * Author:    myf ()
 * Created:   2018-05-06
 * Copyright: myf ()
 * License:
 **************************************************************/

#ifndef TEST5MAIN_H
#define TEST5MAIN_H

//(*Headers(test5Frame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)

class test5Frame: public wxFrame
{
    public:

        test5Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~test5Frame();

    private:

        //(*Handlers(test5Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void Onbtn_gerantToggle(wxCommandEvent& event);
        void Onbtn_gerantClick(wxCommandEvent& event);
        void Onbtn_serveurClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(test5Frame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_STATICTEXT1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(test5Frame)
        wxButton* btn_gerant;
        wxButton* btn_serveur;
        wxStaticText* StaticText1;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TEST5MAIN_H
