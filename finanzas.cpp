#include<conio.h>
#include<iostream>   //declaramos la librerias
#include<stdlib.h>
 
  using namespace std;
  int opc,opc2,opc3;
  double monto=0,saldo_efe=0,saldo_tarj=0,saldo_tot=0,saldo_aho=0,tot_comida=0,tot_agulu=0,tot_otros=0;
  int contador=0;
  
  double ingresos()
  {
  	
  	cout<<"ingrese el monto del ingreso: ";cin>>monto;
  	cout<<"1.-pagos en efectivo: "<<endl;
  	cout<<"2.-pagos con tarjeta: "<<endl;
  	cout<<"3.-ahorros "<<endl;
  	cout<<"4.-salir: "<<endl;
  	cout<<"digite la opcion que desea: ";cin>>opc2;
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
	    	saldo_aho=saldo_aho+monto;
	    	cout<<" saldo en ahorro es :"<<saldo_aho;
	  	   cout<<endl;
	    	break;
	    	case 4:
	    	     break;
	    		break;
	     case 5:
	     	cout<<"opcion invalida "<<endl;
	     	break;
	    		
  		
    }
  	
  	saldo_tot=saldo_tarj+saldo_efe+saldo_aho;
  	
  	
  	
  };//aqui termina la funcion ingresos 
  
  double reti()
  {
  	
  	cout<<"ingrese el monto que desee retirar ";cin>>monto;
    
    if(saldo_tot<monto)
    {
    	cout<<"no tiene suficiente saldo para retirar esta en numeros rojos "<<endl;
    	
	}
  	else
  	{
  	cout<<" 1.- pagos en efectivo: "<<endl;
  	cout<<"2.- pagos con tarjeta: "<<endl;
  	cout<<" 3.- ahorros "<<endl;
  	cout<<" 4.- salir: "<<endl;
  	cout<<"digite la opcion que desea: ";cin>>opc2;
  	 switch(opc2)
  	 {
  	 	case 1:
  	 		if(saldo_efe<monto)
  	 		{
  	 			cout<<"no tienes efectivo suficiente estas en numeros rojos "<<endl;
  	 			
		    }
		    else
		    {
		   
		cout<<" digite 1.- comida "<<endl;
		cout<<"digite 2.- agua o luz "<<endl;
		cout<<" digite 3.- otros recursos "<<endl;
		cout<<" en que se efectuo su pago???: ";cin>>opc3;
		
		switch(opc3)
		{
			 
			case 1:
				     tot_comida=tot_comida+monto;
				      saldo_efe=saldo_efe-monto; 
				     cout<< "total gastado en comida es de: "<<tot_comida<<endl;
				     break;
			 case 2: 
			       tot_agulu=tot_agulu+monto;
			        saldo_efe=saldo_efe-monto; 
			       cout<< "total gastado en agua o luz es de: "<<tot_agulu<<endl;
			 break;
			 
			 case 3: 
			         tot_otros=tot_otros+monto;
			         saldo_efe=saldo_efe-monto; 
			        cout<<" el total gastado en otros recuros es de: "<<tot_otros<<endl;
			         break;
			
			default:
				     cout<<" opcion invalida digite otra vez "<< endl;
				     break;
			           
		
			
		}//aqui termina el switch
		  
		    
  	       	cout<<" saldo en efectivo es: "<< saldo_efe<<endl;
  	   	    
  	   	    
  	   	    
			}//cierre del else caso de la comparacion del monto
  	 
  	   	break;//aqui termina el caso 1
  	   	      
  	   	case 2:
  	   	if(saldo_tarj<monto)
  	   	{
  	   		cout<<"no tiene suficiente saldo en la tarjeta esta en numeros rojos "<<endl;
	    }
	    else
	    {
	   
	   	cout<<" digite 1.- comida "<<endl;
		cout<<"digite 2.- agua o luz "<<endl;
		cout<<" digite 3.- otros recursos "<<endl;
		cout<<" en que se efectuo su pago???: ";cin>>opc3;
		switch(opc3)
		{
			case 1: 
		   saldo_tarj=saldo_tarj-monto;
		   tot_comida=tot_comida+monto;
		   cout<<"el total gastado en comida  es de:"<<tot_comida<<endl;
		   break;
		   case 2:
		   	   tot_agulu=tot_agulu+monto;
		   	   saldo_tarj-monto;
		   	cout<< "total gastado en agua o luz es de: "<<tot_agulu<<endl; 
		   	break;
		   	
		   	case 3: 
		   	  tot_otros=tot_otros+monto;
			   saldo_tarj=saldo_tarj-monto; 
			   cout<<" el total gastado en otros recuros es de: "<<tot_otros<<endl;
			    break;
		   	default:
		   		  cout<<"opcion invalida "<<endl;
		   		  
		   		break;
			
		}//aqui termina el switch
	   	  
	   	
	  	cout<<" saldo en trajeta es :"<<saldo_tarj;
	  	cout<<endl;
	  	
		}
	     
  	   	break;//aqui termina el caso 2
  	   	
  	   	case 3:
  	   	   if(saldo_aho<monto)
  	   	   {
  	   	   	 cout<<" no tienes suficiente ahorro en  tu cuenta "<<endl;
		   }
		   else
		   {
		   	cout<<" digite 1.- comida "<<endl;
		    cout<<"digite 2.- agua o luz "<<endl;
		    cout<<" digite 3.- otros recursos "<<endl;
		    cout<<" en que se efectuo su pago???: ";cin>>opc3;
		    switch(opc3)
		    
		    {
		    	case 1: 
		    	     tot_comida=tot_comida+monto;
		    	     saldo_aho=saldo_aho-monto;
		    	    cout<< "total gastado en comida es de: "<<tot_comida<<endl;
		    	     break;
		    	case 2:
		    		    saldo_aho=saldo_aho-monto;
		    		    tot_agulu=tot_agulu+monto;
		    		    cout<< "total gastado en agua o luz es de: "<<tot_agulu<<endl; 
		    		     break;
		    	case 3: 
		    	         saldo_aho=saldo_aho-monto;
		    		    tot_otros=tot_otros+monto;
		    		    cout<< "total gastado en otros recursos: "<<tot_otros<<endl; 
		    	        break;
		    	
			}//aqui termina el switch de hacia donde va el dinero 
		   	
		   	
		   	
		   	
	  	    cout<<" saldo en ahorro es :"<<saldo_aho;
	  	    cout<<endl;
	  	    
		   }
		  	break; //aqui termina el caso 3
  	  case 4 :
  	  	break;
  	  	break;
  	  	
  	  	default:
  	  		cout<<"opcion invalida digite otra "<<endl;
  	  		break;
  	   	      
  	 	
	}//aqui termina el switch
	
	 
	 
  		
	}//aqui termina la comparacion else 
  	
  	
  	
  };//aqui termina la funcion retiro 
  
   
   
   

int main()
{
	system("color 0b");
  cout<<" bienvenido usuario : axel garcia"<<endl;
  cout<<"_______________________________________"<<endl;
  
  
  
  do
  {
  	contador=contador+1;
  	cout<<"numeros de transferencias realizadas en el dia: "<<contador<<endl;
    cout<<"total en efectivo que tiene: "<<saldo_efe<<endl;
    cout<<"total de tarjeta que tiene es: "<<saldo_tarj<<endl;
    cout<<"total en ahorros que tiene es: "<<saldo_aho<<endl;
    saldo_tot=saldo_efe+saldo_tarj+saldo_aho;
    cout<<"el saldo total que tiene en su cuenta es de : "<<saldo_tot<<endl;
    cout<<"******************************************* "<<endl;
    cout<<"***** pagos efectuados del usuario ******** "<<endl;
    cout<<"total gastado del usuario en comida "<<tot_comida<<endl;
    cout<<"total gastado en agua o luz es de: "<<tot_agulu<<endl;
    cout<<"total gastado en otros recurso es de: "<<tot_otros<<endl;
    
    cout<<"******************************************* "<<endl;
    
    
    cout<<"______________________________"<<endl;
  	cout<<"digite 1: ingresos:"<<endl;
  	cout<<"digite 2: pagos: "<<endl;
  	cout<<"digite 3: transferencia: "<<endl;
  	cout<<"digite 4: salir: "<<endl;
  	cout<<"digite su opcion: ";cin>>opc;

  	
  	system("cls");
  	switch(opc)
  	{
  		case 1: 
  		     cout<<"ingresos: "<<endl;
  		     ingresos();
  		     break;//aqui termina el caso 1
  		     
  		case 2 :
  			 cout<<"retiros "<<endl;
  			 reti();
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
