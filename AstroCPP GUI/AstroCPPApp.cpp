/***************************************************************
 * Name:      AstroCPPApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Jacek Goczkowski (perk166@gmail.com)
 * Created:   2014-12-30
 * Copyright: Jacek Goczkowski ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "AstroCPPApp.h"

//(*AppHeaders
#include "AstroCPPMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(AstroCPPApp);

bool AstroCPPApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	AstroCPPFrame* Frame = new AstroCPPFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
