#include<iostream>



int main(){
	
	int *ip;   //new int i�in bu gerekli int de�i�kendir 
	ip=new int;  // int de�er b�y�kl���nde "BELLEK" tahsis edildi
	*ip=21;      //i�aret�iyle belle�e de�er atad�k burada 21 
	std::cout<<ip<<std::endl;  //ip yazd�rd�k ip bellek adresini yazcak
	std::cout<<sizeof(ip)<<std::endl;  //b�y�kl���n� yazd�rd�k
	std::cout<<*ip<<std::endl;   //direkt olarak i�aret�iyle atad���m�z de�eri yazd� 21 atad�k 21 yazd� 
	delete ip;
	return 0;
}
