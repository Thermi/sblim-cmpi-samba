// =======================================================================
// Linux_SambaCommonSecurityForPrinterInstanceName.h
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
#ifndef Linux_SambaCommonSecurityForPrinterInstanceName_h
#define Linux_SambaCommonSecurityForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaCommonSecurityOptionsInstanceName.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaCommonSecurityOptionsInstanceName m_SettingData;
    Linux_SambaPrinterOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaCommonSecurityForPrinterInstanceName();
  	
    Linux_SambaCommonSecurityForPrinterInstanceName(const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaCommonSecurityForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaCommonSecurityForPrinterInstanceName();
       
    Linux_SambaCommonSecurityForPrinterInstanceName& operator=(const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaCommonSecurityOptionsInstanceName& aValue);
    const Linux_SambaCommonSecurityOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaPrinterOptionsInstanceName& aValue);
    const Linux_SambaPrinterOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement {
  	Linux_SambaCommonSecurityForPrinterInstanceName* m_elementP;
  	Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration(const Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaCommonSecurityForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaCommonSecurityForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

