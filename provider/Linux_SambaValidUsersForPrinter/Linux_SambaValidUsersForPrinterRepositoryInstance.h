// =======================================================================
// Linux_SambaValidUsersForPrinterRepositoryInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#ifndef Linux_SambaValidUsersForPrinterRepositoryInstance_h
#define Linux_SambaValidUsersForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaValidUsersForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaValidUsersForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaValidUsersForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaValidUsersForPrinterRepositoryInstance();
    Linux_SambaValidUsersForPrinterRepositoryInstance(
      const Linux_SambaValidUsersForPrinterRepositoryInstance& anInstance);
    Linux_SambaValidUsersForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaValidUsersForPrinterRepositoryInstance();
       
    Linux_SambaValidUsersForPrinterRepositoryInstance& operator=(
      const Linux_SambaValidUsersForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName);        
    const Linux_SambaValidUsersForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaValidUsersForPrinterRepositoryInstance* m_elementP;
    Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaValidUsersForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration();
    Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaValidUsersForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaValidUsersForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaValidUsersForPrinterRepositoryInstance& anInstance);

  };

}

#endif
