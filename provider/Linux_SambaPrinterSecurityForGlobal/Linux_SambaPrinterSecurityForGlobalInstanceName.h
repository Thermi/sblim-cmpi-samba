// =======================================================================
// Linux_SambaPrinterSecurityForGlobalInstanceName.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
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
#ifndef Linux_SambaPrinterSecurityForGlobalInstanceName_h
#define Linux_SambaPrinterSecurityForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaPrinterSecurityForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaPrinterSecurityOptionsInstanceName m_SettingData;
    Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaPrinterSecurityForGlobalInstanceName();
  	
    Linux_SambaPrinterSecurityForGlobalInstanceName(const Linux_SambaPrinterSecurityForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaPrinterSecurityForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaPrinterSecurityForGlobalInstanceName();
       
    Linux_SambaPrinterSecurityForGlobalInstanceName& operator=(const Linux_SambaPrinterSecurityForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaPrinterSecurityOptionsInstanceName& aValue);
    const Linux_SambaPrinterSecurityOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement {
  	Linux_SambaPrinterSecurityForGlobalInstanceName* m_elementP;
  	Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaPrinterSecurityForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration(const Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaPrinterSecurityForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaPrinterSecurityForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaPrinterSecurityForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

