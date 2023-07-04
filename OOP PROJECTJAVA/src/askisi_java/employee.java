package askisi_java;

public abstract class employee {
	
	protected String name;
	
	public employee(){ 
	    
	    String[] N_array=new String[5];
	    N_array[0]="Antreas georgiou";
	    N_array[1]="Marios Kiriakou";
	    N_array[2]="Kiriaki Papadopoullou";
	    N_array[3]="Antonia Markou";
	    N_array[4]="Stilianos Psaras";
	    
	    int n=(int)(Math.random()*5);

	    name=N_array[n];
	    
	    System.out.println("Employee just created!");

	}
	
	public abstract void WorkOn(planecomponent x );
	
    public abstract void report();
}
