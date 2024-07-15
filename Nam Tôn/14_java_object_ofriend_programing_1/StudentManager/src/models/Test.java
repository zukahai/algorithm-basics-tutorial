package models;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		Student a[] = new Student[3];
//		a[0] = new Student("Hải", 24, "Hà Tĩnh");
//		a[1] = new Student("Nam", 21, "Hà Tĩnh");
//		a[2] = new Student("Hùng", 40, "Hà Nam");
//		
//		for (int i = 0; i < 3; i++)
//			System.out.println(a[i].toString());
		
		StudentIT s = new StudentIT("Hải", 25, "Hà Tĩnh", 10);
		System.out.println(s.toString());
		s.test();
		s.test("kkkk");
		
	}

}
