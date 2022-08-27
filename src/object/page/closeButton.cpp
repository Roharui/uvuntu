
#include "object/page/page.hpp"

#include "titleBar.hpp"
#include "closeButton.hpp"

namespace uvuntu
{
  void CloseButton::Lclicking(Detactor *data)
  {
    dynamic_cast<TitleBar *>(this->super)->closePage();
  }
}
