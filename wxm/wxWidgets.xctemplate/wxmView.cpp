//___FILEHEADER___

#include "wxmView.hpp"

#include <wx/grid.h>
#include <wx/clipbrd.h>
#include <wx/url.h>
#include <wx/stdpaths.h>
#include <wx/filename.h>
#include <wx/combo.h>
#include <wx/odcombo.h>
#include <wx/valgen.h>



#define frameWidth 400
#define frameHeight 400


wxmView::wxmView()
: wxFrame(NULL, wxID_ANY, "___PROJECTNAME___")
{
    this->SetSize(frameWidth, frameHeight);
    SetMinSize(GetSize());
    SetMaxSize(GetSize());
    
    // add bottom status bar
    CreateStatusBar();
    SetStatusText( "Status...!!!" );
    
    // center application frame after opening it
    this->Center();
}

wxmView::~wxmView() {}

BEGIN_EVENT_TABLE(wxmView, wxFrame)
wxEND_EVENT_TABLE()
