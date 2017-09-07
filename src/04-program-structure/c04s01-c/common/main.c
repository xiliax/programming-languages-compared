
// #include "common/main.h"
#include <stdio.h>
#include <math.h>

int main()
{
    int x = 2;
    int foo = pow(2, 3);

    printf("hello, %d\n", foo);
    // // 1. Gather customer input
    // struct aa_ui_t *ui = get_default_ui();
    // get_user_input(ui);
    // // 2. Get data from SQL server
    // struct aa_sql_connection_t *conn = create_sql_connection(/* options */);
    // conn->get_data(/* ... */);
    // 3. Get output for result to file storage
    // aa_file_storage_t *storage = create_file_storage_x(/* options */);
    // // 4. Do complex computation stuff
    // aa_compute_ctx_t *compute_ctx = create_compute_ctx(/* options */);
    // compute_ctx->do_complex_stuff(storage);
    // // 5. Cleanup
    // storage->cleanup();
    // conn->cleanup();
    // compute_ctx->cleanup();

    return 0;
}
