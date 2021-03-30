/************************************************************************************************
** File created by QxEntityEditor 1.2.6 (2021/03/24 12:12) : please, do NOT modify this file ! **
************************************************************************************************/

#include "../include/department_precompiled_header.gen.h"

#include "../include/Practice.gen.h"
#include "../include/Employer.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Practice, Practice)

namespace qx {

template <>
void register_class(QxClass<Practice> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Practice");

   pData = t.id(& Practice::m_Practice_id, "Practice_id", 0);



   pRelation = t.relationManyToMany(& Practice::m_list_of_employers, "list_of_employers", "t_qxee_Practice_Employer", "Practice_id", "Employer_id", 0);
   pRelation = t.relationOneToMany(& Practice::m_list_of_passing_practice, "list_of_passing_practice", "practice", 0);
   pRelation = t.relationManyToOne(& Practice::m_education_program, "education_program", 0);
   pRelation->getDataMember()->setName("Education_program_id");


   qx::QxValidatorX<Practice> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Practice::Practice() : m_Practice_id(0) { ; }

Practice::Practice(const long & id) : m_Practice_id(id) { ; }

Practice::~Practice() { ; }

long Practice::getPractice_id() const { return m_Practice_id; }



Practice::type_list_of_employers Practice::getlist_of_Employers() const { return m_list_of_employers; }

Practice::type_list_of_employers & Practice::list_of_employers() { return m_list_of_employers; }

const Practice::type_list_of_employers & Practice::list_of_employers() const { return m_list_of_employers; }

Practice::type_list_of_passing_practice Practice::getlist_of_Passing_practice() const { return m_list_of_passing_practice; }

Practice::type_education_program Practice::geteducation_program() const { return m_education_program; }


Practice::type_list_of_passing_practice & Practice::list_of_passing_practice() { return m_list_of_passing_practice; }

const Practice::type_list_of_passing_practice & Practice::list_of_passing_practice() const { return m_list_of_passing_practice; }


void Practice::setPractice_id(const long & val) { m_Practice_id = val; }



void Practice::setlist_of_Employers(const Practice::type_list_of_employers & val) { m_list_of_employers = val; }

void Practice::setlist_of_Passing_practice(const Practice::type_list_of_passing_practice & val) { m_list_of_passing_practice = val; }

void Practice::seteducation_program(const Practice::type_education_program & val) { m_education_program = val; }


Practice::type_list_of_employers Practice::getlist_of_Employers(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Employers(); }
   QString sRelation = "{Practice_id} | list_of_employers";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Practice tmp;
   tmp.m_Practice_id = this->m_Practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_employers = tmp.m_list_of_employers; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_employers;
}

Practice::type_list_of_employers & Practice::list_of_employers(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_employers(); }
   QString sRelation = "{Practice_id} | list_of_employers";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Practice tmp;
   tmp.m_Practice_id = this->m_Practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_employers = tmp.m_list_of_employers; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_employers;
}

Practice::type_list_of_passing_practice Practice::getlist_of_Passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Passing_practice(); }
   QString sRelation = "{Practice_id} | list_of_passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Practice tmp;
   tmp.m_Practice_id = this->m_Practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passing_practice = tmp.m_list_of_passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passing_practice;
}

Practice::type_list_of_passing_practice & Practice::list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_passing_practice(); }
   QString sRelation = "{Practice_id} | list_of_passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Practice tmp;
   tmp.m_Practice_id = this->m_Practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passing_practice = tmp.m_list_of_passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passing_practice;
}

Practice::type_education_program Practice::geteducation_program(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return geteducation_program(); }
   QString sRelation = "{Practice_id} | education_program";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Practice tmp;
   tmp.m_Practice_id = this->m_Practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_education_program = tmp.m_education_program; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_education_program;
}

