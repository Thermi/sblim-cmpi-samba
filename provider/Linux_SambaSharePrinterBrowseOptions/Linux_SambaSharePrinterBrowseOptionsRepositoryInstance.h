// =======================================================================
// Linux_SambaSharePrinterBrowseOptionsRepositoryInstance.h
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
#ifndef Linux_SambaSharePrinterBrowseOptionsRepositoryInstance_h
#define Linux_SambaSharePrinterBrowseOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaSharePrinterBrowseOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaSharePrinterBrowseOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaSharePrinterBrowseOptionsRepositoryInstance();
    Linux_SambaSharePrinterBrowseOptionsRepositoryInstance(
      const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& anInstance);
    Linux_SambaSharePrinterBrowseOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaSharePrinterBrowseOptionsRepositoryInstance();
       
    Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& operator=(
      const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaSharePrinterBrowseOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaSharePrinterBrowseOptionsRepositoryInstance* m_elementP;
    Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumeration();
    Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumeration(
      const Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& anInstance);

  };

}

#endif
