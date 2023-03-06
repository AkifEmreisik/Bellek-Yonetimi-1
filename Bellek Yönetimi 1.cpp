#include<iostream>



int main(){
	
	int *ip;   //new int için bu gerekli int deðiþkendir 
	ip=new int;  // int deðer büyüklüðünde "BELLEK" tahsis edildi
	*ip=21;      //iþaretçiyle belleðe deðer atadýk burada 21 
	std::cout<<ip<<std::endl;  //ip yazdýrdýk ip bellek adresini yazcak
	std::cout<<sizeof(ip)<<std::endl;  //büyüklüðünü yazdýrdýk
	std::cout<<*ip<<std::endl;   //direkt olarak iþaretçiyle atadýðýmýz deðeri yazdý 21 atadýk 21 yazdý 
	delete ip;
	return 0;
}
