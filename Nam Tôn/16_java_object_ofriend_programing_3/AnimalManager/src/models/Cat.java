package models;

import Interface.CRUD;

public class Cat extends Animal implements CRUD{
	
	public Cat() {
		super();
	}
	
	public Cat(int age) {
		super(age);
	}

	@Override
	public void diChuyen() {
		// TODO Auto-generated method stub
		System.out.println("Nhảy nhảy");
	}
	
	public void noi() {
		System.out.println("Meo meo");
	}
	
	public void noi(int n) {
		for (int i = 0; i < n; i++)
			System.out.println("Meo meo ");
	}

	@Override
	public int abc(int a, int b) {
		// TODO Auto-generated method stub
		return a + b;
	}

	@Override
	public boolean isAbc() {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public void add() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void delete(int id) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public int find(int id) {
		// TODO Auto-generated method stub
		return 0;
	}

}
