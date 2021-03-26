#ifndef _DEPARTMENT_EDUCATIONAL_PROGRAM_H_
#define _DEPARTMENT_EDUCATIONAL_PROGRAM_H_

class Result_education;
class Discipline;

class DEPARTMENT_EXPORT Educational_program
{

   QX_REGISTER_FRIEND_CLASS(Educational_program)

public:

   typedef qx::QxCollection<long, std::shared_ptr<Result_education> > type_list_of_result_education;
   typedef qx::QxCollection<long, std::shared_ptr<Discipline> > type_list_of_discipline;

protected:

   long m_educational_program_id;
   QString m_name;
   QString m_description;
   QString m_field;
   QString m_focus;
   type_list_of_result_education m_list_of_result_education;
   type_list_of_discipline m_list_of_discipline;

public:

   Educational_program();
   Educational_program(const long & id);
   virtual ~Educational_program();

   long geteducational_program_id() const;
   QString getname() const;
   QString getdescription() const;
   QString getfield() const;
   QString getfocus() const;
   type_list_of_result_education getlist_of_result_education() const;
   type_list_of_result_education & list_of_result_education();
   const type_list_of_result_education & list_of_result_education() const;
   type_list_of_discipline getlist_of_discipline() const;
   type_list_of_discipline & list_of_discipline();
   const type_list_of_discipline & list_of_discipline() const;

   void seteducational_program_id(const long & val);
   void setname(const QString & val);
   void setdescription(const QString & val);
   void setfield(const QString & val);
   void setfocus(const QString & val);
   void setlist_of_result_education(const type_list_of_result_education & val);
   void setlist_of_discipline(const type_list_of_discipline & val);

   type_list_of_result_education getlist_of_result_education(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_result_education & list_of_result_education(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_discipline getlist_of_discipline(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_discipline & list_of_discipline(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_list_of_result_education(bool key = false) { Q_UNUSED(key); return "list_of_result_education"; }
   static QString relation_list_of_discipline(bool key = false) { Q_UNUSED(key); return "list_of_discipline"; }

public:

   static QString column_educational_program_id(bool key = false) { Q_UNUSED(key); return "educational_program_id"; }
   static QString column_name(bool key = false) { Q_UNUSED(key); return "name"; }
   static QString column_description(bool key = false) { Q_UNUSED(key); return "description"; }
   static QString column_field(bool key = false) { Q_UNUSED(key); return "field"; }
   static QString column_focus(bool key = false) { Q_UNUSED(key); return "focus"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Educational_program") : QString("t_educational_program")); }

};

typedef std::shared_ptr<Educational_program> Educational_program_ptr;
typedef qx::QxCollection<long, Educational_program_ptr> list_of_Educational_program;
typedef std::shared_ptr<list_of_Educational_program> list_of_Educational_program_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Educational_program, qx::trait::no_base_class_defined, 0, Educational_program)

#include "../include/Result_education.gen.h"
#include "../include/Discipline.gen.h"



#endif // _DEPARTMENT_EDUCATIONAL_PROGRAM_H_
