#include <iostream>
#include <string>
using namespace std;
int main(){
	int count,option,allow,trans,others;
	float amount,balance,total;
	string number,pin,code,pincode,num,mcode,rcode;
	char confirm;
	pincode="0000";
	balance=1000.00;

	
	
		cout<<"********************INDEX:UEB3268622___"<<"CLASS:IT.A__"<<"TEL: 0241633925***************************"<<endl;
		cout<<endl;
		cout<<"__________GOOD TO SEND MONEY, BEST TO SEND IT WITHOUT CHARGES. DIAL *110# TO SEND MONEY NOW__________"<<endl;
		cout<<endl;
		
		
jump:
	cout<<"*********************************************************************"<<endl;
    cout<<" DEAR CUSTOMER DIAL SERVICE CODE HERE *...#"<<endl;
    cin>>code;
    if(code=="*110#")
	{
   cout<<"..................WELCOME TO  VODAFONE CASH CLONE SERVICE....................."<<endl;
   	cout<<endl;
  cout<< "      ********MENU*********"<<endl;
cout<<"        ........................."<<endl;

  cout<<"     1.Send Money"<<endl;
  cout<<"     2.Withdraw Cash"<<endl;
 cout<<"      3.Buy Airtime or Data"<<endl;
 cout<<"      4.Make Payments"<<endl;
 cout<<"      5.Financial Services"<<endl;
  cout<<"     6.My Account "<<endl;
 cout<<"      Press # to exit"<<endl;
   cin>>option;
   }
   
else {
   	 cout<<"CONNECTION PROBLEM OR INVALID VCC CODE... "<<endl;
   	 goto jump;
   }
   
   switch(option){
   	
   	case 1:
   		 cout<<".....SEND MONEY...... "<<endl;
   		  cout<<"    1.Vodafone Network"<<endl;
   		   cout<<"   2.Other Networks"<<endl;
           cout<<"   3.To Bank Account"<<endl;
           cout<<"   4.From Linked Bank Account"<<endl;
           cout<<"   0.Back"<<endl;
           cin>>option;
 if(option==1){
 
     	cout<<"Enter Reciepient number:";cin>>number;
   		cout<<"Confirm recipient number:";cin>>number;
   		cout<<"Enter  Amount:";
   		cout<<"GHC";cin>>amount;
   		cout<<"Enter your reference: ";cin>>num;
   		cout<<"verify pin to send $ "<<amount<<" to "<<number<<":::";
   		cin>>pin;
   		if(pin!=pincode){
   			cout<<"Wrong pin,try again";
   			goto jump;
   			
   			if(count==3){
   				cout<<"TOO MANY ATTEMPS";
		   }

	}
	else{
			total=balance-amount;
	 	cout<<"Amout of "<<amount<<" have been send to "<<number<<" With reference "<<num<<endl;
	 	cout<<"Current Balance is "<<total;
	}
}
else if(option==2){
	cout<<"...Please choose network...."<<endl;
	cout<<endl;
		cout<<"1.MTN"<<endl;
		cout<<"2.AirtelTigo"<<endl;
		cout<<"3.E-zwich"<<endl;
		cout<<"4.G-Money"<<endl;
     	cout<<"5.ZeePay"<<endl;
		cout<<"6.GhanaPay"<<endl;
		cout<<"7.YUP"<<endl;
		cin>>option;
if(option==1){
   cout<<"....MTN service.."<<endl;
 cout<<endl;
	   cout<<"enter reciepient number "; cin>>number;
    	cout<<" enter amount "; cin>>amount;
		cout<<" Are you willing to send an amount of $: "<<amount<<" to " <<number<<" please press1 to confirm";
		if(option==1){
		cout<<" enter your pin";cin>>pincode;
		if(pincode=="0000"){
				total=balance-amount;
			cout<<" you have sent an amout of $: "<<amount<<" to " <<number<< " your carrent balance is $: " <<total;	
			}else{
		cout<<" incorrect pin!!"; 
							}
							
		}else{
		return 0;}
		
		} else if(option==2){
			cout<<"....AirtelTigo Service..." <<endl;	
		cout<<"Enter Reciepient number:";cin>>number;
   		cout<<"Confirm recipient number:";cin>>number;
   		cout<<"Enter  Amount:";
   		cout<<"GHC";cin>>amount;
   		cout<<"Enter your reference: ";cin>>num;
   		cout<<"verify pin to send $"<<amount<<"to"<<number<<":::";
   		cin>>pin;
   		if(pin!=pincode){
   			cout<<"Wrong pin,try again";
   			
   			if(count==3){
   				cout<<"TOO MANY ATTEMPS";
		   }

	}
	else{
			total=balance-amount;
	 	cout<<"Amout of "<<amount<<" have been send to "<<number<<" With reference "<<num<<endl;
	 	cout<<"Available Balance is "<<total;
	}
						
						
					}
					else if(option==3)
					{
					cout<<",...E-zwich...."<<endl;
					cout<<endl;
		cout<<"enter reciepient number "; cin>>number;
						cout<<" enter amount "; cin>>amount;
						cout<<" Are you willing to send an amount of $: "<<amount<<" to " <<number<<" please press1 to confirm E-Zwich";
						if(option==1){
							cout<<" enter your pin";cin>>pincode;
							if(pincode=="0000"){
									total=balance-amount;
								cout<<" you have sent an amout of $:  "<<amount<<" to " <<number<< " your carrent balance is $: "<<total;	
							}else{
								cout<<" incorrect pin!!"; 
							}
							
							
						}else{
		
						return 0;}
						
						
					
}	else if(option==4)
					{
					cout<<",...G-Money...."<<endl;
					cout<<endl;
	             	cout<<"enter reciepient number "; cin>>number;
					cout<<" enter amount "; cin>>amount;
				cout<<" Are you willing to send an amount of $: "<<amount<<" to " <<number<<" please press1 to confirm G-Money";
						if(option==1){
							cout<<" enter your pin";cin>>pincode;
							if(pincode=="0000"){
									total=balance-amount;
								cout<<" You have sent an amout of $: "<<amount<<" to " <<number<< " your available balance is $: "<<total;	
							}else{
								cout<<" Incorrect Pin!!"; 
							}
							
							
						}else{
		
						return 0;}
						
					}	else if(option==5)
					{
					cout<<",...ZeePay...."<<endl;
					cout<<endl;
	            	cout<<"enter reciepient number "; cin>>number;
					cout<<" enter amount "; cin>>amount;
				    cout<<" Are you willing to send an amount of $: "<<amount<<" to " <<number<<" please press1 to confirm ZeePay";
				if(option==1){
					cout<<" enter your pin";cin>>pincode;
					if(pincode=="0000"){
							total=balance-amount;
					cout<<" you have sent an amout of $: "<<amount<<" to " <<number<< " your carrent balance is $: "<<total;	
				}else{
				cout<<" incorrect pin!!"; 
							}		
						}else{
		
						return 0;}
					}
						else if(option==6)
					{
		cout<<",...GhanaPay...."<<endl;
		cout<<endl;
		   cout<<"enter reciepient number "; cin>>number;
		   cout<<" enter amount "; cin>>amount;
	    	cout<<" Are you willing to send an amount of $: "<<amount<<" to " <<number<<" please press1 to confirm GhanaPay";
			if(option==1){
			cout<<" enter your pin";cin>>pincode;
			if(pincode=="0000"){
									total=balance-amount;
			cout<<" you have sent an amout of $: "<<amount<<" to " <<number<< " your carrent balance is $: "<<total<<endl;	
			}else{
			cout<<" incorrect pin!!"; 
							}
			}else{
		
		return 0;}
		}	else if(option==7)
					{
		cout<<",...YUP...."<<endl;
		cout<<endl;
		cout<<"enter reciepient number "; cin>>number;
		cout<<" enter amount "; cin>>amount;
    	cout<<" Are you willing to send an amount of $: "<<amount<<"to" <<number<<" please press1 to confirm YUP";
		if(option==1){
		cout<<" enter your pin";cin>>pincode;
		if(pincode=="0000"){
				total=balance-amount;
		cout<<" you have sent an amout of $: "<<amount<<" to " <<number<< " your available balance is $: "<<total<<endl;	
		}else{
		cout<<" incorrect pin!!"; 
							}
			}else{
		
			return 0;}
					}
		else if(option==0){
		goto jump;
					}
		else{
		cout<<" you have enter incorrect input ";
					}
				}
   		break;
   
 
 
   	
   		case 2:
   				cout<<"***withdraw cash***"<<endl;
   					cout<<"1. From Agent  "<<endl;
   					cout<<"2. From ATM "<<endl;
   					cin>>option;
   					if(option==1)
   					{
   					cout<<"enter merchant till number "<<endl;
   					cin>>mcode;
   					cout<<"re-enter til number "<<endl;
   					cin>>rcode;
   				
   					if(mcode==rcode){
   				cout<<"enter amount"<<endl;
   					cin>>amount;
   			cout<<"enter your pin ";
   			cin>>pin;
   				cout<<"comfirm pin"<<endl;
   					cin>>pin;
   					if(pin==pincode){
   							total=balance-amount;
   			cout<<"Dear customer you have been withdraw amount of $: "<<amount<<" from your account. your avilabile balance is $: "<<total<<endl;
   		}
   			if(pin!=pincode){
   				cout<<"Wrong pin,try again";
   				
   				if(count==4){
   					cout<<"TOO MANY ATTEMPS";
	
					   }
   					
					   }
   				
   			goto jump;
   			
   			
   			
   		
			    }
			    
			}else if(option==2){
					cout<<"Please enter PIN to recieve voucher."<<endl;
   					cin>>pin;
   					if(pincode=="0000"){
   						cout<<"enter amount to you wanna cash out"<<endl;
   						cin>>amount;
   						 cout<<" press  [Y| to confirm:";
  	        cin>>confirm;

  	        if(confirm=='Y'||confirm=='y'){
  		       	total=balance-amount;
  		        cout<<"You are succesful got a voucher of $: "<<amount<<" your balance is $"<<total;
  		      }
  		      
			}
		}
		else{
  		        cout<<"Incorrect input ";
  		    
		}
        break;
         case 3:
  	        		cout<<"Buy Airtime or Data:"<<endl;
    		cout<<"1) Buy Airtime"<<endl;
    		cout<<"2) Buy Data /2 Moorch"<<endl;
    		cout<<"3) special offers"<<endl;
    		cout<<"4) mashup Ghc 30"<<endl;
    		cin>>option;
    				
    	
    	  if(option==1){
    	  	cout<<"Select one the following:"<<endl;
    	  	cout<<"1) Enter amount GHC for Airtime "<<endl;
    	  	cout<<"0) Back"<<endl;
    	  	cin>>option;
    	       if(option==1){
    	  			cout<<"chose payment mode"<<endl;
    	  			cout<<"1) Airtime ";
    	  			cout<<"2) Mobile Money"<<endl;
    	  			cin>>option;
    	  			if(option==1){
    	  				cout<<"Airtime Successful "<<endl;
	  	  }
	  	  else if(option==2){
	  	  	cout<<"enter you cash pin";cin>>pincode;
	  	  	if(pincode=="0000"){
	  	  		cout<<"Airtime sucessful dear customer, your balance is "<<total;
	  	  		
				}else
				{ cout<<"incorrect pin";
				return 2;
				}
	  	  	
			}
			else{
				cout<<"invalid input";
				
			}
			goto jump;
			break;
	  }
	  	 case 4:
	  	 	cout<<"...Make Payments..."<<endl;
	  	 	cout<<"1.Pay Bill"<<endl;
	  	 	cout<<"2.Buy Goods"<<endl;
	  	 	cout<<"3.Generate voucher"<<endl;
	  	 	cout<<"4.School Payments"<<endl;
	  	 	cout<<"0.Back";
	  	 	cin>>option;
	  	 	if(option==1){
	  	cout<<"....Buy Airtime...."<<endl;
	  		cout<<"1.My Phone"<<endl;
	  	    cout<<"2.other voda num"<<endl;
	  	 	cout<<"3.Other networks"<<endl;
	  	 	cin>>option;
			}else if(option==2){
				cout<<"...Buy Goods..."<<endl;
				cout<<"1.vodafone"<<endl;
				cout<<"2.others"<<endl;
				cout<<"3.security deposit"<<endl;
				cin>>option;
					
			}else{
				cout<<"invalid input "<<endl;
			}
	  	 	break;
	  	 	
	  	 	case 5:
	  	 		 cout<<".....Financial Services....."<<endl;
	  	 		cout<<"1.Banking services"<<endl;
	  	 		cin>>others;
	  	 		if(others==1){
	  	 		cout<<"1.Transfer to Bank"<<endl;
	  	 		cout<<"2.Transfer from bank"<<endl;
	  	 		cin>>trans;
	  	 		if(trans==1||trans==2){
	  	 			cout<<"BANkS"<<endl;
	  	 			  cout<< "Zenith Bank"<<endl;
					  cout<< "ADB "<<endl;
					  cout<< "ABSA"<<endl;
					  cout<< "GTB"<<endl;
					  cout<< "Fidelitybank"<<endl;
					  cout<< "Accessbank "<<endl;
					  cout<< "ECObank"<<endl;
					 }else{
					 	cout<<"Wrong input"<<endl;
				}
			     }else{
			     	cout<<"WRONG INPUT ";
			     	break;
				 } 
	  	 		
	  	 	case '#':
	  	    cout<<"program exited...."<<endl;
	  	    break; 
	  	    
	  	    }
		  
		  
        default:
        	cout<<"invalid option...";
        break;
    }
    cout<<"*******************************************************************"<<endl;
cout<<"                     KONONGO HERO                      "<<endl;		
	return 10;
}

