package models;

public class Student {
	// thuộc tính: dùng biến
	// phương thức: dùng hàm
	// hàm khởi tạo
	
	private String name = "Nam";
	private int age = 23;
	private String address;
	static String nameSchool = "VKU";

	// Hàm khởi tạo mặc định
	public Student() {
		name = "";
		age = 0;
		address = "";
	}
	
	// Hàm khởi tạo có thuộc tính
	public Student(String name, int age, String address) {
		this.name = name;
		this.age = age;
		this.address = address;
	}
	
	public void say() {
		System.out.println("Tôi tên là: " + name);
	}
	
	public void test() {
		System.out.println("  111111111");
	}
	
	
	@Override
	public String toString() {
		return "Student [name=" + name + ", age=" + age + ", address=" + address + "]";
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}     
}
