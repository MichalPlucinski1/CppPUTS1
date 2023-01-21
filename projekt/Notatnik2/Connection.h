#pragma once
#include <msclr\marshal_cppstd.h>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>
#include "User.h"
#include "Note.h"
#include "Conversions.h"

using namespace System;
ref class Connection
{
public:
    sql::Driver* driver;
    sql::Connection* con;
    sql::Statement* stmt;
    sql::PreparedStatement* pstmt;
    sql::ResultSet* res;
    sql::ResultSet* res2;
    


    User^ user;
    Connection() {
        driver = get_driver_instance();
        con = driver->connect("46.242.244.142", "36850934_projinf", "Zawisza7!2");
        con->setSchema("36850934_projinf");
        user = gcnew User;
        stmt = con->createStatement();
    }

    ~Connection() { delete con; delete stmt; delete pstmt; delete res;}

    String^ login(String^ _email, String^ _haslo)
    {
        String^ error = "";
        try {

            
            std::string email = Conversion::cli2std(_email);
            std::string haslo = Conversion::cli2std(_haslo);

            res = stmt->executeQuery("SELECT Id, Email, Name, Surname, Password from Users where Email = \'" + email + "\'");
            if (res->next())
            {
                if (res->getString("Password") == haslo)
                {
                    std::string sid = res->getString("Id");
                    int id = stoi(sid); //konwersja
                    std::string imie = res->getString("Name");
                    std::string nazwisko = res->getString("Surname");
                    user->createUser(id, imie, nazwisko, _email, _haslo);
                    return "";
                }
                else {
                    return "Nieprawidlowe haslo ";
                }
            }
            
            else {
                return "Nieprawidlowy email";
            }

        }
        catch (sql::SQLException& e)
        {
            /*
            std::cout << "# ERR: SQLException in " << __FILE__;
            std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
            std::cout << "# ERR: " << e.what();
            std::cout << " (MySQL error code: " << e.getErrorCode();
            std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
            */
            
            error = " (MySQL error code: " + e.getErrorCode();
        }
        return error;
            
    }

    Note^ GetMainNote(int type) {
        Note^ note = gcnew Note;
        
        std::string _zawartosc;
        std::string _data;
        int _id;
        std::string _id_user;
        int bufor_for_ints;
        
        if (type == 0)
        {
            _id_user = "is NULL";
        }
        else if (type == 1)
        {
            bufor_for_ints = user->id;
            _id_user = "=" + std::to_string(bufor_for_ints);
        }

        res = stmt->executeQuery("SELECT Id, User_Id, Content, LastEditDate from Notes where User_Id " + _id_user);
        res->next();
        _zawartosc = res->getString("Content");
        _data = res->getString("LastEditDate");
        _id = res->getInt("Id");

        note->zawartosc = msclr::interop::marshal_as<System::String^>(_zawartosc);
        note->ostatniaedycja = msclr::interop::marshal_as<System::String^>(_data);
        note->id = _id;

        return note;

    }

    bool  UpdateMainNoteContent(int user_id, String^ _content) {
        std::string content = Conversion::cli2std(_content);
        stmt = con->createStatement();
        std::string id = std::to_string(user_id);
        if (user_id == 0)
        {
            if (stmt->execute("UPDATE `Notes` SET `Content` = '" + content + "' WHERE `Notes`.`Id` = 1; "))
            {
                return true;
            }
            return false;
        }

        else
        {

            if (stmt->execute("UPDATE `Notes` SET `Content` = '" + content + "' WHERE `Notes`.`User_Id` = " + id + "; "))
            {
                return true;
            }
            return false;
        }
       
       
        /*
        if (user_id == 0)
        {
            if (stmt->execute("UPDATE `Notes` SET `Content` = '" + content + "' WHERE `Notes`.`User_Id` = NULL  "))
            {
                return;
            }
            else {
                throw"Cannot update shiet";
            }
        }
        else
        {
            if (stmt->execute("UPDATE `Notes` SET `Content` = '" + content + "' WHERE `Notes`.`Id` = 2  "))
            {
                return;
            }
            else {
                throw"Cannot update shiet";
            }
        }
        */

    }
    


};

