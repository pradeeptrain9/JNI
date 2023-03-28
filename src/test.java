
public class test {
	
	public native double multiply(double a, double b);
	public static void main(String[] args)
	{
		new test().multiply(1.27, 1.34);
		
	}
	static {
		System.loadLibrary("test");
	}
}
