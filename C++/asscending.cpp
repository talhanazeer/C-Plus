#include <iostream>
using namespace std;
int main(){
	int A , B , C ;
	cout<<"Input First Number"<<endl;
	cin>>A;
	cout<<"Input Second Number"<<endl;
	cin>>B;
	cout<<"Third Number"<<endl;
	cin>>C;
	if(A<B && B<C)
		cout<<A<<" " << B<<" " << C ;
 	else if(B<A && A<C)
 		cout<< B<<" " <<A<<" " <<C;
 	else if(C<B && B<A)
		cout<< C<<" " << B<<" " << A;
	else if(A<C && C<B)
		cout<<A<<" " <<C<<" " << B;
	else if(B<C && C<A)
		cout<< B<<" " << C<<" "  << A;
	else
	cout<<C<<" " << A<<" " << B;
return 0;
	
}
