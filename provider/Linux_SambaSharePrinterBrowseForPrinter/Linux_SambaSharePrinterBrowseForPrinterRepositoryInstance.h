// =======================================================================
// Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance.h
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
#ifndef Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance_h
#define Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaSharePrinterBrowseForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance();
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance(
      const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& anInstance);
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance();
       
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& operator=(
      const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaSharePrinterBrowseForPrinterInstanceName& anInstanceName);        
    const Linux_SambaSharePrinterBrowseForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance* m_elementP;
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration();
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& anInstance);

  };

}

#endif
