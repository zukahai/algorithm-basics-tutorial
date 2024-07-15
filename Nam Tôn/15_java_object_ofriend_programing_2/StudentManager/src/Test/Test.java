package Test;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		A a = new A(5);
//		a.hamB();
//		
//		A a1 = new A(15);
//		a1.hamB();
		
//		A.b = 1000;
//		
//		A doiTuong1 = new A(1);
//		System.out.println(doiTuong1.b);
//		
//		
//		A doiTuong2 = new A(1);
//		System.out.println(doiTuong2.b);
//		
//		A doiTuong3 = new A(1);
//		System.out.println(doiTuong3.b);
//		
//		System.out.println(doiTuong1.b);
		
//		A dt1 = new A(10);
//		System.out.println(dt1); // System.out.println(dt1.toString());
//		A dt2 = new A(10);
//		System.out.println(dt2);
//		if (dt1.equals(dt2)) {
//			System.out.println("true");
//		} else {
//			System.out.println("false");
//		}
		
//		String s = "hai";
//		String p = "hai";
//		
//		if (s.equals(p)) {
//			System.out.println("true");
//		} else {
//			System.out.println("false");
//		}
		
		// Sự khác nhau giữa equals và ==
		/*
		 * ==: So sánh cả địa chỉ
		 * equals: So sánh giá trị
		 * 
		 * 
		 * 
		 * */
		
		A dt1 = new A(10);
		System.out.println(dt1); // System.out.println(dt1.toString());
		A dt2 = dt1;
		System.out.println(dt2);
		
		dt1.setA(100);
		System.out.println(dt1);
		System.out.println(dt2);
		
		
		
//		if (dt1.equals(dt2)) {
//			System.out.println("true");
//		} else {
//			System.out.println("false");
//		}
		
	}

}
