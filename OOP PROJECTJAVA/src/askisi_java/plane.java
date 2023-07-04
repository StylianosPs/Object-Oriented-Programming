package askisi_java;

public class plane extends object {
	
	private String description;
    private String title;
    private int xor_epivaton;
    private int plithos_pc;

    private cargobay planeCB;
    private equipmentcompartment planeEC[];
    private passengercompartment planePC[];
    
    private boolean emp1=false;
    private boolean emp2=false;
    private boolean emp3=false;
    
    public plane(){ 
    	
    	int i;
        String[] T_array= new String[5];
        T_array[0]="Boeing 787";
        T_array[1]="Cirrus SR22";
        T_array[2]="Learjet 23";
        T_array[3]="Gulfstream G500";
        T_array[4]="Boeing 747";
        
        int t=(int)(Math.random()*5);
        xoritikotita_epivates();
        
        planeCB=new cargobay();
        
        planeEC=new equipmentcompartment[3];
        
        for(i=0; i<3; i++)
            planeEC[i]=new equipmentcompartment();

        title=T_array[t];

        description="ID:"+ID+" TITLE:"+title+" Passenger Capacity:"+xor_epivaton+" Passenger Compartments:"+plithos_pc;

        System.out.println("Plane just created!");
        
    }
    
    private void xoritikotita_epivates(){

        int i;
        plithos_pc=(int)(Math.random()*5+1);
        xor_epivaton=(int)(Math.random()*300+100);


        planePC=new passengercompartment[plithos_pc];
        
        for(i=0; i<plithos_pc; i++)
            planePC[i]=new passengercompartment();
        
    }

    
    public String get_title(){

        return title;

    }

    public int get_xoritikotita(){

        return xor_epivaton;
    }

    public int get_plithos_xoron(){

        return plithos_pc;
    }
    
    public void ready_check(){

        if(emp1==true && emp2==true && emp3==true){
          
            System.out.println("\n"+description+"\n");
            System.out.println("Plane ready to take off!");
        }

    } 
    
    public void process(securityemployee x){

        int i=0; 

        for(i=0; i<plithos_pc; i++)
            planePC[i].process(x);

        for(i=0; i<3; i++)
            planeEC[i].process(x);

        planeCB.process(x);

        emp1=true;


     }

    public void process(maintenanceemployee x){
        int i=0;

        for(i=0; i<3; i++)
            planeEC[i].process(x);

        planeCB.process(x);

        emp2=true;

       
     }

    public void process(cleaningemployee x){

        int i=0;

        for(i=0; i<plithos_pc; i++)
            planePC[i].process(x);

        planeCB.process(x);

        emp3=true;

     }
    

}
