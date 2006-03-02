// =======================================================================
// Linux_SambaShareSecurityOptionsInstanceName.h
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
#ifndef Linux_SambaShareSecurityOptionsInstanceName_h
#define Linux_SambaShareSecurityOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"


namespace genProvider {

  class Linux_SambaShareSecurityOptionsInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName);
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
    Linux_SambaShareSecurityOptionsInstanceName();
  	
    Linux_SambaShareSecurityOptionsInstanceName(const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName);
  	   
    Linux_SambaShareSecurityOptionsInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaShareSecurityOptionsInstanceName();
       
    Linux_SambaShareSecurityOptionsInstanceName& operator=(const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName);
       
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
  struct Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement {
  	Linux_SambaShareSecurityOptionsInstanceName* m_elementP;
  	Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement();
  	~Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaShareSecurityOptionsInstanceNameEnumeration {
  
  	private:
    Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaShareSecurityOptionsInstanceNameEnumeration();
  	  
    Linux_SambaShareSecurityOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaShareSecurityOptionsInstanceNameEnumeration(const Linux_SambaShareSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaShareSecurityOptionsInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaShareSecurityOptionsInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaShareSecurityOptionsInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

