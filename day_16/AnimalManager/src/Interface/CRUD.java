package Interface;

import models.Dog;

public interface CRUD {
	// Tất cả phương thức viết trong interface
	// Đều là pubic và abstract
	
	public abstract void add();
	public abstract void delete(int id);
	public abstract int find(int id);
}
