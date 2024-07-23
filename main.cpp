#include <iostream>
#include <cstdlib>

using namespace std;



int daduu(){
    int z=0,h=0;
        z=1+(rand()% 300);
        for(int i=0;i<z;++i){
        h=1+(rand()%3);}
        return h;}


int jumlahp(int y){
    int x=y+1; 
    return x;
    }

////soal a
void soala(){ 
    int x;
    int jumlah_kucing=1;
    float panjang_kucing[jumlah_kucing];
    float rata_rata;
        cout<<"jumlah kucing : ";cin>>jumlah_kucing;
            cout<<"_____________________________\n";
        
            for (x=0;x<jumlah_kucing;++x){
                    cout<<"masukan panjang kucing ke-"<<x+1<<" : ";cin>>panjang_kucing[x];
                    rata_rata+=panjang_kucing[x];
                }
            cout<<endl<<"\n--------------------------------------------------"<<endl;
            
                for (x=0;x<jumlah_kucing;++x){
                        cout<<"panjang kucing ke-"<<x+1<<" : "<<panjang_kucing[x]<<endl;
                    }
                    cout<<"_____________________________\n";
                    cout<<"rata rata panjang kucing ="<<rata_rata/jumlah_kucing;
        cout<<"\n=================================================="<<endl<<endl;
    }
    
    

/////soal b
void soalb(){
    int jumlah_murid_berat=10,A;
    int Nomor=0;
    float Berat[jumlah_murid_berat]{1000};
    float min;
    min=Berat[0];
        
        cout<<"masukan jumlah murid kelas A :";cin>>jumlah_murid_berat;
            for (A=0;A<jumlah_murid_berat;++A){
            
                cout<<A+1<<". masukan berat murid ke-"<<A+1<<" :";cin>>Berat[A];
                
                    if (Berat[A]<=min){
                            min=Berat[A];
                            Nomor= jumlahp(A);      }
                    else {min=min;}
            }
            
        cout<<endl<<endl<<endl<<"=================================================="<<endl;
                
            for(A=0;A<jumlah_murid_berat;++A){
                cout<<"berat badan murid ke-"<<A+1<<" : "<<Berat[A]<<endl;
                }
            
                cout<<"------------------------------ \n";
                cout<<"murid ke - "<<Nomor<<endl;
                cout<<"memiliki berat badan paling kecil \n";
                cout<<"dengan berat :"<<min<<"kg";
                cout<<"\n=================================================="<<endl<<endl<<endl;}
                
                
//////soal c
void soalc(){ int jumlah_murid=10,i,N;
    float jarak[jumlah_murid]{1};
    float max;
    max=jarak[0];
    N=0;
        
        cout<<"masukan jumlah murid kelas x :";cin>>jumlah_murid;
            for (i=0;i<jumlah_murid;++i){
            
                cout<<i+1<<". masukan jarak murid ke-"<<i+1<<" :";cin>>jarak[i];
                
                    if (jarak[i]>=max){
                            max=jarak[i];
                            N= jumlahp(i);      }
                    else {max=max;}
            }
            
        cout<<endl<<endl<<endl<<"=================================================="<<endl;
                
            for(i=0;i<jumlah_murid;++i){
                cout<<i+1<<". jarak murid "<<i+1<<" kesekolah :"<<jarak[i]<<"km"<<endl;
                }
            
                cout<<"------------------------------ \n";
                cout<<"murid ke - "<<N<<endl;
                cout<<"memiliki jarak paling jauh \n";
                cout<<"dengan jarak :"<<max<<"km";
                cout<<"\n=================================================="<<endl;}
                
                

int main()
{
    char dadu;
   int a;
    cout<<"lempar dadu (y/n) :";cin>>dadu;
	if (dadu=='y'){
        a= daduu();
        
        
    cout<<"hasil dadu :"<<a<<endl;
        
        
        switch (a){
        case 1:
            cout<< "kerjakan soal 3a \n";
             soala();
            break;
        case 2:
            cout<<" kerjakan soal 3b \n";
            soalb();
            break;
        case 3:
            cout<<" kerjakan soal 3c \n";
            soalc();
            break;
        
    }
        
    
    }
    else if(dadu=='n'){
        cout<<"terimakasih";
    }

	return 0;
}