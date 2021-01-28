#include<conio.h>
#include<iostream>   //declaramos la librerias
#include<stdlib.h>
#include<fstream> 
#include<iomanip>
  using namespace std;
  int opc2,opc3;
  double monto=0,saldo_efe=0,saldo_tarj=0,saldo_tot=0,saldo_aho=0,tot_comida=0,tot_agulu=0,tot_otros=0,saldo_tra=0,saldo_ami=0;
  int contador=0;
  int opc;
  string nombre;
  string nombre_archivo;
  fstream archivo;        //variables para manipulara archivos 
   int dia=0,ano=0,mes=0,hora=0,minuts=0;
   	string archivo2;
   	bool busqueda=false;
   	string password="";
  
  void guardar_datos()
  {
  	archivo.open(nombre_archivo.c_str());
  	archivo<<password<<'\n';
  	archivo<<saldo_efe <<'\n';
  	archivo<<saldo_tarj<<'\n';
  	archivo<<saldo_aho<<'\n';
  	archivo<<saldo_tot<<'\n';
  	archivo<< tot_comida<<'\n';
  	archivo<<tot_agulu<<'\n';
  	archivo<<tot_otros<<'\n';
  	archivo<<saldo_tra<<'\n';
  	archivo<<saldo_ami<<'\n';
  	
  	
  	
  	archivo.close();
  }
  void leer_datos()
  {
  	archivo.open(nombre_archivo.c_str());
  	archivo>>password;
  	archivo>>saldo_efe;
  	archivo>>saldo_tarj;
  	archivo>>saldo_aho;
  	archivo>>saldo_tot;
  	archivo>> tot_comida;
  	archivo>>tot_agulu;
  	archivo>>tot_otros;
  	archivo>>saldo_tra;
  	archivo>>saldo_ami;
  	
  	
  	
  	archivo.close();
  	
  }
    
  
   void limpiar_variables()
   {
   	  saldo_efe=0;
   	  saldo_tarj=0;
   	  saldo_aho=0;
   	  saldo_tot=0;
   	  tot_comida=0;
   	  tot_agulu=0;
   	  tot_otros=0;
   	  saldo_tra=0;
   	  saldo_ami=0;
   	  
   	  
   	
   }
   
   void cambio_contra()
    {
    	 string aux_password;
    	
    		cout<<" Ingrese su password : ";cin>>aux_password;
  	 	if(password==aux_password)
  	 	{
  	 		do
  	 		{
	            cout<<"Ingrese el  nuevo Password ";cin>>password;
	            
			  
			}while(password.length()<=3);
			
					
	     }
  	 
	   
	   
	   
	   	guardar_datos();
	}
   
   void crear_usuario()
   {
   	 string nombre_usuario;
   	 cout<<" digite su usuario ";cin>>nombre;
   	 nombre_usuario=nombre + ".txt";
   	 do
   	 {
   	cout<<" digite su password: ";cin>>password;
	}while(password.length()<=3);
	archivo.open(nombre_usuario.c_str(),ios::app);
	archivo<<password<<'\n';
	archivo.close();
   	
   }
   
void decision()
{
	string respuesta;
	cout<<" quieres crear un usuario ???? ";cin>>respuesta;
    if(respuesta=="si")
    {
       crear_usuario();
	}
	else
	{
		return;
		
	}
	
}
   
     void buscar_contra()
     {
    //variable para abrir archivo
 	 string auxiliar;
 	 busqueda=false;
	
 	 archivo.open(nombre_archivo.c_str());
     archivo>>auxiliar;  
     if(password==auxiliar)
     {
     	busqueda=true;
     	
     	
	 }
	 archivo.close();

	 }
   void ingresar_fecha()
   {
   	
   	 
   	  do
   	  {
   	   cout<<" Ingrese el dia: ";cin>>dia;
	 }while(dia<=0 || dia>=32);
	 
	 do
	 {
	   	 cout<<"Ingrese el mes: ";cin>>mes;	
	 }while(mes<=0 || mes>=13);
	 
	 do
	 {
	 	cout<<"Ingrese el year: ";cin>>ano;
	 }while(ano<=1980 || ano>=2099);
    
     do
     {
     	cout<<"Ingrese hora: ";cin>>hora;
     	
     	
	 }while(hora<=0 || hora>=25);
	 
	 do
	 {
	 	cout<<"Digite los minutos: ";cin>>minuts;
	 }while(minuts<0 || minuts>=61);
     
     if(minuts==60)
     {
     	hora+=1;
     	minuts=0;
     	
	 }
	 if(hora>24)
	 {
	 	hora=hora-24;
	 	
	 }
	 else if(hora==24)
	 {
	 	hora=0;
	 }
	 
   	
   }
  
void registros()
{
	archivo.open(archivo2.c_str(),ios::app);
	

	
	
	 switch(opc)
	 {
	 	
	 	case 1:
	 		 switch(opc2)
	 		 {
	 		 	
	 		 	case 1:
	 		 		archivo<<" El monto que se deposito en efectivo fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<" Hora "<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 	
	 		 		break;
	 		 		case 2:
	 		 			archivo<<" El monto que se deposito en tarjeta fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<" Hora "<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 			break;
	 		 		case 3:
	 		 			archivo<<" El monto que se deposito en ahorros  fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<" Hora "<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 			break;
			}
	 		break;
	 	
	 	case 2:
	 		switch(opc2)
	 		{
	 		  	case 1:
	 		 	
	 		 		switch(opc3)
	 		 		{
	 		 			case 1:
	 		 					archivo<<" El monto que se gasto en efectivo por comida fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<" Hora "<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 				break;
	 		 				case 2:
	 		 					 	archivo<<" El monto que se gasto en efectivo por agua_luz fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<" Hora "<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 					break;
	 		 				case 3:
	 		 						archivo<<" El monto que se gasto en efectivo en otros recursos fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<" Hora "<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 					break;
			    	}
	 		 		break;
	 		 		case 2:
	 		 			archivo<<" El monto que se retiro en tarjeta fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<" Hora "<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 			switch(opc3)
	 		 			{
	 		 				case 1:
	 		 						archivo<<"Se gasto en tarjeta  por comida fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<" Hora "<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 					break;
	 		 			   case 2:
	 		 			   	archivo<<"Se gasto en tarjeta  por agua luz fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 			   	break;
	 		 			   	case 3:
	 		 			   		archivo<<"Se gasto en tarjeta  por  otros recurso fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 			   		break;
						  }
	 		 			break;
	 		 		case 3:
	 		 			 switch(opc3)
	 		 			 {
	 		 			   case 1:
	 		 			   	 	archivo<<"Se gasto en ahorros  por comida fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 			   	break;
	 		 			   	case 2:
	 		 			   		 	archivo<<"Se gasto en ahorros  por agua luz fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 			   		break;
	 		 			   	case 3:
	 		 			   		 	archivo<<"Se gasto en ahorros  en otros recursos fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		 			   		break;
						   }
	 		 			break;	
			 }
	 		break;
	 	
	 	case 3:
	 		switch(opc2)
	 		{
	 		  case 1:
	 		  	switch(opc3)
	 		  	{
	 		  		case 1:
	 		  			archivo<<" El monto transferido  ala tarjeta fue  "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		  		break;
	 		  		case 2:
	 		  				archivo<<" El monto transferido  al ahorros fue  "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		  			break;
				 
				 }
	 		  	
	 		  	break;
	 		  	case 2:
	 		  		switch(opc3)
	 		  		{
	 		  		  case 1:
	 		  		  		archivo<<" El monto transferido de la tarjeta  a efectivo fue  "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
						 break;
						case 2:
								archivo<<" El monto transferido de la tarjeta  ahorros fue de   "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
						break;	
					}
	 		  	break;
	 		  		case 3:
	 		  			switch(opc3)
	 		  			{
	 		  				case 1:
	 		  			archivo<<" El monto transferido de ahorro  a efectivo fue  "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		  					break;
	 		  				case 2:
	 		  					archivo<<" El monto transferido de ahorro  a tarjeta  fue  "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		  					break;
						}
	 		  		break;
	 			
			 }
	 		break;
	 		
	 		case 4:
	 			switch(opc2)
	 		 {
	 		  
	 		   case 1:
	 		   	switch(opc3)
	 		   	{
	 		   		case 1:
	 		   			 archivo<<"El monto transferido en efectivo por pagos extrar por trabjo fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		   		break;
	 		   		case 2:
	 		   			archivo<<"El monto transferido en efectivo por deudas  de amigos  fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
	 		   			break;
				}
	 		   	break;
	 		   	
	 		   	case 2:
	 		   		switch(opc3)
	 		   		{
	 		   		   case 1:
	 		   		   	archivo<<"El monto transferido para la tarjeta  por pagos extrar por trabjo fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
						   break;
						case 2:
							archivo<<"El monto transferido para la tarjeta por pagos extrar por trabjo fue de "<<monto<<" Fecha: "<<setfill('0')<<setw(2)<<dia<<"/"<<setfill('0')<<setw(2)<<mes<<"/"<<ano<<"Hora"<<setfill('0')<<setw(2)<<hora<<":"<<setfill('0')<<setw(2)<<minuts<<endl;
						break;	
					}
	 		     break;
			  }
	 		
	 		break;
	 		
	 	
	 	
	 }
	
	archivo.close();


}
  
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
    ingresar_fecha();
    registros();
	}//cierre del else 
  	   
  	
  	
  	saldo_tot=saldo_tarj+saldo_efe+saldo_aho;
  	
  	guardar_datos();
  	
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
		   cout<<"El total gastado en comida  es de:"<<tot_comida<<endl;
		   break;
		   case 2:
		   	   tot_agulu=tot_agulu+monto;
		   	   saldo_tarj=saldo_tarj-monto;
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
	
	 ingresar_fecha();
	 registros();
  		
	}//aqui termina la comparacion else 
  	
  	guardar_datos();
  	
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
		 ingresar_fecha();
		 registros();
	}//aqui termina el else del primer if 
	
	guardar_datos();
   	  
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
		ingresar_fecha();
		registros();
	 }//llave que me indica el cierre del else 
   	 guardar_datos();
   	
   }; //aqui termina la funcion transfe extra
   
   void consultar_saldos()
   {
   	 string auxi_reg;
   	 cout<<" Registros que se han hecho durante a lo largo del tiempo "<<'\n';
   	 cout<<"********************************************************** "<<'\n';
   	  archivo.open(archivo2.c_str());
   	  while(!archivo.eof())
   	  {
   	  	 getline(archivo,auxi_reg);
   	  	 cout<<auxi_reg<<endl;
   	  	 
	 }
	 archivo.close();
   	  
  	cout<<"numeros de transferencias realizadas en el dia: "<<contador<<endl;
    cout<<"total en efectivo que tiene: "<<saldo_efe<<endl;
    cout<<"total de tarjeta que tiene es: "<<saldo_tarj<<endl;
    cout<<"total en ahorros que tiene es: "<<saldo_aho<<endl;
   
    cout<<"El saldo total que tiene en su cuenta es de : "<<saldo_tot<<endl;
    cout<<"******************************************* "<<endl;
    cout<<"***** pagos efectuados del usuario ******** "<<endl;
    cout<<"total gastado del usuario en comida "<<tot_comida<<endl;
    cout<<"total gastado en agua o luz es de: "<<tot_agulu<<endl;
    cout<<"total gastado en otros recurso es de: "<<tot_otros<<endl;
    
    cout<<"******************************************* "<<endl;
    
     cout<<" pagos por trabajos extras "<<saldo_tra<<endl;
     cout<<" pagos que se registraron por deudas de amigos o familiares "<<saldo_ami<<endl;
    
    cout<<"******************************************* "<<endl;
    guardar_datos();
   }
   

int main()
{
	 while(true)
	 {
	 	 decision();
	 	 system("cls");
	 		regreso:
		 
	system("color 0b");
   
    
    limpiar_variables();
  	cout<<" digite su usuario ";cin>>nombre;
  	cout<<" digite su contraseña: ";cin>>password;
  	nombre_archivo=nombre + ".txt";
  	system("cls");
  	buscar_contra();
 if(busqueda)
 {
    do
  {
  	 archivo2="registros/" + nombre+ ".txt";
  	 

  	 leer_datos();
   saldo_tot=saldo_efe+saldo_tarj+saldo_aho;
     cout<<"****** finanzas personales ******** "<<endl;
    cout<<"_______________________________________"<<endl;
  
  	cout<<"digite 1: ingresos:"<<endl;
  	cout<<"digite 2: pagos: "<<endl;
  	cout<<"digite 3: transferencia: "<<endl;
  	cout<<"digite 4: para transferencia de trabajos extra o deudas de amigos "<<endl;
  	cout<<"digite 5: para consultar saldos "<<endl;
  	cout<<"digite 6: cambiar de usuario  "<<endl;
  	cout<<"digite 7: para cambiar password "<<endl;
  	cout<<"digite 8: para cerrar cesion "<<endl;
  	cout<<"digite su opcion: ";cin>>opc;
 
  	
  	system("cls");
  	switch(opc)
  	{
  		case 1: 
  		     cout<<"ingresos: "<<endl;
  		     ingresos();
  		     guardar_datos();
  		     
  		     break;//aqui termina el caso 1
  		     
  		case 2 :
  			 cout<<"retiros "<<endl;
  			 reti();
  			 guardar_datos();
  			 break;//aqui termina el caso 2
  			 
  		case 3: 
		cout<<"transferencias:"<<endl;
		transfe();
		guardar_datos();
		break;
		case 4:
			cout<<"deudas o cobros pagados externos "<<endl;
			transfe_ex();
			guardar_datos();
			
		break;
		
		case 5:
			consultar_saldos();
			
		break;
		
		case 6:
			
			goto regreso;
			break;
			case 7:
				cambio_contra();
				break;
		case 8:
			return 0;
			break;
		
		default:
		cout<<"opcion invalida: "<<endl;
	     break;
	}//aqui termina el switch
	system("pause");
	system("cls");
  }while(opc!=8); 	
 }
  else
  {
  	cout<<" no se encontro el usuario "<<endl;
  	
  }
  system("cls");
 }//cierre del ciclo while

  
	
	return 0;
}
