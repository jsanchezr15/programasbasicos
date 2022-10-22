#include <iostream>
using namespace std;
void srmd(){
	char reg;
	int a=0,b=0,res=0,op=0;
	do{
	cout<<" Que operacion desea realizar?"<<endl<<endl;
	cout<<" 1.Suma"<<endl;
	cout<<" 2.Resta"<<endl;
	cout<<" 3.Multiplicacion"<<endl;
	cout<<" 4.Division"<<endl<<endl;
	cout<<" Ingrese el numero de opcion: ";cin>>op;
	cout<<""<<endl;
	switch (op){
		case 1:
			system("cls");
			cout<<" SUMA"<<endl;
			cout<<" Ingrese el 1er Numero:";cin>>a;
			cout<<" Ingrese el 2do Numero:";cin>>b;
			res=a+b;
			cout<<" La suma es:"<<res<<endl;
			break;
		case 2:
			system("cls");
			cout<<" RESTA"<<endl;
			cout<<" Ingrese el 1er Numero:";cin>>a;
			cout<<" Ingrese el 2do Numero:";cin>>b;
			res=a-b;
			cout<<" La resta es:"<<res<<endl;
			break;
		case 3:
			system("cls");
			cout<<" MULTIPLICACION"<<endl;
			cout<<" Ingrese el 1er Numero:";cin>>a;
			cout<<" Ingrese el 2do Numero:";cin>>b;
			res=a*b;
			cout<<" La multiplicacion es:"<<res<<endl;
			break;
		case 4:
			system("cls");
			cout<<" DIVISION"<<endl;
			cout<<" Ingrese el 1er Numero:";cin>>a;
			cout<<" Ingrese el 2do Numero:";cin>>b;
			res=a/b;
			cout<<" La Division es:"<<res<<endl;
			break;
			default:
				cout<<" La opcion ingresada no existe."<<endl;
	}
		cout<<""<<endl;
		cout<<" Desea realizar otra operacion? s/n:";cin>>reg;
		system("cls");
	}while(reg=='s');	
}

void parimpar(){
	int a=0,res=0;
	system("cls");
	cout<<"NUMERO PAR O IMPAR"<<endl;
	cout<<"Ingrese un Numero:";cin>>a;
	res=a%2;
	if (res==0){
		cout<<"El Numero Ingresado es Par"<<endl;
	}else{
		cout<<"El Numero Ingresado es Impar"<<endl;
	}	
}

void conversionunimed(){
	char reg;
	do{
	float kam=0.621,mak=1.609,map=30.370,pam=0.025,lak=0.454,kal=2.205,a=0,b=0,res=0;
	int op=0;
	cout<<"CONVERSION DE UNIDADES"<<endl<<endl;
	cout<<"Ingrese Cantidad de Unidades a Convertir: ";cin>>a;
	cout<<""<<endl;
	cout<<"Convertir a:"<<endl<<endl;
	cout<<"1.Kilometros a Millas"<<endl;
	cout<<"2.Millas a Kilometros"<<endl;
	cout<<"3.Metros a Pulgadas"<<endl;
	cout<<"4.Pulgadas a Metros"<<endl;
	cout<<"5.Libras a Kilogramos"<<endl;
	cout<<"6.Kilogramos a Libras"<<endl<<endl;
	cout<<"Ingrese su opcion: ";cin>>op;
	cout<<""<<endl;
	switch (op){
		case 1:
			res=a*kam;
			cout<<a<<" Kilometros = "<<res<<" Millas"<<endl;
			break;
		case 2:
			res=a*mak;
			cout<<a<<" Millas = "<<res<<" Kilometros"<<endl;
			break;
		case 3:
			res=a*map;
			cout<<a<<" Metros = "<<res<<" Pulgadas"<<endl;
			break;
		case 4:
			res=a*pam;
			cout<<a<<" Pulgadas = "<<res<<" Metros"<<endl;
			break;
		case 5:
			res=a*lak;
			cout<<a<<" Libras = "<<res<<" Kilogramos"<<endl;
			break;
		case 6:
			res=a*kal;
			cout<<a<<" Kilogramos = "<<res<<" Libras"<<endl;
			break;
			default:
			cout<<"La opcion Ingresada no Existe."<<endl;
	}
		cout<<""<<endl;
		cout<<"Desea realizar otra conversion? s/n: ";cin>>reg;
		system("cls");
	}while(reg=='s');
}

int inv(int n){
	int ninv=0;
	while(n>0){
		ninv=ninv+n%10;
		ninv=ninv*10;
		n=n/10;
	}
	return ninv/10;
}

bool espal(int n){
	if(n==inv(n)){
		return true;
	}else{
		return false;
	}
}

int unidades(int n){
	int a=0;
	a=n%10;
	return a;
}
int decenas(int n){
	int a=0;
	n=n/10;
	a=n%10;
	return a;
}
int centenas(int n){
	int a=0;
	n=n/10;
	n=n/10;
	a=n%10;
	return a;
}
int millares(int n){
	int a=0;
	n=n/10; 
	n=n/10;
	n=n/10;
	a=n%10;
	return a;
}
void romanos(){
	int a=0;
	cout<<"Ingrese Un Numero Arabigo: ";cin>>a;
	cout<<"El Numero en Romano es: ";
	switch(millares(a)){
		case 1:
			cout<<"M";
			break;
		case 2:
			cout<<"MM";
			break;
		case 3:
			cout<<"MMM";
			break;
	}
	switch(centenas(a)){
		case 1:
			cout<<"C";
			break;
		case 2:
			cout<<"CC";
			break;
		case 3:
			cout<<"CCC";
			break;
		case 4:
			cout<<"CD";
			break;
		case 5:
			cout<<"D";
			break;
		case 6:
			cout<<"DC";
			break;
		case 7:
			cout<<"DCC";
			break;
		case 8:
			cout<<"DCCC";
			break;
		case 9:
			cout<<"CM";
			break;
	}
	switch(decenas(a)){
		case 1:
			cout<<"X";
			break;
		case 2:
			cout<<"XX";
			break;
		case 3:
			cout<<"XXX";
			break;
		case 4:
			cout<<"XL";
			break;
		case 5:
			cout<<"L";
			break;
		case 6:
			cout<<"LX";
			break;
		case 7:
			cout<<"LXX";
			break;
		case 8:
			cout<<"LXXX";
			break;
		case 9:
			cout<<"XC";
			break;		
	}
	switch(unidades(a)){
		case 1:
			cout<<"I";
			break;
		case 2:
			cout<<"II";
			break;
		case 3:
			cout<<"III";
			break;
		case 4:
			cout<<"IV";
			break;
		case 5:
			cout<<"v";
			break;
		case 6:
			cout<<"VI";
			break;
		case 7:
			cout<<"VII";
			break;
		case 8:
			cout<<"VIII";
			break;
		case 9:
			cout<<"IX";
			break;
	}
}		

void tablamultiplicar(){
	char resp;
	int num=0;
	do{
	system("cls");
	cout<<"Ingrese el numero de la tabla que desea ver:";
	cin>>num;
	for(int i=1;i<=10;i++){
		cout<<num<<" X "<<i<<" = "<<num*i<<endl;
	}
	cout<<"Desea ver otra tabla de multiplicar?: ";cin>>resp;
	}while(resp=='s');	
}

void tablamultiplicarcom(){
	system("cls");
	for(int i=1;i<=10;i++){
		for(int ii=1;ii<=10;ii++)
			cout<<i<<" X "<<ii<<" = "<<i*ii<<endl;
			cout<<"********************"<<endl;
	}
}

void decabin(){
	char resp;
	int i=0,a=0,b=0,i1=0;
	int num=0;
	int salida[50];
	system("cls");
	cout<<"DECIMAL A BINARIO"<<endl<<endl;
	cout<<"Ingrese Un Numero (Entero o Decimal): ";
	cin>>num;
	while(num>0){
	i++;
	a=num%2;
	num=num/2;	
	i1=i-1;
	salida[i1]=a;
	}
	cout<<endl;
	cout<<"El numero ingresado convertido a Binario es = ";
	for(int ii=i1;ii>=0;ii--){
		cout<<salida[ii];
	}	
	cout<<endl;
}

void decahexa(){
		int num=0,i=0,a=0,i1=0;
		cout<<"DECIMAL A HEXADECIMAL"<<endl<<endl;
		cout<<"Ingrese un Numero: ";
		cin>>num;
		int salida[i1];
		while(num>0){
			i++;
			a=num%16;
			num=num/16;
			i1=i-1;
			salida[i1]=a;
		}
		cout<<endl;
		cout<<"El numero ingresado convertido a Hexadecimal es = ";
	for(int ii=i1;ii>=0;ii--){
		switch(salida[ii]){
			case 10:cout<<"A";break;
			case 11:cout<<"B";break;
			case 12:cout<<"C";break;
			case 13:cout<<"D";break;
			case 14:cout<<"E";break;
			case 15:cout<<"F";break;
			default:
			cout<<salida[ii];
		}
	}
	cout<<endl;
}

main(){
	char reg;
	int num=0;
	do{
		int op=0;
		cout<<"Menu"<<endl<<endl;
		cout<<"1.Suma, Resta, Multiplicacion, Division"<<endl;
		cout<<"2.Par o Impar"<<endl;
		cout<<"3.Conversion de Medidas"<<endl;
		cout<<"4.Evaluar si un numero es palindromo"<<endl;
		cout<<"5.Conversor Numerico (Arabigo a Romano)"<<endl;
		cout<<"6.Tabla de Multiplicar Simple"<<endl;
		cout<<"7.Tabla de Multiplicar Completa"<<endl;
		cout<<"8.Decimal a Binario"<<endl;
		cout<<"9.Decimal a Hexadecimal"<<endl<<endl;
		cout<<"Ingrese el numero de opcion: ";cin>>op;
		cout<<""<<endl;
		switch(op){
			case 1:
				system("cls");
				srmd();
				break;
			case 2:
				parimpar();
				break;
			case 3:
				system("cls");
				conversionunimed();
				break;
			case 4:
				system("cls");
				cout<<"NUMERO PALINDROMO"<<endl<<endl;
				cout<<"Ingrese un Numero:";cin>>num;
				cout<<""<<endl;
				if(espal(num)){
				cout<<"El Numero "<<num<<" es Palindromo."<<endl;
				}else{
				cout<<"El Numero "<<num<<" no es Palindromo."<<endl;
				}
				break;
			case 5:
				system("cls");
				romanos();
				break;
			case 6:
				system("cls");
				tablamultiplicar();
				break;
			case 7:
				system("cls");
				tablamultiplicarcom();
				break;
			case 8:
				system("cls");
				decabin();
				break;
			case 9:
				system("cls");
				decahexa();
				break;
				default:
				cout<<"La opcion ingresada no existe."<<endl;
				break;
		}
		cout<<""<<endl;
		cout<<" Desea escoger otra opcion del menu principal? s/n: ";cin>>reg;
		system("cls");
	}while(reg=='s');
}
