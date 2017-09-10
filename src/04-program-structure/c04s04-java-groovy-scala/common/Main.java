package common;

import ui.UIPrompter;
import ui.text.TextPrompter;

public class Main{

    public static void main(String[] args)
    {
        // 1. Gather customer input
        UIPrompter ui = TextPrompter.factory();
        Other.getUserInput(ui);
        // 2. Get data from SQL server
        // auto_ptr<AA_SqlConnection> conn = sql_conn_factory(/* options */);
        // conn->get_data(/* ... */);
        // // 3. Get output for result to file storage
        // auto_ptr<AA_Storage> storage = stoage_factory(/* options */);
        // // 4. Do complex computation stuff
        // auto_ptr<AA_Compute_Ctx> compute_ctx = compute_ctx_factory(/* options */);
        // compute_ctx->do_complex_stuff(storage);
        // // 5. Cleanup -- implicit clean up by auto_ptr
        }
}
