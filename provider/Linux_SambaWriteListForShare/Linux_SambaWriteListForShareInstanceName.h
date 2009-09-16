// =======================================================================
// Linux_SambaWriteListForShareInstanceName.h
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
#ifndef Linux_SambaWriteListForShareInstanceName_h
#define Linux_SambaWriteListForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForShareInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaUserInstanceName m_PartComponent;
    Linux_SambaShareOptionsInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaWriteListForShareInstanceName();
  	
    Linux_SambaWriteListForShareInstanceName(const Linux_SambaWriteListForShareInstanceName& anInstanceName);
  	   
    Linux_SambaWriteListForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaWriteListForShareInstanceName();
       
    Linux_SambaWriteListForShareInstanceName& operator=(const Linux_SambaWriteListForShareInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaUserInstanceName& aValue);
    const Linux_SambaUserInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaWriteListForShareInstanceNameEnumerationElement {
  	Linux_SambaWriteListForShareInstanceName* m_elementP;
  	Linux_SambaWriteListForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForShareInstanceNameEnumerationElement();
  	~Linux_SambaWriteListForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaWriteListForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaWriteListForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaWriteListForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaWriteListForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaWriteListForShareInstanceNameEnumeration();
  	  
    Linux_SambaWriteListForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaWriteListForShareInstanceNameEnumeration(const Linux_SambaWriteListForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaWriteListForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaWriteListForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaWriteListForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaWriteListForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

