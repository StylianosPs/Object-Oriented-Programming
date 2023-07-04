package askisi_java;

public class cleaningemployee extends employee {
	
	public cleaningemployee(){ 
	    
	    System.out.println("CleaningEmployee just created!");
	}
	
	public void report(){

	    System.out.println("Cleaning OK!");
	}

	public void WorkOn(planecomponent x){

	    report();
	    x.ready_check();
	}

}
