#include <stdio.h>
#include "ui.h"

struct aa_ui_t *get_default_ui(void)
{
    printf("get_default_ui()\n");
    return (struct aa_ui_t *)0;
}
