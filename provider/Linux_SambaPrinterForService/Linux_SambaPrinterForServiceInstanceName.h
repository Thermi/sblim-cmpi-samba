// =======================================================================
// Linux_SambaPrinterForServiceInstanceName.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaPrinterForServiceInstanceName_h
#define Linux_SambaPrinterForServiceInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"
#include "Linux_SambaServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterForServiceInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaPrinterForServiceInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaPrinterOptionsInstanceName m_SettingData;
    Linux_SambaServiceInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaPrinterForServiceInstanceName();
  	
    Linux_SambaPrinterForServiceInstanceName(const Linux_SambaPrinterForServiceInstanceName& anInstanceName);
  	   
    Linux_SambaPrinterForServiceInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaPrinterForServiceInstanceName();
       
    Linux_SambaPrinterForServiceInstanceName& operator=(const Linux_SambaPrinterForServiceInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaPrinterOptionsInstanceName& aValue);
    const Linux_SambaPrinterOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaServiceInstanceName& aValue);
    const Linux_SambaServiceInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaPrinterForServiceInstanceNameEnumerationElement {
  	Linux_SambaPrinterForServiceInstanceName* m_elementP;
  	Linux_SambaPrinterForServiceInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterForServiceInstanceNameEnumerationElement();
  	~Linux_SambaPrinterForServiceInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaPrinterForServiceInstanceNameEnumeration {
  
  	private:
    Linux_SambaPrinterForServiceInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaPrinterForServiceInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaPrinterForServiceInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaPrinterForServiceInstanceNameEnumeration();
  	  
    Linux_SambaPrinterForServiceInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaPrinterForServiceInstanceNameEnumeration(const Linux_SambaPrinterForServiceInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaPrinterForServiceInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaPrinterForServiceInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaPrinterForServiceInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaPrinterForServiceInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

