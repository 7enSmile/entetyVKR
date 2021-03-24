#include "../include/department_precompiled_header.gen.h"

#include "../include/Person.gen.h"
#include "../include/Student.gen.h"
#include "../include/Head_employer.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Person, Person)

namespace qx {

template <>
void register_class(QxClass<Person> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Person");

   pData = t.id(& Person::m_Person_id, "Person_id", 0);

   pData = t.data(& Person::m_fistname, "fistname", 0, true, true);
   pData = t.data(& Person::m_lastname, "lastname", 0, true, true);
   pData = t.data(& Person::m_patronymic, "patronymic", 0, true, true);
   pData = t.data(& Person::m_phone_number, "phone_number", 0, true, true);
   pData = t.data(& Person::m_email, "email", 0, true, true);

   pRelation = t.relationOneToMany(& Person::m_list_of_students, "list_of_students", "Person_id", 0);
   pRelation = t.relationOneToMany(& Person::m_list_of_Head_employer, "list_of_Head_employer", "person", 0);

   qx::QxValidatorX<Person> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Person::Person() : m_Person_id(0) { ; }

Person::Person(const long & id) : m_Person_id(id) { ; }

Person::~Person() { ; }

long Person::getPerson_id() const { return m_Person_id; }

QString Person::getfistname() const { return m_fistname; }

QString Person::getlastname() const { return m_lastname; }

QString Person::getpatronymic() const { return m_patronymic; }

QString Person::getphone_number() const { return m_phone_number; }

QString Person::getemail() const { return m_email; }

Person::type_list_of_students Person::getlist_of_students() const { return m_list_of_students; }

Person::type_list_of_students & Person::list_of_students() { return m_list_of_students; }

const Person::type_list_of_students & Person::list_of_students() const { return m_list_of_students; }

Person::type_list_of_Head_employer Person::getlist_of_Head_employer() const { return m_list_of_Head_employer; }

Person::type_list_of_Head_employer & Person::list_of_Head_employer() { return m_list_of_Head_employer; }

const Person::type_list_of_Head_employer & Person::list_of_Head_employer() const { return m_list_of_Head_employer; }

void Person::setPerson_id(const long & val) { m_Person_id = val; }

void Person::setfistname(const QString & val) { m_fistname = val; }

void Person::setlastname(const QString & val) { m_lastname = val; }

void Person::setpatronymic(const QString & val) { m_patronymic = val; }

void Person::setphone_number(const QString & val) { m_phone_number = val; }

void Person::setemail(const QString & val) { m_email = val; }

void Person::setlist_of_students(const Person::type_list_of_students & val) { m_list_of_students = val; }

void Person::setlist_of_Head_employer(const Person::type_list_of_Head_employer & val) { m_list_of_Head_employer = val; }

Person::type_list_of_students Person::getlist_of_students(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_students(); }
   QString sRelation = "{Person_id} | list_of_students";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Person tmp;
   tmp.m_Person_id = this->m_Person_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_students = tmp.m_list_of_students; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_students;
}

Person::type_list_of_students & Person::list_of_students(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_students(); }
   QString sRelation = "{Person_id} | list_of_students";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Person tmp;
   tmp.m_Person_id = this->m_Person_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_students = tmp.m_list_of_students; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_students;
}

Person::type_list_of_Head_employer Person::getlist_of_Head_employer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Head_employer(); }
   QString sRelation = "{Person_id} | list_of_Head_employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Person tmp;
   tmp.m_Person_id = this->m_Person_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Head_employer = tmp.m_list_of_Head_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Head_employer;
}

Person::type_list_of_Head_employer & Person::list_of_Head_employer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_Head_employer(); }
   QString sRelation = "{Person_id} | list_of_Head_employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Person tmp;
   tmp.m_Person_id = this->m_Person_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Head_employer = tmp.m_list_of_Head_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Head_employer;
}
