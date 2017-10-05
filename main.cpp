

#include <iostream>
#include <sys/time.h>
constexpr size_t size=128*1024*1024;


long long int now()
{
  struct timeval tv;
  gettimeofday(&tv, nullptr);
  return tv.tv_sec*1000000+tv.tv_usec;
}






int sum(char* p, int count);
int sum2(char* p, char* p1, int count);
int sum3(char* p, char* p1, char* p2, int count);








int main(int argc, char** argv)
{

  char* p=(char*)malloc(size);
  for (int i=0;i<size;i++) *(p+i)=rand();

  char* p1=(char*)malloc(size);
  for (int i=0;i<size;i++) *(p1+i)=rand();

  char* p2=(char*)malloc(size);
  for (int i=0;i<size;i++) *(p2+i)=rand();


  std::cout << "start" <<std::endl;
  auto start=now();
  int s = sum(p, 10000000);
  //  int s = sum2(p, p1, 10000000);

  
  std::cout << "sum=" <<s << " time=" << now()-start << std::endl;

  start=now();
  //  s = sum(p, 10000000);
s = sum2(p, p1, 10000000);
  std::cout << "sum=" <<s << " time=" << now()-start << std::endl;

  start=now();
  s = sum3(p, p1, p2, 10000000);
  std::cout << "sum=" <<s << " time=" << now()-start << std::endl;
  
  return 0;
}
