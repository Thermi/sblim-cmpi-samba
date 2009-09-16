// =======================================================================
// Linux_SambaDenyHostsForGlobalInstanceName.h
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
#ifndef Linux_SambaDenyHostsForGlobalInstanceName_h
#define Linux_SambaDenyHostsForGlobalInstanceName_h

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

  class Linux_SambaDenyHostsForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForGlobalInstanceName& anInstanceName);
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
    Linux_SambaDenyHostsForGlobalInstanceName();
  	
    Linux_SambaDenyHostsForGlobalInstanceName(const Linux_SambaDenyHostsForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaDenyHostsForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaDenyHostsForGlobalInstanceName();
       
    Linux_SambaDenyHostsForGlobalInstanceName& operator=(const Linux_SambaDenyHostsForGlobalInstanceName& anInstanceName);
       
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
  struct Linux_SambaDenyHostsForGlobalInstanceNameEnumerationElement {
  	Linux_SambaDenyHostsForGlobalInstanceName* m_elementP;
  	Linux_SambaDenyHostsForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaDenyHostsForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaDenyHostsForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaDenyHostsForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaDenyHostsForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaDenyHostsForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaDenyHostsForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaDenyHostsForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaDenyHostsForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaDenyHostsForGlobalInstanceNameEnumeration(const Linux_SambaDenyHostsForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaDenyHostsForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaDenyHostsForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaDenyHostsForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaDenyHostsForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

