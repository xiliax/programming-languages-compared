
varDeclar();
varInit();

void varInit() {
	print("variable initialization\n");
	println("------------------------------------")

	def r = (char)'JE';  // In Groovy, '' and "" defines a script literal
	def flag = true;
	def b = (short)35;
	def i = 23432343;
	def l = 938920L;
	def f = 903.3909f;
	def d = 90929324909023.290932342d;
	// var us uint16 = 65000
	// var uc uint8 = 128

	printf("0.\tflag - %b, %s\n", flag, flag.getClass().getName());
	printf("1.\tr - %c, %s\n", r, r.getClass().getName());
	printf("2.\tb - %d, %s\n", b, b.getClass().getName());
	printf("3.\ti - %d, %s\n", i, i.getClass().getName());
	printf("4.\tl- 0x%X, %s\n", l, l.getClass().getName());
	printf("5.\tf - %f, %s\n", f, f.getClass().getName());
	printf("6.\td - %f, %s\n", d, d.getClass().getName());
}

void varDeclar() {
	printf("variable declaration\n");
	println("------------------------------------")

	char r;
	boolean flag;
	byte b;
	int i;
	long l;
	float f;
	double d;
	// var us uint16
	// var uc uint8

printf("0.\tflag - %b, %s\n", flag, flag.getClass().getName());
	printf("1.\tr - %s, %s\n", r, r.getClass().getName());
	printf("2.\tb - %d, %s\n", b, b.getClass().getName());
	printf("3.\ti - %d, %s\n", i, i.getClass().getName());
	printf("4.\tl- 0x%X, %s\n", l, l.getClass().getName());
	printf("5.\tf - %f, %s\n", f, f.getClass().getName());
	printf("6.\td - %f, %s\n", d, d.getClass().getName());
}
