#include <iostream>
using namespace std;
static int totalobj=0,activeobj=0;
class data
{
    int x;
    public :
        data()
        {

            totalobj++;
            activeobj++;
        }
        ~data()
        {
            activeobj--;
        }

};
void calledf()
{
    data x,y;
    cout<<endl<<"total  : "<<totalobj<<"\t active  : "<<activeobj;

}
int main()
{
    data a,b;
    cout<<endl<<"total  : "<<totalobj<<"\t active  : "<<activeobj;
    calledf();
    cout<<endl<<"total  : "<<totalobj<<"\t active  : "<<activeobj;
    data o;
    cout<<endl<<"total  : "<<totalobj<<"\t active  : "<<activeobj;
    return 0;
}