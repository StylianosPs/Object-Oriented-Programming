package askisi_java;

public class passengercompartment extends planecomponent {
	
	private int x;
	private passengercompartment paco;
	private int emp=0;
	
	public passengercompartment(){
		
		x=(int)(Math.random()*2);

		if(x==1)
			paco=new passengercompartment();
	    
	    System.out.println("PassengerCompartment just created!");

	}

	public void ready_check(){

		if(emp==2){

			System.out.println(description+" PassengerCompartment OK!");
			super.ready_check();
		}

	}
	
	public void process(employee x){

	    emp++;
	    System.out.println("PassengerCompartment ");
	    x.WorkOn(this);

	    if(this.x==1)
	        paco.process(x);
	}
}