#include "../include/department_precompiled_header.gen.h"

#include "../include/Practice_result.gen.h"
#include "../include/Report.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Practice_result, Practice_result)

namespace qx {

template <>
void register_class(QxClass<Practice_result> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_practice_result");

   pData = t.id(& Practice_result::m_practice_result_id, "practice_result_id", 0);

   pData = t.data(& Practice_result::m_estimate_employer, "estimate_employer", 0, true, true);
   pData = t.data(& Practice_result::m_estimate_university, "estimate_university", 0, true, true);

   pRelation = t.relationOneToMany(& Practice_result::m_list_of_reports, "list_of_reports", "practice_result", 0);
   pRelation = t.relationOneToOne(& Practice_result::m_passing_practice, "passing_practice", 0);
   pRelation = t.relationManyToOne(& Practice_result::m_student, "Student_id", 0);

   qx::QxValidatorX<Practice_result> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Practice_result::Practice_result() : m_practice_result_id(0) { ; }

Practice_result::Practice_result(const long & id) : m_practice_result_id(id) { ; }

Practice_result::~Practice_result() { ; }

long Practice_result::getpractice_result_id() const { return m_practice_result_id; }

QString Practice_result::getestimate_employer() const { return m_estimate_employer; }

QString Practice_result::getestimate_university() const { return m_estimate_university; }

Practice_result::ListOfReport Practice_result::getlist_of_reports() const { return m_list_of_reports; }

Practice_result::ListOfReport & Practice_result::list_of_reports() { return m_list_of_reports; }

const Practice_result::ListOfReport & Practice_result::list_of_reports() const { return m_list_of_reports; }


Practice_result::PassingPractice_ptr Practice_result::getpassing_practice() const { return m_passing_practice; }

Practice_result::Student_ptr Practice_result::getStudent() const { return m_student; }

void Practice_result::setpractice_result_id(const long & val) { m_practice_result_id = val; }

void Practice_result::setestimate_employer(const QString & val) { m_estimate_employer = val; }

void Practice_result::setestimate_university(const QString & val) { m_estimate_university = val; }

void Practice_result::setlist_of_reports(const Practice_result::ListOfReport & val) { m_list_of_reports = val; }

void Practice_result::setpassing_practice(const Practice_result::PassingPractice_ptr & val) { m_passing_practice = val; }

void Practice_result::setStudent(const Practice_result::Student_ptr & val) { m_student = val; }

Practice_result::ListOfReport Practice_result::getlist_of_reports(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_reports(); }
   QString sRelation = "{practice_result_id} | list_of_reports";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Practice_result tmp;
   tmp.m_practice_result_id = this->m_practice_result_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_reports = tmp.m_list_of_reports; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_reports;
}

Practice_result::ListOfReport & Practice_result::list_of_reports(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_reports(); }
   QString sRelation = "{practice_result_id} | list_of_reports";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Practice_result tmp;
   tmp.m_practice_result_id = this->m_practice_result_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_reports = tmp.m_list_of_reports; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_reports;
}

Practice_result::PassingPractice_ptr Practice_result::getpassing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getpassing_practice(); }
   QString sRelation = "{Practice_result_id} | passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Practice_result tmp;
   tmp.m_practice_result_id = this->m_practice_result_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_passing_practice = tmp.m_passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_passing_practice;
}

Practice_result::Student_ptr Practice_result::getStudent(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getStudent(); }
   QString sRelation = "{Practice_result_id} | Student";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Practice_result tmp;
   tmp.m_practice_result_id = this->m_practice_result_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_student = tmp.m_student; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_student;
}
