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

   pData = t.id(& Person::m_Person, "Person_id", 0);

   pData = t.data(& Person::m_fistname, "fistname", 0, true, true);
   pData = t.data(& Person::m_lastname, "lastname", 0, true, true);
   pData = t.data(& Person::m_patronymic, "patronymic", 0, true, true);
   pData = t.data(& Person::m_phone_number, "phone_number", 0, true, true);
   pData = t.data(& Person::m_email, "email", 0, true, true);

   pRelation = t.relationOneToOne(& Person::m_Student, "Student", 0);
   pRelation = t.relationOneToOne(& Person::m_Head_employer, "Head_employer", 0);
   pRelation = t.relationOneToOne(& Person::m_Head_university, "Head_university", 0);
   pRelation = t.relationOneToOne(& Person::m_Contact_employer, "Contact_employer", 0);



   qx::QxValidatorX<Person> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Person::Person() : m_Person(0) { ; }

Person::Person(const long & id) : m_Person(id) { ; }

Person::~Person() { ; }

long Person::getPerson_id() const { return m_Person; }

QString Person::getfistname() const { return m_fistname; }

QString Person::getlastname() const { return m_lastname; }

QString Person::getpatronymic() const { return m_patronymic; }

QString Person::getphone_number() const { return m_phone_number; }

QString Person::getemail() const { return m_email; }

Person::type_Student Person::getStudent() const { return m_Student; }

Person::type_Head_employer Person::getHead_employer() const { return m_Head_employer; }

Person::type_Head_university Person::getHead_university() const { return m_Head_university; }

Person::type_Contact_employer Person::getContact_employer() const { return m_Contact_employer; }


void Person::setPerson_id(const long & val) { m_Person = val; }

void Person::setfistname(const QString & val) { m_fistname = val; }

void Person::setlastname(const QString & val) { m_lastname = val; }

void Person::setpatronymic(const QString & val) { m_patronymic = val; }

void Person::setphone_number(const QString & val) { m_phone_number = val; }

void Person::setemail(const QString & val) { m_email = val; }

void Person::setStudent(const Person::type_Student & val) { m_Student = val; }

void Person::setHead_employer(const Person::type_Head_employer & val) { m_Head_employer = val; }

void Person::setHead_university(const Person::type_Head_university & val) { m_Head_university = val; }

void Person::setContact_employer(const Person::type_Contact_employer & val) { m_Contact_employer = val; }

Person::type_Student Person::getStudent(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getStudent(); }
   QString sRelation = "{Person_id} | Student";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Person tmp;
   tmp.m_Person = this->m_Person;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_Student = tmp.m_Student; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_Student;
}

Person::type_Head_employer Person::getHead_employer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getHead_employer(); }
   QString sRelation = "{Person_id} | Head_employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Person tmp;
   tmp.m_Person = this->m_Person;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_Head_employer = tmp.m_Head_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_Head_employer;
}

Person::type_Head_university Person::getHead_university(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getHead_university(); }
   QString sRelation = "{Person_id} | Head_university";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Person tmp;
   tmp.m_Person = this->m_Person;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_Head_university = tmp.m_Head_university; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_Head_university;
}

Person::type_Contact_employer Person::getContact_employer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getContact_employer(); }
   QString sRelation = "{Person_id} | Contact_employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Person tmp;
   tmp.m_Person = this->m_Person;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_Contact_employer = tmp.m_Contact_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_Contact_employer;
}



