#include "../include/department_precompiled_header.gen.h"

#include "../include/Task_practice.gen.h"
#include "../include/Passing_practice.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Task_practice, Task_practice)

namespace qx {

template <>
void register_class(QxClass<Task_practice> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Task_practice");

   pData = t.id(& Task_practice::m_Task_id, "Task_id", 0);

   pData = t.data(& Task_practice::m_description, "description", 0, true, true);

   pRelation = t.relationOneToMany(& Task_practice::m_list_of_passeing_practice, "list_of_passeing_practice", "Task_id", 0);

   qx::QxValidatorX<Task_practice> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Task_practice::Task_practice() : m_Task_id(0) { ; }

Task_practice::Task_practice(const long & id) : m_Task_id(id) { ; }

Task_practice::~Task_practice() { ; }

long Task_practice::getTask_id() const { return m_Task_id; }

QString Task_practice::getdescription() const { return m_description; }

Task_practice::type_list_of_passeing_practice Task_practice::getlist_of_passeing_practice() const { return m_list_of_passeing_practice; }

Task_practice::type_list_of_passeing_practice & Task_practice::list_of_passeing_practice() { return m_list_of_passeing_practice; }

const Task_practice::type_list_of_passeing_practice & Task_practice::list_of_passeing_practice() const { return m_list_of_passeing_practice; }

void Task_practice::setTask_id(const long & val) { m_Task_id = val; }

void Task_practice::setdescription(const QString & val) { m_description = val; }

void Task_practice::setlist_of_passeing_practice(const Task_practice::type_list_of_passeing_practice & val) { m_list_of_passeing_practice = val; }

Task_practice::type_list_of_passeing_practice Task_practice::getlist_of_passeing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_passeing_practice(); }
   QString sRelation = "{Task_id} | list_of_passeing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Task_practice tmp;
   tmp.m_Task_id = this->m_Task_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passeing_practice = tmp.m_list_of_passeing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passeing_practice;
}

Task_practice::type_list_of_passeing_practice & Task_practice::list_of_passeing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_passeing_practice(); }
   QString sRelation = "{Task_id} | list_of_passeing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Task_practice tmp;
   tmp.m_Task_id = this->m_Task_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passeing_practice = tmp.m_list_of_passeing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passeing_practice;
}
