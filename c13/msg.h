#ifndef MSG_H
#define MSG_H

#include "my.h"

class Message;

/*
 * Folder use a set store which messages are in it
 * support save and remove funciton
 */
class Folder {
    private:
        unordered_set<Message*> usm;
        string name;
    public:
        void save(Message& m);
        void remove(Message& m);
        void show();
        Folder(const string& s = string()): name(s) {}
};

/*
 * message  support how message can be assigned or copied 
 * and how folders those containing megs will be updated when
 * those changes occurred
 */
class Message {
    friend void Folder::show();
    private:
       shared_ptr<string> sps;  //this share because we can assign
       unordered_set<Folder*> usf; // this also should share because we can assign,after assign, 
               //if modify remove folder fron one message class, should also be removed from another message class
    public:
       void save(Folder &f);
       void remove(Folder &f);
       Message(const string& s = string()):sps(new string(s)) {};
       Message(const Message& msg); //copy constructor
       Message& operator=(Message &msg); //assign = 
};

// Folder function definition
void Folder::save(Message& m) {
    usm.insert(&m);
}

void Folder::remove(Message& m) {
    usm.erase(&m);
}

void Folder::show() {
    cout << "in Folder " << name  << " : " ;
    for(auto i: usm) {
        cout << *i->sps << " ";
    }
    cout << endl;
}

//Message funciton definition
Message::Message(const Message& msg) { 
    /*
     * copy string content, insert into every folder
     */
    sps = make_shared<string>(*msg.sps);
    for (auto i: msg.usf) {
        usf.insert(i);
        i->save(*this); //class Folder
    }
}

Message& Message::operator=(Message &msg) {
    /*
     * copy new ptr to old, remove old from
     * every folder, add those folder into new msg's folder
     */
    sps = msg.sps;
    for (auto i:usf) { //operate folder
        usf.erase(i);
        msg.usf.insert(i);
    }
    usf.erase(usf.begin(), usf.end());  //operate message
    usf.insert(msg.usf.begin(), msg.usf.end());
    return *this;
}

void Message::save(Folder &f) {
    usf.insert(&f);
    f.save(*this);
}

void Message::remove(Folder &f) {
    usf.erase(&f);
    f.remove(*this);
}

#endif
