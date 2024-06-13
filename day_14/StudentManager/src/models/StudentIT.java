 package models;

public class StudentIT extends Student{
	private float scoreCPP;
	
	public StudentIT() {
		super();
		this.scoreCPP = 0;
	}
	
	public StudentIT(String name, int age, String address, float scoreCPP) {
		super(name, age, address);
		this.scoreCPP = scoreCPP;
	}

	@Override
	public String toString() {
		return "StudentIT [name=" + super.getName() + ", age=" + 
				super.getAge() + ", address=" + super.getAddress() 
				+", scoreCPP=" + scoreCPP + "]";
	}

	public float getScoreCPP() {
		return scoreCPP;
	}

	public void setScoreCPP(float scoreCPP) {
		this.scoreCPP = scoreCPP;
	}
	
	public void test() {
		System.out.println("StudentIT 22222222");
	}
	
	public void test(String s) {
		System.out.println("StudentIT " + s);
	}
	
	/*
	 * Tính đa hình:
	 *  + Nạp chồng phương thức (over loading): Có nhiều hàm cùng tên, cùng kiểu tra về
	 *  	Nhưng khác về thuộc tính truyền vào
	 *  + Ghi đè phương thức (Over riding): Class con có 1 hàm giống hệt class cha về tên,
	 *  	và kiểu dữ liệu, khi gọi sẽ ưu tiên gọi hàm của class con
	 *  
	 * Tính đóng gói:
	 * 	+ Private: dùng trong phạm vi class đó
	 * 	+ Default: dùng trong cùng package
	 * 	+ Protected: dùng trong cùng package, và dùng được trong class con (khác package)
	 * 	+ Public: dùng trong toàn project
	 * 
	 * Tính kế thừa:
	 * 	+ Class con được phép dùng tất cả các hàm, 
	 * 	biến có phạm vi public, protected trong class cha
	 * 
	 * Tính trừu tượng:
	 * 	+ abstract class
	 * 	+ interface:
	 * 
	 * 
	 * 
	 * */
}
