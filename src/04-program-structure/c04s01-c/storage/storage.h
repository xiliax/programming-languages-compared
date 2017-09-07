#ifndef __STORAGE_H__
#define __STORAGE_H__

struct aa_sql_connection_t
{
    void (*get_data)(void);
};

struct aa_sql_connection_t *create_sql_connection();

#endif // __STORAGE_H__