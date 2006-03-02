// =======================================================================
// Linux_SambaPrinterAdminForGlobalRepositoryInstance.h
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaPrinterAdminForGlobalRepositoryInstance_h
#define Linux_SambaPrinterAdminForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterAdminForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterAdminForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterAdminForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterAdminForGlobalRepositoryInstance();
    Linux_SambaPrinterAdminForGlobalRepositoryInstance(
      const Linux_SambaPrinterAdminForGlobalRepositoryInstance& anInstance);
    Linux_SambaPrinterAdminForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterAdminForGlobalRepositoryInstance();
       
    Linux_SambaPrinterAdminForGlobalRepositoryInstance& operator=(
      const Linux_SambaPrinterAdminForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterAdminForGlobalInstanceName& anInstanceName);        
    const Linux_SambaPrinterAdminForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaPrinterAdminForGlobalRepositoryInstance* m_elementP;
    Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration();
    Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterAdminForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterAdminForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterAdminForGlobalRepositoryInstance& anInstance);

  };

}

#endif
