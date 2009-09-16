// =======================================================================
// Linux_SambaDenyHostsForShareInstanceName.h
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
#ifndef Linux_SambaDenyHostsForShareInstanceName_h
#define Linux_SambaDenyHostsForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaHostInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaDenyHostsForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForShareInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaHostInstanceName m_PartComponent;
    Linux_SambaShareOptionsInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaDenyHostsForShareInstanceName();
  	
    Linux_SambaDenyHostsForShareInstanceName(const Linux_SambaDenyHostsForShareInstanceName& anInstanceName);
  	   
    Linux_SambaDenyHostsForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaDenyHostsForShareInstanceName();
       
    Linux_SambaDenyHostsForShareInstanceName& operator=(const Linux_SambaDenyHostsForShareInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaHostInstanceName& aValue);
    const Linux_SambaHostInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaDenyHostsForShareInstanceNameEnumerationElement {
  	Linux_SambaDenyHostsForShareInstanceName* m_elementP;
  	Linux_SambaDenyHostsForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaDenyHostsForShareInstanceNameEnumerationElement();
  	~Linux_SambaDenyHostsForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaDenyHostsForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaDenyHostsForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaDenyHostsForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaDenyHostsForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaDenyHostsForShareInstanceNameEnumeration();
  	  
    Linux_SambaDenyHostsForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaDenyHostsForShareInstanceNameEnumeration(const Linux_SambaDenyHostsForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaDenyHostsForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaDenyHostsForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaDenyHostsForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaDenyHostsForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

