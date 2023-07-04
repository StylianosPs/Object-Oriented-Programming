package askisi_java;

public abstract class planecomponent extends object {
	
	protected String description;
	
	public planecomponent(){ 

	    description="ID:"+ID;

	    System.out.println("PlaneComponent just created!");

	}
	
	abstract void process( employee x);
	
	public void ready_check(){

		System.out.println("The PlaneComponent is ready!\n");
	}

	

}
