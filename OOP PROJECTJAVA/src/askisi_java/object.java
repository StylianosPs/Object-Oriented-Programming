package askisi_java;

public abstract class object{
	
	protected int ID;
	
	private static int i=0;
	
	public object(){
		
		ID=i;
		
	    System.out.println("Object just created!");

	    i++;
	}

	protected int get_id() {
		
		return ID;
	}

}
