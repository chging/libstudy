#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
  char c;
  int sz = 1000;
  int in, out;

  const char output[] = "请输入文件的大小（字节）：";
  //write(1, output, sizeof(output));  
  //read(0, (void*)&sz, 4);

  out = open("file.out", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
  
  write(1, "ab\n", 3); 
 
  write(1, &sz, 4);  
 
  while(sz > 0) 
   {
      write(1, &sz, 4);
      sz--;
      c = rand();
      write(out, &c, 1);
           
   }  

  write(1, "ac\n", 3);  

  close(out);
  
  const char ou[] = "文件输出完成！";
  write(1, ou, sizeof(ou));  
  
  exit(0);
}
