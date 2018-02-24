//___FILEHEADER___

#include "wxmApp.hpp"
#include "wxmView.hpp"


bool wxmApp::OnInit() {
    auto frame = new wxmView;
    frame->Show(true);
    return true;
}
