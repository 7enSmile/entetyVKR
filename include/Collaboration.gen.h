/************************************************************************************************
** File created by QxEntityEditor 1.2.6 (2021/03/24 12:12) : please, do NOT modify this file ! **
************************************************************************************************/

#ifndef _DEPARTMENT_COLLABORATION_H_
#define _DEPARTMENT_COLLABORATION_H_

class Employer;

class DEPARTMENT_EXPORT Collaboration
{

   QX_REGISTER_FRIEND_CLASS(Collaboration)

public:

   typedef qx::QxCollection<long, std::shared_ptr<Employer> > type_list_of_employers;

protected:

   long m_Collaboration_id;
   QString m_name;
   QString m_description;
   type_list_of_employers m_list_of_employers;

public:

   Collaboration();
   Collaboration(const long & id);
   virtual ~Collaboration();

   long getCollaboration_id() const;
   QString getname() const;
   QString getdescription() const;
   type_list_of_employers getlist_of_employers() const;
   type_list_of_employers & list_of_employers();
   const type_list_of_employers & list_of_employers() const;

   void setCollaboration_id(const long & val);
   void setname(const QString & val);
   void setdescription(const QString & val);
   void setlist_of_employers(const type_list_of_employers & val);

   type_list_of_employers getlist_of_employers(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_employers & list_of_employers(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_list_of_employers(bool key = false) { Q_UNUSED(key); return "list_of_employers"; }

public:

   static QString column_Collaboration_id(bool key = false) { Q_UNUSED(key); return "Collaboration_id"; }
   static QString column_name(bool key = false) { Q_UNUSED(key); return "name"; }
   static QString column_description(bool key = false) { Q_UNUSED(key); return "description"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Collaboration") : QString("t_Collaboration")); }

};

typedef std::shared_ptr<Collaboration> Collaboration_ptr;
typedef qx::QxCollection<long, Collaboration_ptr> list_of_Collaboration;
typedef std::shared_ptr<list_of_Collaboration> list_of_Collaboration_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Collaboration, qx::trait::no_base_class_defined, 0, Collaboration)

#include "../include/Employer.gen.h"

#include "../custom/include/Collaboration.h"

#endif // _DEPARTMENT_COLLABORATION_H_
