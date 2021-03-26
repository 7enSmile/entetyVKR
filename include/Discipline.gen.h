#ifndef _DEPARTMENT_DISCIPLINE_H_
#define _DEPARTMENT_DISCIPLINE_H_

class Educational_program;
class Result_education;

class DEPARTMENT_EXPORT Discipline
{

   QX_REGISTER_FRIEND_CLASS(Discipline)

public:

   typedef std::shared_ptr<Educational_program> type_educational_program;
   typedef qx::QxCollection<long, std::shared_ptr<Result_education> > type_list_of_result_educational;

protected:

   long m_Discipline_id;
   int m_semester;
   QString m_name;
   QString m_description;
   type_educational_program m_educational_program;
   type_list_of_result_educational m_list_of_result_educational;

public:

   Discipline();
   Discipline(const long & id);
   virtual ~Discipline();

   long getDiscipline_id() const;
   int getsemester() const;
   QString getname() const;
   QString getdescription() const;
   type_educational_program geteducational_program() const;
   type_list_of_result_educational getlist_of_result_educational() const;
   type_list_of_result_educational & list_of_result_educational();
   const type_list_of_result_educational & list_of_result_educational() const;

   void setDiscipline_id(const long & val);
   void setsemester(const int & val);
   void setname(const QString & val);
   void setdescription(const QString & val);
   void seteducational_program(const type_educational_program & val);
   void setlist_of_result_educational(const type_list_of_result_educational & val);

   type_educational_program geteducational_program(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_result_educational getlist_of_result_educational(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_result_educational & list_of_result_educational(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_educational_program(bool key = false) { return (key ? QString("educational_program") : QString("Educational_program_id")); }
   static QString relation_list_of_result_educational(bool key = false) { Q_UNUSED(key); return "list_of_result_educational"; }

public:

   static QString column_Discipline_id(bool key = false) { Q_UNUSED(key); return "Discipline_id"; }
   static QString column_semester(bool key = false) { Q_UNUSED(key); return "semester"; }
   static QString column_name(bool key = false) { Q_UNUSED(key); return "name"; }
   static QString column_description(bool key = false) { Q_UNUSED(key); return "description"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Discipline") : QString("t_Discipline")); }

};

typedef std::shared_ptr<Discipline> Discipline_ptr;
typedef qx::QxCollection<long, Discipline_ptr> list_of_Discipline;
typedef std::shared_ptr<list_of_Discipline> list_of_Discipline_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Discipline, qx::trait::no_base_class_defined, 0, Discipline)

#include "../include/Educational_program.gen.h"
#include "../include/Result_education.gen.h"



#endif // _DEPARTMENT_DISCIPLINE_H_
