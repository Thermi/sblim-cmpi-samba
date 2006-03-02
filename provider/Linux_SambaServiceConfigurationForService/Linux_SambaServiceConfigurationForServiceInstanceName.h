// =======================================================================
// Linux_SambaServiceConfigurationForServiceInstanceName.h
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
#ifndef Linux_SambaServiceConfigurationForServiceInstanceName_h
#define Linux_SambaServiceConfigurationForServiceInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaServiceConfigurationInstanceName.h"
#include "Linux_SambaServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaServiceConfigurationInstanceName m_Configuration;
    Linux_SambaServiceInstanceName m_Element;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int Configuration:1;
      unsigned int Element:1;

    } isSet;
  
    public:
    Linux_SambaServiceConfigurationForServiceInstanceName();
  	
    Linux_SambaServiceConfigurationForServiceInstanceName(const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);
  	   
    Linux_SambaServiceConfigurationForServiceInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaServiceConfigurationForServiceInstanceName();
       
    Linux_SambaServiceConfigurationForServiceInstanceName& operator=(const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isConfigurationSet() const;
    void setConfiguration(const Linux_SambaServiceConfigurationInstanceName& aValue);
    const Linux_SambaServiceConfigurationInstanceName& getConfiguration() const;

    unsigned int isElementSet() const;
    void setElement(const Linux_SambaServiceInstanceName& aValue);
    const Linux_SambaServiceInstanceName& getElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement {
  	Linux_SambaServiceConfigurationForServiceInstanceName* m_elementP;
  	Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement();
  	~Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration {
  
  	private:
    Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration();
  	  
    Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration(const Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaServiceConfigurationForServiceInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaServiceConfigurationForServiceInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

