// =======================================================================
// Linux_SambaSharePrinterBrowseForPrinterInstance.h
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
#ifndef Linux_SambaSharePrinterBrowseForPrinterInstance_h
#define Linux_SambaSharePrinterBrowseForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaSharePrinterBrowseForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaSharePrinterBrowseForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaSharePrinterBrowseForPrinterInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaSharePrinterBrowseForPrinterInstance();
    Linux_SambaSharePrinterBrowseForPrinterInstance(
      const Linux_SambaSharePrinterBrowseForPrinterInstance& anInstance);
    Linux_SambaSharePrinterBrowseForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaSharePrinterBrowseForPrinterInstance();
       
    Linux_SambaSharePrinterBrowseForPrinterInstance& operator=(
      const Linux_SambaSharePrinterBrowseForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaSharePrinterBrowseForPrinterInstanceName& anInstanceName);        
    const Linux_SambaSharePrinterBrowseForPrinterInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement {

    Linux_SambaSharePrinterBrowseForPrinterInstance* m_elementP;
    Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement();
    ~Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration {

    private:
    Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration();
    Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration(
      const Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaSharePrinterBrowseForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaSharePrinterBrowseForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaSharePrinterBrowseForPrinterInstance& anInstance);

  };

}

#endif
