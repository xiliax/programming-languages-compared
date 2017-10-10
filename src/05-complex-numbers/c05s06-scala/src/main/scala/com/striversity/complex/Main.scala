package com.striversity.complex;

import org.apache.commons.math3.complex.Complex;
import com.striversity.greet.Greet;

object Main {
	implicit class ComplexImproved(c: Complex){
		def +(rhs: Complex): Complex = c.add(rhs)
		def *(rhs: Complex): Complex = c.multiply(rhs)
	}

	def main(args: Array[String]):Unit = {

		println ("Complex Numbers in Scala")
		val g = new Greet();
		g.say("World!");

		val a = new Complex(5 , 3);
		println( "a = "+ a)

		val b = a * a;
		println ("b = "+ b)

		var c = new Complex(3.6, 2.5);
		c = c.add(new Complex(0, 2.5));
		println ("c = "+ c)

		val d = b + a
		println ("d = " + d)

		val z4 = new Complex(1.0 , 2);
		val z5 = new Complex(1.0 , -2);
		println (z4.toString() + " * " + z5 + " = "+ z4 * z5)

		println ("imag(a) = "+ a.getImaginary())

		println ("abs(a): "+ a.abs())
	}
}