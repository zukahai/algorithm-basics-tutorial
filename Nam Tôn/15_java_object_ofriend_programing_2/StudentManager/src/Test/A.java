package Test;

public class A {
	public int a = 10;
	public static int b = 5;
	
	public A(int a) {
		this.a = a;
	}
	
	public static void hamA() {
		System.out.println("Đây là hàm A, A");
	}
	
	public void hamB() {
		System.out.println("Đây là hàm B, A = " + a);
	}
	
	public static void hamX() {
		
	}

	public static int getA() {
		hamX();
		return b;
	}

	public void setA(int a) {
		this.a = a;
	}

	public static int getB() {
		return b;
	}

	public static void setB(int b) {
		A.b = b;
	}
	
	public boolean equals(A nammmm) {
		// this
		// b
		if (this.a == nammmm.a)
				return true;
		return false;
			
	}
	
	@Override
	public String toString() {
		return "A [a=" + a + "]";
	}

	public static void main(String[] args) {
		System.out.println("hello");
		int t = A.getA();
		System.out.println(t);
		
		Integer a = 1;
		int b = 10;
		
	}

}
