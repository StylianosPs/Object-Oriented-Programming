package askisi_java;

public class equipmentcompartment extends privatecompartment  {
	
	private int emp=0;
	
	public equipmentcompartment(){ 
	    
	    System.out.println("EquipmentCompartment just created!");

	}
	
	public void ready_check(){

	    if(emp==2){

	        System.out.println("EquipmentCompartment OK!\n");
	        super.ready_check();
	    }
	}
	
	public void process(employee x){

	    emp++;
	    System.out.println("EquipmentCompartment ");
	    x.WorkOn(this);
	}
	
}
