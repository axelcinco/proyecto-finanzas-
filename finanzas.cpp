#include<conio.h>
#include<iostream>   //declaramos la librerias
#include<stdlib.h>
 
  using namespace std;
  int opc2,opc3;
  double monto=0,saldo_efe=0,saldo_tarj=0,saldo_tot=0,saldo_aho=0,tot_comida=0,tot_agulu=0,tot_otros=0,saldo_tra=0,saldo_ami=0;
  int contador=0;
  char opc;
  double ingresos()
  {
  	   cout<<"ingrese el monto del ingreso: ";cin>>monto;
  	    if(monto<=0)
  	    {
  	    	cout<<" el monto debe ser mayor que cero "<<endl;
  	    	
		}//cierre  de la condicion if 
		else 
		{
		  	contador=contador+1;
  	
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
	     default:
	     	cout<<"opcion invalida "<<endl;
	     	break;
	    		
  		
    }//cierre del switch
	}//cierre del else 
  	   
  	
  	
  	saldo_tot=saldo_tarj+saldo_efe+saldo_aho;
  	
  	
  	
  };//aqui termina la funcion ingresos 
  
  double reti()
  {
  	
  	cout<<"ingrese el monto que desee retirar ";cin>>monto;
    
    if(saldo_tot<monto) 
    {
    	
    	cout<<"no tiene suficiente saldo para retirar esta en numeros rojos  "<<endl;
    	
	}
	else if(monto<=0)
	{
		cout<<"digite un numero mayor que 0 "<<endl;
		
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
		   contador=contador+1;
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
	    contador=contador+1;
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
		   		contador=contador+1;
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
  
   double transfe()
   {
   	  cout<<"ingrese el monto que desea transferir: ";cin>>monto;
   	  if(saldo_tot<monto)
   	  {
   	  	cout<<"no tienes suficiente dinero para realizar la transferencia "<<endl;
   	 }
   	else if(monto<=0)
   	{
   		cout<<"ingrese un numero positivo o mayor a 0 "<<endl;
	}
	
	else
	{
		 cout<<"1.- si su transferencia va hacer en efectivo "<<endl;
		 cout<<"2.- si su transferencia va hacer en tarjeta "<<endl;
		 cout<<"3.- si su transferencia va hacer en ahorros "<<endl;
		 cout<<"4.- salir \n";
		 cout<<" digite su opcion ";cin>>opc2;
		 switch(opc2)
		 {
		 	case 1:
		 		if(saldo_efe<monto)
		 		{
		 			cout<<"no tienes suficiente dinero para transferir "<<endl;
				}
				else
				{
					cout<<"1.-  si su transferencia es para la tarjeta "<<endl;
					cout<<"2.- si su transferencia es para ahorros "<<endl;
					cout<<"3.- salir "<<endl;
					cout<<" digite su opcion: ";cin>>opc3;
					switch(opc3)
					{
						case 1:
						    saldo_efe=saldo_efe-monto;
						    saldo_tarj=saldo_tarj+monto;
						    cout<<"transferencia exitosa el nuevo saldo en tarjeta es: "<<saldo_tarj<<endl;
						    cout<<"transferencia exitosa el nuevo saldo en efectivo es: "<<saldo_efe<<endl;
						   break;
						   case 2:
						   	   saldo_efe=saldo_efe-monto;
						   	   saldo_aho=saldo_aho+monto;
						   	    cout<<"transferencia exitosa el nuevo saldo en ahorro es: "<<saldo_aho<<endl;
						    cout<<"transferencia exitosa el nuevo saldo en efectivo es: "<<saldo_efe<<endl;
						   	break;
						   	case 3:
						   		break;
						   		break;
						   	default:
						   		 cout<<"la opcion es invalida "<<endl;
						   		 break;						   		 
						   	  	   
					}//termina el switch
					
				}//aqui termna el if de comparacion del saldo en efectivo
				 
		 	 	  break; //aqui termina el caso 1
		 	case 2:
		 		if(saldo_tarj<monto)
		 		{
		 			cout<<"no tiene suficiente dinero para transferir "<<endl;
		 			
				 }
				 else
				 {
				 	cout<<"1.-  si su transferencia es para la efectivo "<<endl;
					cout<<"2.- si su transferencia es para ahorros "<<endl;
					cout<<"3.- salir "<<endl;
					cout<<" digite su opcion: ";cin>>opc3;
					switch(opc3)
					{
						case 1:
						saldo_tarj=saldo_tarj-monto;
						saldo_efe=saldo_efe+monto;
						cout<<"transferencia exitosa el nuevo saldo en tarjeta es: "<<saldo_tarj<<endl;
						cout<<"transferencia exitosa el nuevo saldo en efectivo es: "<<saldo_efe<<endl;
						break;
						case 2:
							 saldo_tarj=saldo_tarj-monto;
							 saldo_aho=saldo_aho+monto;
						cout<<"transferencia exitosa el nuevo saldo en tarjeta es: "<<saldo_tarj<<endl;
						cout<<"transferencia exitosa el nuevo saldo en efectivo es: "<<saldo_aho<<endl;
						break;
						case 3:
						 break;
						 break;
						 default:
						 	cout<<"opcion invalida "<<endl;
						 	break;	
					} //aqui termina el switch para efectuar la transferencia 
					
				 }//termina el else de comparacion del monto
		 	   break; //aqui termina el caso 2
		 	   
		 	case 3:
		 		  if(saldo_aho<monto)
		 		  {
		 		  	cout<<"no tines suficiente ahorros  para tranferir "<<endl;
		 		  	
				 }//cierre de la condicion if 
				 else
				 {
				 	cout<<"1.-  si su transferencia es para la tarjeta "<<endl;
				  cout<<"2.- si su transferencia es para dinero en efectivo "<<endl;
				 cout<<"3.- salir "<<endl;
				cout<<" digite su opcion: ";cin>>opc3;
				switch(opc3)
				{
					case 1:
						saldo_aho=saldo_aho-monto;
						saldo_tarj=saldo_tarj+monto;
						cout<<"transferencia exitosa el nuevo saldo en ahorros  es: "<<saldo_aho<<endl;
						cout<<"transferencia exitosa el nuevo saldo en efectivo  es: "<<saldo_tarj<<endl;
						
						break;//fin del caso 1
						case 2:
						saldo_aho=saldo_aho-monto;
						saldo_tarj=saldo_efe+monto;
						cout<<"transferencia exitosa el nuevo saldo en ahorros  es: "<<saldo_aho<<endl;
						cout<<"transferencia exitosa el nuevo saldo en efectivo  es: "<<saldo_efe<<endl;
						break;//fin del caso 2 dentro del else 
						
						case 3:
							break;
							break;
						default:
							cout<<"opcion invalida "<<endl;
							break;
							
					
				}//fin del switch dentro del caso 3
				 	
				 }//cierre del else 
		 		   
		 	   	break;//aqui termina el caso 3
		 	case 4:
		 		 break;
		 		 break;
		 	default:
		 		cout<<"la opcion que digito no existe "<<endl;
		 		 break;
		 }//aqui termina el switch
		 
	}//aqui termina el else del primer if 
   	  
   }; //aqui termina la funcion transferencias
   
   double transfe_ex()
   {
   	 cout<<"ingrese el monto que se recaudo ";cin>>monto;
   	 if(monto<=0)
   	 {
   	    cout<<"ingrese numeros positivos o mayores que cero "<<endl;
   	 }
   	 else
   	 {
   	    cout<<" digite 1.- si la transferencia que se realizo fue por pagar trabjos extras "<<endl;
   	    cout<<" digite 2.- si la transferencia fue pagada por amigos o familiares "<<endl;
   	    cout<<" 3.- para salir "<<endl;
   	    cout<<" digite su opcion "; cin>>opc2;
   	    switch(opc2)
   	    {
   	    	case 1:
   	    		   saldo_tra=saldo_tra+monto;
   	    		  cout<<"digite 1.- si el pago fue efectivo "<<endl;
   	    		  cout<<" digite 2.- si el pago fue hacia la tarjeta "<<endl;
   	    		  cout<<" digite su opcion ";cin>>opc3;
   	    		  switch(opc3)
   	    		  {
   	    		  	case 1:
   	    		  		saldo_efe+=monto;
   	    		  		cout<<"transferencia guardada, el saldo en efectivo es de "<<saldo_efe<<endl;
   	    		  	break;
   	    		  	case 2:
   	    		  		saldo_tarj+=monto;
   	    		  		cout<<"transferencia guardada, el saldo en efectivo es de "<<saldo_tarj<<endl;
   	    		  	break;
   	    		  	case 3:
   	    		  		break;
   	    		  		break;
   	    		  	default:
   	    		  		cout<<"opcion invalida "<<endl;
   	    		  		break;
				  }
   	    	break;//cierre del primer caso
   	    	case 2:
   	    		  saldo_ami+=monto;
   	    		cout<<"digite 1.- si el pago fue efectivo "<<endl;
   	    		  cout<<" digite 2.- si el pago fue hacia la tarjeta "<<endl;
   	    		  cout<<" digite su opcion ";cin>>opc3;
   	    		  switch(opc3)
   	    		  {
   	    		  	case 1:
   	    		  		saldo_efe+=monto;
   	    		  		cout<<"transferencia guardada, el saldo en efectivo es de "<<saldo_efe<<endl;
   	    		  	break;
   	    		  	case 2:
   	    		  		saldo_tarj+=monto;
   	    		  		cout<<"transferencia guardada, el saldo en efectivo es de "<<saldo_tarj<<endl;
   	    		  	break;
   	    		  	case 3:
   	    		  		break;
   	    		  		break;
   	    		  	default:
   	    		  		cout<<"opcion invalida "<<endl;
   	    		  		break;
				  }//cierre del switch
   	    		
   	    		break;//cierre del segundo caso del primer switch
   	    	case 3:
   	    		break;
   	    		break;
   	    	default:
   	    		cout<<"opcion invalida "<<endl;
   	    		break;
   	    	
		}//llave que me indica el cierre del switch
	 }//llave que me indica el cierre del else 
   	 
   	
   }; //aqui termina la funcion transfe extra
   
   
   

int main()
{
	system("color 0b");
  cout<<" bienvenido usuario : axel garcia"<<endl;
  cout<<"_______________________________________"<<endl;
  
  
  
  do
  {
  
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
    
     cout<<" pagos por trabajos extras "<<saldo_tra<<endl;
     cout<<" pagos que se registraron por deudas de amigos o familiares "<<saldo_ami<<endl;
    
    cout<<"******************************************* "<<endl;
    
    
    cout<<"______________________________"<<endl;
  	cout<<"digite 1: ingresos:"<<endl;
  	cout<<"digite 2: pagos: "<<endl;
  	cout<<"digite 3: transferencia: "<<endl;
  	cout<<" digite 4: para transferencia de trabajos extra o deudas de amigos "<<endl;
  	cout<<"digite 5: salir: "<<endl;
  	cout<<"digite su opcion: ";cin>>opc;
  //entrar=validarcar
  	
  	system("cls");
  	switch(opc)
  	{
  		case '1': 
  		     cout<<"ingresos: "<<endl;
  		     ingresos();
  		     break;//aqui termina el caso 1
  		     
  		case '2' :
  			 cout<<"retiros "<<endl;
  			 reti();
  			 break;//aqui termina el caso 2
  			 
  		case '3': 
		cout<<"transferencias:"<<endl;
		transfe();
		break;
		case '4':
			cout<<"deudas o cobros pagados externos "<<endl;
			transfe_ex();
		break;
		
		case '5':
		break;
		break;
		
		default:
		cout<<"opcion invalida: "<<endl;
	     break;
	}//aqui termina el switch
	system("pause");
	system("cls");
  }while(opc!='5');
	
	return 0;
}
