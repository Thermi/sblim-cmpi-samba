// =======================================================================
// Linux_SambaAllowHostsForGlobalInstanceName.h
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
#ifndef Linux_SambaAllowHostsForGlobalInstanceName_h
#define Linux_SambaAllowHostsForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaHostInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaHostInstanceName m_PartComponent;
    Linux_SambaGlobalOptionsInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaAllowHostsForGlobalInstanceName();
  	
    Linux_SambaAllowHostsForGlobalInstanceName(const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaAllowHostsForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaAllowHostsForGlobalInstanceName();
       
    Linux_SambaAllowHostsForGlobalInstanceName& operator=(const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaHostInstanceName& aValue);
    const Linux_SambaHostInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement {
  	Linux_SambaAllowHostsForGlobalInstanceName* m_elementP;
  	Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaAllowHostsForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaAllowHostsForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaAllowHostsForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaAllowHostsForGlobalInstanceNameEnumeration(const Linux_SambaAllowHostsForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaAllowHostsForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaAllowHostsForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaAllowHostsForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

