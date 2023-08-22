/*class person{
    private:

    public:
        person() = default; 
        person(fname,lname);
        person(fname, lname){
            cout<<"Name of the person :"<< fname << lname <<endl;
        }
        ~person();

};*/
class person
{
public:
    double power_up{1000};
    double strength{500};
public:
    person(double power_up ,double strength);
    ~person();
};

person(double power_up ,double strength)
{
    cout<<"Name of the person :"<< power_up << strength <<endl;
    return 0;
}

person::~person()
{
    cout<<"destructor is called"<<endl;
};
