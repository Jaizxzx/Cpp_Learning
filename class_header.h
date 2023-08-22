class cylinder{
    public : 
        // Constructor
        cylinder(double xx,double yy){
            a = xx + yy;
            b= xx*yy;
        }         
       /*
        int get_a(){
            return a;
        }
        int set_b(int x,int y){
            a=x+y;
            b=x*y;
            return (a+b);
        }
        // Default Constructor 
        //cylinder()=default;
        */
        int volume(){
                auto vol = 3.14*a*b;
                return vol;
        }
    private :
        int a=10;
        int b=20;
};