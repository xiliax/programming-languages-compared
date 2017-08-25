#ifndef __UI_H__
#define __UI_H__

#include <stdio.h>

struct aa_ui_t
{
    size_t (*write)(char *, size_t);
};

struct aa_ui_t *get_default_ui();

#endif // __UI_H__