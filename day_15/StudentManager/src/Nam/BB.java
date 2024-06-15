package Nam;

public class BB extends AA{
	private int c;
	
	public BB() {
		super();
		c = 0;
	}
	
	public BB(int a, int b, int c) {
		super(a, b);
		this.c = c;
	}

	@Override
	public String toString() {
		return "BB [a=" + super.getA() + ", b = " + super.getB() + ", c=" + c + "]";
	}
	
	public void test() {
		System.out.println("Đây là class BB");
	}

	public int getC() {
		return c;
	}

	public void setC(int c) {
		this.c = c;
	}
	
	
}
