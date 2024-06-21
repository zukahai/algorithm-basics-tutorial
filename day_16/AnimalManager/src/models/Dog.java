package models;

import Interface.CRUD;

public class Dog extends Animal implements CRUD{

	@Override
	public void diChuyen() {
		// TODO Auto-generated method stub
		System.out.println("Chạy chạy");
	}

	@Override
	public int abc(int a, int b) {
		// TODO Auto-generated method stub
		return 0;
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
