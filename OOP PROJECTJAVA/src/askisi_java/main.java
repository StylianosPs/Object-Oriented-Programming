package askisi_java;

public class main {

	public static void main(String[] args) {
		
		System.out.println("\n.................PLANE.....................\n");

		plane pl=new plane();
		
		
		System.out.println("\n...........................................\n");
		
		System.out.println("\n.................EMPLOYEE..................\n");
		
		securityemployee A=new securityemployee();
		maintenanceemployee B=new maintenanceemployee();
		cleaningemployee C=new cleaningemployee();
		
		
		
		pl.process(A);
		pl.process(B);
		pl.process(C);

		pl.ready_check();
		
		

	}

}
