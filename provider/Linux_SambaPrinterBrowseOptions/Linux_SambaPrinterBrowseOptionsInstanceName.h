// =======================================================================
// Linux_SambaPrinterBrowseOptionsInstanceName.h
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
#ifndef Linux_SambaPrinterBrowseOptionsInstanceName_h
#define Linux_SambaPrinterBrowseOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"


namespace genProvider {

  class Linux_SambaPrinterBrowseOptionsInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName);
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
    Linux_SambaPrinterBrowseOptionsInstanceName();
  	
    Linux_SambaPrinterBrowseOptionsInstanceName(const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName);
  	   
    Linux_SambaPrinterBrowseOptionsInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaPrinterBrowseOptionsInstanceName();
       
    Linux_SambaPrinterBrowseOptionsInstanceName& operator=(const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName);
       
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
  struct Linux_SambaPrinterBrowseOptionsInstanceNameEnumerationElement {
  	Linux_SambaPrinterBrowseOptionsInstanceName* m_elementP;
  	Linux_SambaPrinterBrowseOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterBrowseOptionsInstanceNameEnumerationElement();
  	~Linux_SambaPrinterBrowseOptionsInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaPrinterBrowseOptionsInstanceNameEnumeration {
  
  	private:
    Linux_SambaPrinterBrowseOptionsInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaPrinterBrowseOptionsInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaPrinterBrowseOptionsInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaPrinterBrowseOptionsInstanceNameEnumeration();
  	  
    Linux_SambaPrinterBrowseOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaPrinterBrowseOptionsInstanceNameEnumeration(const Linux_SambaPrinterBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaPrinterBrowseOptionsInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaPrinterBrowseOptionsInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaPrinterBrowseOptionsInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

