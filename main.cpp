#include <iostream>
#include "sculptor.h"

using namespace std;

int main()
{
    Sculptor v(3,2,5);
    v.setColor (0, 0.2, 0, 1);
    v.putVoxel (0,0,0);
    v.setColor(0.3, 0.8, 1,1);
    v.putVoxel(1,1,1);
    v.writeOFF("C:/users/natalia/documentos/sculptor/filename.off.txt");
    return 0;
}
