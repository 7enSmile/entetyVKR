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

   qx::QxValidatorX<Practice> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Practice::Practice() : m_Practice_id(0) { ; }

Practice::Practice(const long & id) : m_Practice_id(id) { ; }

Practice::~Practice() { ; }

long Practice::getPractice_id() const { return m_Practice_id; }



Practice::type_list_of_employers Practice::getlist_of_employers() const { return m_list_of_employers; }

Practice::type_list_of_employers & Practice::list_of_employers() { return m_list_of_employers; }

const Practice::type_list_of_employers & Practice::list_of_employers() const { return m_list_of_employers; }

void Practice::setPractice_id(const long & val) { m_Practice_id = val; }



void Practice::setlist_of_employers(const Practice::type_list_of_employers & val) { m_list_of_employers = val; }

Practice::type_list_of_employers Practice::getlist_of_employers(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_employers(); }
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
