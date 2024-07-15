package Nam;

public class AA {
	private int a;
	private int b;
	
	public AA() {
		a = 0;
		b = 0;
	}
	
	public AA(int a, int b) {
		this.a = a;
		this.b = b;
	}
	
	@Override
	public String toString() {
		return "AA [a=" + a + ", b=" + b + "]";
	}
	
	public void test() {
		System.out.println("Đây là class AA");
	}
	
	public void test2() {
		System.out.println("Đây là class AA");
	}

	public int getA() {
		return a;
	}
	public void setA(int a) {
		this.a = a;
	}
	public int getB() {
		return b;
	}
	public void setB(int b) {
		this.b = b;
	}
	
	
}
