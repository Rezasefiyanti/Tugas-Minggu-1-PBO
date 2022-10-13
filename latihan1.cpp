#include<iostream>
using namespace std;

int main (){										//main program
	char g[5]={'E','D','C','B','A'};
	int f[3][2] = {{9,8}, {7,6}, {5,4}};
	int a,j=1,m,d;									//tipe data yang mendeklarasikan variabel
	char angka;
	
	cout<<"\n*Array 1D & Perulangan For"<<endl;
    for(int a=0; a<5; a++){							//Perulangan For
        cout<<"bintang "<<a<<" = "<<g[a]<<endl;     //output
    }
    
    cout<<"\n*Array 2D"<<endl;						//Array multidimensi
    for(int j=0;j<3;j++)
	{
		for(int k=0;k<2;k++)
		{
			cout<<f[j][k]<<"\t";
		}
		cout<<endl;
	}
    
    	cout<<"\n*Percabangan IF"<<endl;       	 //Percabangan IF
    	cout<<"Masukkan Angka (1-10): ";   		   //Inputan
    	cin>>angka;
    if (angka%2==0){
        cout<<angka<<" bilangan genap"<<endl;   //Output
    }else{
        cout<<angka<<" bilangan ganjil"<<endl;  //Output
	}
	
	cout<<"\n*Perulangan While Do While"<<endl;		//Perulangan While Do While
	int b;
	while (b < 5) {
        cout << "konversi jam!"<<endl;
        b++;
    }
	do {
		m= j*60;
    	d=m*60;
	 	cout<<j<<" Jam "<<m<<" Menit "<<d<<" Detik"<<endl;
	 	j +=1;	
    } while (j <=3);
	
	 return 0;
}

