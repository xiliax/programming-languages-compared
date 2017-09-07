//package main;

public class Main {

	public static void main(String[] args) {
		varDeclar();
		varInit();
	}

	public static void varInit() {
		System.out.print("variable initialization\n");

		char r = 'J';
		boolean flag = true;
		byte b = 35;
		int i = 23432343;
		long l = 938920L;
		float f = 903.3909f;
		double d = 90929324909023.290932342d;
		// var us uint16 = 65000
		// var uc uint8 = 128

		System.out.printf("0.\tbflag - %b\n", flag);
		System.out.printf("1.\tr - %c\n", r);
		System.out.printf("2.\tb - %d\n", b);
		System.out.printf("3.\ti - %d\n", i);
		System.out.printf("4.\tl- 0x%X\n", l);
		System.out.printf("5.\tf - %f\n", f);
		System.out.printf("6.\td - %f\n", d);
	}

	public static void varDeclar() {
		System.out.printf("variable declaration\n");

		char r = 0;
		boolean flag = false;
		byte b=0;
		int i=0;
		long l=0;
		float f=0;
		double d;
		// var us uint16
		// var uc uint8

	System.out.printf("0.\tbflag - %b\n", flag);
		System.out.printf("1.\tr - %c\n", r);
		System.out.printf("2.\tb - %d\n", b);
		System.out.printf("3.\ti - %d\n", i);
		System.out.printf("4.\tl- 0x%X\n", l);
		System.out.printf("5.\tf - %f\n", f);
		d = 9.7;
		System.out.printf("6.\td - %f\n", d);
	}
}