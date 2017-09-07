#include <iostream>
#include "ui.h"

using namespace std;

namespace AA
{

auto_ptr<AA_Ui> ui_factory(void)
{
    cout << "INFO - ui_factory()\n";
    return auto_ptr<AA_Ui>(new AA_Ui);
}

AA_Ui::AA_Ui()
{
    cout << "INFO - constructing AA_Ui object\n";
}

AA_Ui::~AA_Ui()
{
    cout << "INFO - cleaning up AA_Ui object\n";
}

int AA_Ui::write(char *buf, int n)
{
    cout << "INFO - wirting buf to screen\n";
    return n;
}
}