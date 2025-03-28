package models;

import java.util.ArrayList;
import java.util.Scanner;

public class Student {
	private int age;
	private String name;
	private String address;
	
	public Student() {
		this.age = 9;
		this.name = "";
		this.address = "";
	}
	
	public Student(String name, int age, String address) {
		this.age = age;
		this.name = name;
		this.address = address;
	}
	
	public int getLengName() {
		return name.length();
	}
	
	@Override
	public String toString() {
		return "Student [age=" + age + ", name=" + name + ", address=" + address + "]";
	}
	

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}
	
	public void input() {
		Scanner sc = new Scanner(System.in);
		System.out.print("Nhập tên: ");
		name = sc.nextLine();
		System.out.print("Nhập tuổi: ");
		age = sc.nextInt();
		sc.nextLine();
		System.out.print("Nhập địa chỉ: ");
		address = sc.nextLine();
	}
	/*
	 * Lỗi bộ nhớ đệm
	 * Sau khi nhập số, mình nhập chuỗi, sẽ bị lỗi
	 * 25\n
	 * 
	 * */

	public static void main(String[] args) {
//		Student a = new Student("Hai", 22, "Ha Tinh");
//		System.out.println(a.getLengName());
		
		ArrayList<Student> students = new ArrayList<>();
		for (int i = 0; i < 3; i++) {
			Student t = new Student();
			t.input();
			students.add(t);
		}
		
		for (int i = 0; i < students.size(); i++)
			System.out.println(students.get(i));;
	}
}
