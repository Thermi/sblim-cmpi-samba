// =======================================================================
// Linux_SambaGlobalSecurityOptionsInstanceName.h
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
#ifndef Linux_SambaGlobalSecurityOptionsInstanceName_h
#define Linux_SambaGlobalSecurityOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"


namespace genProvider {

  class Linux_SambaGlobalSecurityOptionsInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    const char* m_InstanceID;
    const char* m_Name;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int InstanceID:1;
      unsigned int Name:1;

    } isSet;
  
    public:
    Linux_SambaGlobalSecurityOptionsInstanceName();
  	
    Linux_SambaGlobalSecurityOptionsInstanceName(const Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName);
  	   
    Linux_SambaGlobalSecurityOptionsInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGlobalSecurityOptionsInstanceName();
       
    Linux_SambaGlobalSecurityOptionsInstanceName& operator=(const Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isInstanceIDSet() const;
    void setInstanceID(const char* aValue, int aCopyFlag = 1);
    const char* getInstanceID() const;

    unsigned int isNameSet() const;
    void setName(const char* aValue, int aCopyFlag = 1);
    const char* getName() const;


  };
  
  //****************************************************************************
  struct Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement {
  	Linux_SambaGlobalSecurityOptionsInstanceName* m_elementP;
  	Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement();
  	~Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration {
  
  	private:
    Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration();
  	  
    Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration(const Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGlobalSecurityOptionsInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGlobalSecurityOptionsInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

