// =======================================================================
// Linux_SambaServiceConfigurationInstanceName.h
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
#ifndef Linux_SambaServiceConfigurationInstanceName_h
#define Linux_SambaServiceConfigurationInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"


namespace genProvider {

  class Linux_SambaServiceConfigurationInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaServiceConfigurationInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    const char* m_Name;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int Name:1;

    } isSet;
  
    public:
    Linux_SambaServiceConfigurationInstanceName();
  	
    Linux_SambaServiceConfigurationInstanceName(const Linux_SambaServiceConfigurationInstanceName& anInstanceName);
  	   
    Linux_SambaServiceConfigurationInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaServiceConfigurationInstanceName();
       
    Linux_SambaServiceConfigurationInstanceName& operator=(const Linux_SambaServiceConfigurationInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isNameSet() const;
    void setName(const char* aValue, int aCopyFlag = 1);
    const char* getName() const;


  };
  
  //****************************************************************************
  struct Linux_SambaServiceConfigurationInstanceNameEnumerationElement {
  	Linux_SambaServiceConfigurationInstanceName* m_elementP;
  	Linux_SambaServiceConfigurationInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceConfigurationInstanceNameEnumerationElement();
  	~Linux_SambaServiceConfigurationInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaServiceConfigurationInstanceNameEnumeration {
  
  	private:
    Linux_SambaServiceConfigurationInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaServiceConfigurationInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaServiceConfigurationInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaServiceConfigurationInstanceNameEnumeration();
  	  
    Linux_SambaServiceConfigurationInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaServiceConfigurationInstanceNameEnumeration(const Linux_SambaServiceConfigurationInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaServiceConfigurationInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaServiceConfigurationInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaServiceConfigurationInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaServiceConfigurationInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

