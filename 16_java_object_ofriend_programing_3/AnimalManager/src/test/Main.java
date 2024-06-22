package test;

import models.Animal;
import models.Cat;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Hello");
		Animal a = new Cat(16);
		((Cat) a).noi();
	}

}
