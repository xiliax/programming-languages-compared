#include <stdio.h>
#include "storage.h"

static struct aa_sql_connection_t singleton;
static void get_data(void);

struct aa_sql_connection_t *create_sql_connection(void)
{
    printf("create_sql_connection()\n");
    if(singleton.get_data != get_data){
      singleton.get_data = get_data;
    }
  
    return &singleton;
}

static void get_data(void){
  printf("get_data() - getting data from Sql conn\n");
}