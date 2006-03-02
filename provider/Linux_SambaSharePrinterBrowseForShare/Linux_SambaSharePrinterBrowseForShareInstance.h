// =======================================================================
// Linux_SambaSharePrinterBrowseForShareInstance.h
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
#ifndef Linux_SambaSharePrinterBrowseForShareInstance_h
#define Linux_SambaSharePrinterBrowseForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaSharePrinterBrowseForShareInstance& anInstance);
    void reset();
       
    Linux_SambaSharePrinterBrowseForShareInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaSharePrinterBrowseForShareInstance();
    Linux_SambaSharePrinterBrowseForShareInstance(
      const Linux_SambaSharePrinterBrowseForShareInstance& anInstance);
    Linux_SambaSharePrinterBrowseForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaSharePrinterBrowseForShareInstance();
       
    Linux_SambaSharePrinterBrowseForShareInstance& operator=(
      const Linux_SambaSharePrinterBrowseForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaSharePrinterBrowseForShareInstanceName& anInstanceName);        
    const Linux_SambaSharePrinterBrowseForShareInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement {

    Linux_SambaSharePrinterBrowseForShareInstance* m_elementP;
    Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement();
    ~Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaSharePrinterBrowseForShareInstanceEnumeration {

    private:
    Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaSharePrinterBrowseForShareInstanceEnumeration();
    Linux_SambaSharePrinterBrowseForShareInstanceEnumeration(
      const Linux_SambaSharePrinterBrowseForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaSharePrinterBrowseForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaSharePrinterBrowseForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaSharePrinterBrowseForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaSharePrinterBrowseForShareInstance& anInstance);

  };

}

#endif
