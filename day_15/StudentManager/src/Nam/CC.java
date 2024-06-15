package Nam;

public class CC extends AA{
	private int d;
	
	public CC() {
		super();
		d = 0;
	}
	
	public CC(int a, int b, int d) {
		super(a, b);
		this.d = d;
	}

	@Override
	public String toString() {
		return "CC [a=" + super.getA() + ", b = " + super.getB() + ", d=" + d + "]";
	}
	
	public void test() {
		System.out.println("Đây là class CC");
	}

	public int getD() {
		return d;
	}

	public void setD(int d) {
		this.d = d;
	}

}