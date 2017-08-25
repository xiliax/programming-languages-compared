
#include <iostream>
#include "common/main.h"

using namespace std;

int main()
{
    // 1. Gather customer input
    auto_ptr<AA::AA_Ui> ui = AA::ui_factory();
    get_user_input(ui);
    // 2. Get data from SQL server
    auto_ptr<AA_SqlConnection> conn = sql_conn_factory(/* options */);
    conn->get_data(/* ... */);
    // // 3. Get output for result to file storage
    // auto_ptr<AA_Storage> storage = stoage_factory(/* options */);
    // // 4. Do complex computation stuff
    // auto_ptr<AA_Compute_Ctx> compute_ctx = compute_ctx_factory(/* options */);
    // compute_ctx->do_complex_stuff(storage);
    // // 5. Cleanup -- implicit clean up by auto_ptr

    return 0;
}
