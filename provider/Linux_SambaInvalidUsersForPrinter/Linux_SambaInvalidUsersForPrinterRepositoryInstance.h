// =======================================================================
// Linux_SambaInvalidUsersForPrinterRepositoryInstance.h
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
#ifndef Linux_SambaInvalidUsersForPrinterRepositoryInstance_h
#define Linux_SambaInvalidUsersForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaInvalidUsersForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaInvalidUsersForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaInvalidUsersForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaInvalidUsersForPrinterRepositoryInstance();
    Linux_SambaInvalidUsersForPrinterRepositoryInstance(
      const Linux_SambaInvalidUsersForPrinterRepositoryInstance& anInstance);
    Linux_SambaInvalidUsersForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaInvalidUsersForPrinterRepositoryInstance();
       
    Linux_SambaInvalidUsersForPrinterRepositoryInstance& operator=(
      const Linux_SambaInvalidUsersForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName);        
    const Linux_SambaInvalidUsersForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaInvalidUsersForPrinterRepositoryInstance* m_elementP;
    Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration();
    Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaInvalidUsersForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaInvalidUsersForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaInvalidUsersForPrinterRepositoryInstance& anInstance);

  };

}

#endif
