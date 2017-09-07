#ifndef __UI_H__
#define __UI_H__
#include <iostream>

namespace AA
{
class AA_Ui
{
public:
  AA_Ui();
  ~AA_Ui();
  int write(char *buf, int n);
};

std::auto_ptr<AA_Ui> ui_factory();
}

#endif // __UI_H__