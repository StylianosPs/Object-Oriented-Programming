package askisi_java;

public class privatecompartment extends planecomponent {
	
	public privatecompartment(){ 

	    
	    System.out.println(" PrivateCompartment just created!");

	}
	
	public void ready_check(){

        System.out.println(description+" PrivateCompartment OK!");
        super.ready_check();
	}
	
	public void process(employee x){}

}
