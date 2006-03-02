// =======================================================================
// Linux_SambaReadListForPrinterRepositoryInstance.h
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
#ifndef Linux_SambaReadListForPrinterRepositoryInstance_h
#define Linux_SambaReadListForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaReadListForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaReadListForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaReadListForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaReadListForPrinterRepositoryInstance();
    Linux_SambaReadListForPrinterRepositoryInstance(
      const Linux_SambaReadListForPrinterRepositoryInstance& anInstance);
    Linux_SambaReadListForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaReadListForPrinterRepositoryInstance();
       
    Linux_SambaReadListForPrinterRepositoryInstance& operator=(
      const Linux_SambaReadListForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaReadListForPrinterInstanceName& anInstanceName);        
    const Linux_SambaReadListForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaReadListForPrinterRepositoryInstance* m_elementP;
    Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaReadListForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaReadListForPrinterRepositoryInstanceEnumeration();
    Linux_SambaReadListForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaReadListForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaReadListForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaReadListForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaReadListForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaReadListForPrinterRepositoryInstance& anInstance);

  };

}

#endif
