// =======================================================================
// Linux_SambaHostsForServiceInstanceName.h
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
#ifndef Linux_SambaHostsForServiceInstanceName_h
#define Linux_SambaHostsForServiceInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaHostInstanceName.h"
#include "Linux_SambaServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaHostsForServiceInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaHostsForServiceInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaHostInstanceName m_PartComponent;
    Linux_SambaServiceInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaHostsForServiceInstanceName();
  	
    Linux_SambaHostsForServiceInstanceName(const Linux_SambaHostsForServiceInstanceName& anInstanceName);
  	   
    Linux_SambaHostsForServiceInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaHostsForServiceInstanceName();
       
    Linux_SambaHostsForServiceInstanceName& operator=(const Linux_SambaHostsForServiceInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaHostInstanceName& aValue);
    const Linux_SambaHostInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaServiceInstanceName& aValue);
    const Linux_SambaServiceInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaHostsForServiceInstanceNameEnumerationElement {
  	Linux_SambaHostsForServiceInstanceName* m_elementP;
  	Linux_SambaHostsForServiceInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaHostsForServiceInstanceNameEnumerationElement();
  	~Linux_SambaHostsForServiceInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaHostsForServiceInstanceNameEnumeration {
  
  	private:
    Linux_SambaHostsForServiceInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaHostsForServiceInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaHostsForServiceInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaHostsForServiceInstanceNameEnumeration();
  	  
    Linux_SambaHostsForServiceInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaHostsForServiceInstanceNameEnumeration(const Linux_SambaHostsForServiceInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaHostsForServiceInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaHostsForServiceInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaHostsForServiceInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaHostsForServiceInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

