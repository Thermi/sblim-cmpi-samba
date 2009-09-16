// =======================================================================
// Linux_SambaForceGroupForShareInstanceName.h
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
#ifndef Linux_SambaForceGroupForShareInstanceName_h
#define Linux_SambaForceGroupForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareOptionsInstanceName.h"
#include "Linux_SambaGroupInstanceName.h"


namespace genProvider {

  class Linux_SambaForceGroupForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaForceGroupForShareInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaShareOptionsInstanceName m_GroupComponent;
    Linux_SambaGroupInstanceName m_PartComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int GroupComponent:1;
      unsigned int PartComponent:1;

    } isSet;
  
    public:
    Linux_SambaForceGroupForShareInstanceName();
  	
    Linux_SambaForceGroupForShareInstanceName(const Linux_SambaForceGroupForShareInstanceName& anInstanceName);
  	   
    Linux_SambaForceGroupForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaForceGroupForShareInstanceName();
       
    Linux_SambaForceGroupForShareInstanceName& operator=(const Linux_SambaForceGroupForShareInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getGroupComponent() const;

    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaGroupInstanceName& aValue);
    const Linux_SambaGroupInstanceName& getPartComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaForceGroupForShareInstanceNameEnumerationElement {
  	Linux_SambaForceGroupForShareInstanceName* m_elementP;
  	Linux_SambaForceGroupForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForShareInstanceNameEnumerationElement();
  	~Linux_SambaForceGroupForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaForceGroupForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaForceGroupForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaForceGroupForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaForceGroupForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaForceGroupForShareInstanceNameEnumeration();
  	  
    Linux_SambaForceGroupForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaForceGroupForShareInstanceNameEnumeration(const Linux_SambaForceGroupForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaForceGroupForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaForceGroupForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaForceGroupForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaForceGroupForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

