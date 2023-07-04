package askisi_java;

public class cargobay extends privatecompartment {
	
	private equipmentcompartment pec;
    private int emp=0;
	
	public cargobay(){ 
	    
	    System.out.println("CargoBay just created!");

	}
	
	public void ready_check(){

	    if(emp==3){
	        
	        System.out.println("CargoBay OK!\n");
	        super.ready_check();
	    }
	}
	
	public void process(employee x){

	    emp++;
	    System.out.println("CargoBay ");
	    x.WorkOn(this);
	}

}
