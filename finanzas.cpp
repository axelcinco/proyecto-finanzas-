#include<conio.h>
#include<iostream>   //declaramos la librerias
#include<stdlib.h>
 
  using namespace std;
  int opc,opc2;
  double monto=0,saldo_efe=0,saldo_tarj=0,saldo_tot=0;
  
  
  double ingresos()
  {
  	
  	cout<<"ingrese el monto del ingreso: ";cin>>monto;
  	cout<<" 1.- pagos en efectivo: "<<endl;
  	cout<<"2.- pagos con tarjeta: "<<endl;
  	cout<<" 3.- salir: "<<endl;
  	cin>>opc2;
  	switch(opc2)
  	{
  	   case 1:
  	   	      saldo_efe=saldo_efe+monto; 
  	   	      cout<<" saldo en efectivo es: "<< saldo_efe;
  	   	      cout<<endl;
		    break;
			
	  case 2:
	  	   saldo_tarj=saldo_tarj+monto;
	  	   cout<<" saldo en trajeta es :"<<saldo_tarj;
	  	   cout<<endl;
	       break;	
	    case 3:
	    	break;
	    	break;
	    	case 4:
	    		cout<<"opcion invalida "<<endl;
	    		break;
  		
    }
  	
  	saldo_tot=saldo_tarj+saldo_efe;
  	
  	
  	
  };//aqui termina la funcion ingresos 
  
  
  
   
   
   

int main()
{
	system("color 0b");
  cout<<" bienvenido usuario : axel garcia"<<endl;
  
  
  do
  {
  	cout<<"su saldo total es: "<<saldo_tot;
    cout<<endl;
  	cout<<" digite 1: ingresos:"<<endl;
  	cout<<" digite 2: retiro: "<<endl;
  	cout<<" digite 3: transferencia: "<<endl;
  	cout<<" digite 4: salir: "<<endl;
  	cin>>opc;
  	system("cls");
  	switch(opc)
  	{
  		case 1: 
  		     cout<<"ingresos: "<<endl;
  		     ingresos();
  		     break;//aqui termina el caso 1
  		     
  		case 2 :
  			 cout<<"retiros "<<endl;
  			 
  			 break;//aqui termina el caso 2
  		      
  		    
  		       
		case 3: 
		cout<<"transferencias:"<<endl;
		break;
		
		case 4:
		break;
		break;
		default:
		cout<<"opcion invalida: "<<endl;
	     break;
	}//aqui termina el switch
	system("pause");
	system("cls");
  }while(opc!=4);
	
	return 0;
}
