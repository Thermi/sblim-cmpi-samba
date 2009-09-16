// =======================================================================
// Linux_SambaGlobalOptionsInstanceName.h
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
#ifndef Linux_SambaGlobalOptionsInstanceName_h
#define Linux_SambaGlobalOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"


namespace genProvider {

  class Linux_SambaGlobalOptionsInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGlobalOptionsInstanceName& anInstanceName);
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
    Linux_SambaGlobalOptionsInstanceName();
  	
    Linux_SambaGlobalOptionsInstanceName(const Linux_SambaGlobalOptionsInstanceName& anInstanceName);
  	   
    Linux_SambaGlobalOptionsInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGlobalOptionsInstanceName();
       
    Linux_SambaGlobalOptionsInstanceName& operator=(const Linux_SambaGlobalOptionsInstanceName& anInstanceName);
       
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
  struct Linux_SambaGlobalOptionsInstanceNameEnumerationElement {
  	Linux_SambaGlobalOptionsInstanceName* m_elementP;
  	Linux_SambaGlobalOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalOptionsInstanceNameEnumerationElement();
  	~Linux_SambaGlobalOptionsInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGlobalOptionsInstanceNameEnumeration {
  
  	private:
    Linux_SambaGlobalOptionsInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGlobalOptionsInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGlobalOptionsInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGlobalOptionsInstanceNameEnumeration();
  	  
    Linux_SambaGlobalOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGlobalOptionsInstanceNameEnumeration(const Linux_SambaGlobalOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGlobalOptionsInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGlobalOptionsInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGlobalOptionsInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGlobalOptionsInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

