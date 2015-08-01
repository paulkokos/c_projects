#ifndef SERVER_H
#define SERVER_H


class Server
{
    public:
        Server(char letterName);
        static int getTurn();
        void serveOne();
        static bool stillOpen();
        virtual ~Server();
    protected:
    private:
        static int turn;
        static int lastServed;
        static bool nowOpen;
        char name;
};

#endif // SERVER_H
