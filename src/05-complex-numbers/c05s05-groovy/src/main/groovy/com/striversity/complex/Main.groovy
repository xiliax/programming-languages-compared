package com.striversity.complex;

import org.apache.commons.math3.complex.Complex;

class Main {

	static void main(String[] args) {
		org.apache.commons.math3.complex.Complex.metaClass.plus = {Complex rhs ->
			Complex me = new Complex(getReal(), getImaginary())
			return (me.add(rhs))
		}

		org.apache.commons.math3.complex.Complex.metaClass.plus = {String rhs ->
			String s = "";
			if(("i".equals(rhs)) || ("j".equals(rhs))){
				s = "(" + getReal() + "+ " + getImaginary() + rhs + ")"
			}else{
				s = "(" + getReal() + " + " + getImaginary() + ")" + rhs
			}

			return s
		}

		println "Complex Numbers"
		Complex a = new Complex(5 , 3);
		println "a = "+ a

		Complex b = a * a;
		println "b = "+ b

		Complex c = new Complex(3.6, 2.5);
		c = c.add(new Complex(0, 2.5));
		println "c = "+ c

		Complex d = b + a
		println "d = " + d

		Complex z4 = new Complex(1.0 , 2);
		Complex z5 = new Complex(1.0 , -2);
		println z4.toString() + " * " + z5 + " = "+ z4 * z5

		println "imag(a) = "+ a.getImaginary()

		println "abs(a): "+ a.abs()

		Complex p = new Complex(23, -7);
		p.cos();
		println p + "i"
		println p + "j"
		println p + "k"
	}
}