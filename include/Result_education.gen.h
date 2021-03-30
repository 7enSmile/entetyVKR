#ifndef _DEPARTMENT_RESULT_EDUCATION_H_
#define _DEPARTMENT_RESULT_EDUCATION_H_

class Educational_program;
class Discipline;
class Employer;

class DEPARTMENT_EXPORT Result_education
{

   QX_REGISTER_FRIEND_CLASS(Result_education)

public:

   typedef std::shared_ptr<Educational_program> type_educational_program;
   typedef std::shared_ptr<Discipline> type_discipline;
   typedef qx::QxCollection<long, std::shared_ptr<Employer> > type_list_of_Employer;

protected:

   long m_Result_discipline_id;
   QString m_description;
   QString m_acquired_skills;
   type_educational_program m_educational_program;
   type_discipline m_discipline;
   type_list_of_Employer m_list_of_Employer;

public:

   Result_education();
   Result_education(const long & id);
   virtual ~Result_education();

   long getResult_discipline_id() const;
   QString getdescription() const;
   QString getacquired_skills() const;
   type_educational_program geteducational_program() const;
   type_discipline getdiscipline() const;
   type_list_of_Employer getlist_of_Employer() const;
   type_list_of_Employer & list_of_Employer();
   const type_list_of_Employer & list_of_Employer() const;

   void setResult_discipline_id(const long & val);
   void setdescription(const QString & val);
   void setacquired_skills(const QString & val);
   void seteducational_program(const type_educational_program & val);
   void setdiscipline(const type_discipline & val);
   void setlist_of_Employer(const type_list_of_Employer & val);

   type_educational_program geteducational_program(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_discipline getdiscipline(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Employer getlist_of_Employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Employer & list_of_Employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);


public:

   static QString relation_educational_program(bool key = false) { return (key ? QString("educational_program") : QString("Educational_program_id")); }
   static QString relation_discipline(bool key = false) { return (key ? QString("discipline") : QString("Discipline_id")); }
   static QString relation_list_of_Employer(bool key = false) { Q_UNUSED(key); return "list_of_Employer"; }


public:

   static QString column_Result_discipline_id(bool key = false) { Q_UNUSED(key); return "Result_discipline_id"; }
   static QString column_description(bool key = false) { Q_UNUSED(key); return "description"; }
   static QString column_acquired_skills(bool key = false) { Q_UNUSED(key); return "acquired_skills"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Result_education") : QString("t_Result_discipline")); }

};

typedef std::shared_ptr<Result_education> Result_education_ptr;
typedef qx::QxCollection<long, Result_education_ptr> list_of_Result_education;
typedef std::shared_ptr<list_of_Result_education> list_of_Result_education_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Result_education, qx::trait::no_base_class_defined, 0, Result_education)
#include "../include/Employer.gen.h"
#include "../include/Educational_program.gen.h"
#include "../include/Discipline.gen.h"



#endif // _DEPARTMENT_RESULT_EDUCATION_H_
