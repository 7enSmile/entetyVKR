#ifndef _DEPARTMENT_CONTACT_EMPLOYER_H_
#define _DEPARTMENT_CONTACT_EMPLOYER_H_

class Employer;
class Person;

class DEPARTMENT_EXPORT Contact_employer
{

   QX_REGISTER_FRIEND_CLASS(Contact_employer)

public:

   typedef std::shared_ptr<Employer> type_employer;
   typedef std::shared_ptr<Person> type_person;

protected:

   long m_Contact_employer_id;
   type_employer m_employer;
   type_person m_person;

public:

   Contact_employer();
   Contact_employer(const long & id);
   virtual ~Contact_employer();

   long getContact_employer_id() const;
   type_employer getemployer() const;
   type_person getperson() const;

   void setContact_employer_id(const long & val);
   void setemployer(const type_employer & val);
   void setperson(const type_person & val);

   type_employer getemployer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_person getperson(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_employer(bool key = false) { return (key ? QString("employer") : QString("employer_id")); }
   static QString relation_person(bool key = false) { return (key ? QString("person") : QString("persone_id")); }

public:

   static QString column_Contact_employer_id(bool key = false) { Q_UNUSED(key); return "Contact_employer_id"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Contact_employer") : QString("t_Contact_employer")); }

};

typedef std::shared_ptr<Contact_employer> Contact_employer_ptr;
typedef qx::QxCollection<long, Contact_employer_ptr> list_of_Contact_employer;
typedef std::shared_ptr<list_of_Contact_employer> list_of_Contact_employer_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Contact_employer, qx::trait::no_base_class_defined, 0, Contact_employer)

#include "../include/Employer.gen.h"
#include "../include/Person.gen.h"



#endif // _DEPARTMENT_CONTACT_EMPLOYER_H_
