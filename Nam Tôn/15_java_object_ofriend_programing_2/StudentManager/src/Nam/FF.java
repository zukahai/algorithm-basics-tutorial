package Nam;

import javax.swing.JButton;

public class FF extends JButton{
	private int a;
	
	public FF() {
		super();
		try {
			super.clone();
		} catch (CloneNotSupportedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		a = 0;
	}
	
}
