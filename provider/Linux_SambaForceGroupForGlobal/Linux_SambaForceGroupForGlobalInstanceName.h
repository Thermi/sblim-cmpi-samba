// =======================================================================
// Linux_SambaForceGroupForGlobalInstanceName.h
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
#ifndef Linux_SambaForceGroupForGlobalInstanceName_h
#define Linux_SambaForceGroupForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"
#include "Linux_SambaGroupInstanceName.h"


namespace genProvider {

  class Linux_SambaForceGroupForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaForceGroupForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaGlobalOptionsInstanceName m_GroupComponent;
    Linux_SambaGroupInstanceName m_PartComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int GroupComponent:1;
      unsigned int PartComponent:1;

    } isSet;
  
    public:
    Linux_SambaForceGroupForGlobalInstanceName();
  	
    Linux_SambaForceGroupForGlobalInstanceName(const Linux_SambaForceGroupForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaForceGroupForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaForceGroupForGlobalInstanceName();
       
    Linux_SambaForceGroupForGlobalInstanceName& operator=(const Linux_SambaForceGroupForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getGroupComponent() const;

    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaGroupInstanceName& aValue);
    const Linux_SambaGroupInstanceName& getPartComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement {
  	Linux_SambaForceGroupForGlobalInstanceName* m_elementP;
  	Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaForceGroupForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaForceGroupForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaForceGroupForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaForceGroupForGlobalInstanceNameEnumeration(const Linux_SambaForceGroupForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaForceGroupForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaForceGroupForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaForceGroupForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaForceGroupForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

