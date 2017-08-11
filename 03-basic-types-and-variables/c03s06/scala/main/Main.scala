//package main;

object Main {

	def main(args: Array[String]) = {
		varDeclar();
		varInit();
	}

	def varInit() = {
		print("variable initialization\n");

		var  r = 'J';
		var  flag = true;
		var b : Byte = 35;
		var i = 23432343;
		var l = 938920l;
		var f = 903.3909f;
		var d = 90929324909023.290932342;
		// var us uint16 = 65000
		// var uc uint8 = 128

		printf("0.\tbflag - %b\n", flag);
		printf("1.\tr - %c\n", r);
		printf("2.\tb - %d\n", b);
		printf("3.\ti - %d\n", i);
		printf("4.\tl- 0x%X\n", l);
		printf("5.\tf - %f\n", f);
		printf("6.\td - %f\n", d);
	}

	def varDeclar() = {
		printf("variable declaration\n");

		var  r : Char = 48;	 // = '0'
		var  flag : Boolean = false;
		var b : Byte = 0;
		var i = 0;
		var l = 0l;
		var f = 0f;
		var d = 0d;
		// var us uint16
		// var uc uint8

		printf("0.\tbflag - %b\n", flag);
		printf("1.\tr - %c\n", r);
		printf("2.\tb - %d\n", b);
		printf("3.\ti - %d\n", i);
		printf("4.\tl- 0x%X\n", l);
		printf("5.\tf - %f\n", f);
		printf("6.\td - %f\n", d);
	}
}