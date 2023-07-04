package askisi_java;

public class securityemployee extends employee {
	
	public securityemployee(){ 
	    
	    System.out.println("SecurityEmployee just created!");
	}
	
	public void report(){

	    System.out.println("Security OK!");
	}

	public void WorkOn(planecomponent x){

	    report();
	    x.ready_check();
	}

}
