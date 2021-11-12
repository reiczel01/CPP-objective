#ifndef POINT
#define POINT
struct Point{
int x;
int y;
};

class test {
    int objNo;
    
  
public:
    static int objCnt;
    test()
    {
    objNo = ++objCnt;
    }
    ~test()
    {
    --objCnt;
    }
    
};

#endif