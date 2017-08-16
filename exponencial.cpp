#include<iostream>
#include<cmath>

int fa(int k){
 if (k<=0){
   return 1;
      }
  else {
    double g=1;
    double j=1;
    for(j;j<=k;j=j+1){
      g=g*j;
    }
    return g;
  }
}

double ea(double x, int n){
  double h=0;
  int k;
  for(k=0;k<n;k=k+1){
    h=h+pow(-x,k)/fa(k);
  }
  return h;
}

double es(double x, int n){
  double f=1;
  int i;
  double a_0=1;
  for(i=0;i<n;i=i+1){
    a_0=a_0*(-x)/(i+1);
    f=f+a_0;
  }
  return f;
}

int main(void){
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  double x=10;
  int l=1;
  for(l;l<=200;l=l+1){
    std::cout<<l<<" "<<ea(x,l)<<" "<<es(x,l)<<" "<<exp(-x)<<" "<<fabs(exp(-x)-es(x,l))/exp(-x) <<std::endl;
  }
  return 0;
}
