package models;

public abstract class Animal {
	private int age;
	
	public Animal() {
		this.age = 0;
	}
	
	public Animal(int age) {
		this.age = age;
	}
	
	public void noi() {
		System.out.println("Hú hú hú");
	}
	
	public void inTuoi() {
		System.out.println("Tôi " + age + " tuổi");
	}
	
	public abstract void diChuyen();
	
	public abstract int abc(int a, int b);
	
	public abstract boolean isAbc();
}