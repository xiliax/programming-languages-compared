package com.striversity.complex;

import org.apache.commons.math3.complex.Complex;

public class Main {

	public static void main(String[] args) {

		System.out.println("Complex Numbers");
		 Complex a = new Complex(5 , 3);

		System.out.println("a = "+ a);
		Complex b = a.multiply(a);

		System.out.println("b = "+ b);

		Complex c = new Complex(3.6, 2.5);
		c = c.add(new Complex(0, 2.5));

		System.out.println("c = "+ c);

		Complex z4 = new Complex(1. , 2);
		Complex z5 = new Complex(1. , -2);
		System.out.println(z4+ " * "+ z5+ " = "+ z4.multiply(z5));

		System.out.println("imag(a) = "+ a.getImaginary());

		System.out.println("abs(a): "+ a.abs());

		Complex p = new Complex(23, -7);
		p.cos();
	}
}