#ifndef _DEPARTMENT_EVENTS_H_
#define _DEPARTMENT_EVENTS_H_

class Employer;

class DEPARTMENT_EXPORT Events
{

   QX_REGISTER_FRIEND_CLASS(Events)

public:

   typedef std::shared_ptr<Employer> type_employer;

protected:

   long m_Events_id;
   QString m_name;
   QString m_description;
   QDate m_begin;
   QDate m_ending;
   type_employer m_employer;

public:

   Events();
   Events(const long & id);
   virtual ~Events();

   long getEvents_id() const;
   QString getname() const;
   QString getdescription() const;
   QDate getbegin() const;
   QDate getending() const;
   type_employer getemployer() const;

   void setEvents_id(const long & val);
   void setname(const QString & val);
   void setdescription(const QString & val);
   void setbegin(const QDate & val);
   void setending(const QDate & val);
   void setemployer(const type_employer & val);

   type_employer getemployer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_employer(bool key = false) { Q_UNUSED(key); return "employer"; }

public:

   static QString column_Events_id(bool key = false) { Q_UNUSED(key); return "Event_id"; }
   static QString column_name(bool key = false) { Q_UNUSED(key); return "name"; }
   static QString column_description(bool key = false) { Q_UNUSED(key); return "description"; }
   static QString column_begin(bool key = false) { Q_UNUSED(key); return "begin"; }
   static QString column_ending(bool key = false) { Q_UNUSED(key); return "ending"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Event") : QString("t_Event")); }

};

typedef std::shared_ptr<Events> Events_ptr;
typedef qx::QxCollection<long, Events_ptr> list_of_Events;
typedef std::shared_ptr<list_of_Events> list_of_Events_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Events, qx::trait::no_base_class_defined, 0, Events)

#include "../include/Employer.gen.h"



#endif // _DEPARTMENT_EVENTS_H_
