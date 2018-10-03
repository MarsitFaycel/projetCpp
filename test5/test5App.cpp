/***************************************************************
 * Name:      test5App.cpp
 * Purpose:   Code for Application Class
 * Author:    myf ()
 * Created:   2018-05-06
 * Copyright: myf ()
 * License:
 **************************************************************/

#include "test5App.h"

//(*AppHeaders
#include "test5Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(test5App);

bool test5App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	test5Frame* Frame = new test5Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
