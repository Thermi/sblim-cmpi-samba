// =======================================================================
// Linux_SambaGlobalForServiceInstanceName.h
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
#ifndef Linux_SambaGlobalForServiceInstanceName_h
#define Linux_SambaGlobalForServiceInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"
#include "Linux_SambaServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalForServiceInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGlobalForServiceInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaGlobalOptionsInstanceName m_SettingData;
    Linux_SambaServiceInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaGlobalForServiceInstanceName();
  	
    Linux_SambaGlobalForServiceInstanceName(const Linux_SambaGlobalForServiceInstanceName& anInstanceName);
  	   
    Linux_SambaGlobalForServiceInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGlobalForServiceInstanceName();
       
    Linux_SambaGlobalForServiceInstanceName& operator=(const Linux_SambaGlobalForServiceInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaServiceInstanceName& aValue);
    const Linux_SambaServiceInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaGlobalForServiceInstanceNameEnumerationElement {
  	Linux_SambaGlobalForServiceInstanceName* m_elementP;
  	Linux_SambaGlobalForServiceInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalForServiceInstanceNameEnumerationElement();
  	~Linux_SambaGlobalForServiceInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGlobalForServiceInstanceNameEnumeration {
  
  	private:
    Linux_SambaGlobalForServiceInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGlobalForServiceInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGlobalForServiceInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGlobalForServiceInstanceNameEnumeration();
  	  
    Linux_SambaGlobalForServiceInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGlobalForServiceInstanceNameEnumeration(const Linux_SambaGlobalForServiceInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGlobalForServiceInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGlobalForServiceInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGlobalForServiceInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGlobalForServiceInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

