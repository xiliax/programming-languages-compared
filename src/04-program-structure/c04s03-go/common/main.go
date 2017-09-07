package main

import (
	"04-program-structure/c04s03-go/aa_ui/text"
	"04-program-structure/c04s03-go/storage/db/sql"
)

func main() {
	// 1. Gather customer input
	ui := text.Factory()
	getUserInput(ui)
	// 2. Get data from SQL server
	conn := sql.Factory()
	conn.GetData(nil)
	// // 3. Get output for result to file storage
	// auto_ptr<AA_Storage> storage = stoage_factory(/* options */);
	// // 4. Do complex computation stuff
	// auto_ptr<AA_Compute_Ctx> compute_ctx = compute_ctx_factory(/* options */);
	// compute_ctx->do_complex_stuff(storage);
	// // 5. Cleanup -- implicit clean up by auto_ptr

}
