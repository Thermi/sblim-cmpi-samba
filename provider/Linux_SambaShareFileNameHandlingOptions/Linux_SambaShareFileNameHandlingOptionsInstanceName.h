// =======================================================================
// Linux_SambaShareFileNameHandlingOptionsInstanceName.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareFileNameHandlingOptionsInstanceName_h
#define Linux_SambaShareFileNameHandlingOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"


namespace genProvider {

  class Linux_SambaShareFileNameHandlingOptionsInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName);
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
    Linux_SambaShareFileNameHandlingOptionsInstanceName();
  	
    Linux_SambaShareFileNameHandlingOptionsInstanceName(const Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName);
  	   
    Linux_SambaShareFileNameHandlingOptionsInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaShareFileNameHandlingOptionsInstanceName();
       
    Linux_SambaShareFileNameHandlingOptionsInstanceName& operator=(const Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName);
       
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
  struct Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement {
  	Linux_SambaShareFileNameHandlingOptionsInstanceName* m_elementP;
  	Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement();
  	~Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration {
  
  	private:
    Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration();
  	  
    Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration(const Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

