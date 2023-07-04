package askisi_java;

public class maintenanceemployee extends employee {
	
	public maintenanceemployee(){ 
	    
	    System.out.println("MaintenanceEmployee just created!");
	}
	
	public void report(){

	    System.out.println("Maintenance OK!");
	}

	public void WorkOn(planecomponent x){

	    report();
	    x.ready_check();
	}

}
