// =======================================================================
// Linux_SambaSharePrinterBrowseForShareRepositoryInstance.h
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
#ifndef Linux_SambaSharePrinterBrowseForShareRepositoryInstance_h
#define Linux_SambaSharePrinterBrowseForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaSharePrinterBrowseForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaSharePrinterBrowseForShareRepositoryInstance();
    Linux_SambaSharePrinterBrowseForShareRepositoryInstance(
      const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& anInstance);
    Linux_SambaSharePrinterBrowseForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaSharePrinterBrowseForShareRepositoryInstance();
       
    Linux_SambaSharePrinterBrowseForShareRepositoryInstance& operator=(
      const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaSharePrinterBrowseForShareInstanceName& anInstanceName);        
    const Linux_SambaSharePrinterBrowseForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement {

    Linux_SambaSharePrinterBrowseForShareRepositoryInstance* m_elementP;
    Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration();
    Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration(
      const Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& anInstance);

  };

}

#endif
