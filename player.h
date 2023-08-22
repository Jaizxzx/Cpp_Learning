class player : public person{
    private:
        int number_of_sport{3};
        int  interest_in{2};
    public:
        player() = default;
        //player(int number_of_sport, int  interest_in);
        player(int number_of_sport,int interest_in){
            cout<<number_of_sport<<  interest_in<<endl;
        }
};