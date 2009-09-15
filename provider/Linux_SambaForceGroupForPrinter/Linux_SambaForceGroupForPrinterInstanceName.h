// =======================================================================
// Linux_SambaForceGroupForPrinterInstanceName.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
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
#ifndef Linux_SambaForceGroupForPrinterInstanceName_h
#define Linux_SambaForceGroupForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"
#include "Linux_SambaGroupInstanceName.h"


namespace genProvider {

  class Linux_SambaForceGroupForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaForceGroupForPrinterInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaPrinterOptionsInstanceName m_GroupComponent;
    Linux_SambaGroupInstanceName m_PartComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int GroupComponent:1;
      unsigned int PartComponent:1;

    } isSet;
  
    public:
    Linux_SambaForceGroupForPrinterInstanceName();
  	
    Linux_SambaForceGroupForPrinterInstanceName(const Linux_SambaForceGroupForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaForceGroupForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaForceGroupForPrinterInstanceName();
       
    Linux_SambaForceGroupForPrinterInstanceName& operator=(const Linux_SambaForceGroupForPrinterInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaPrinterOptionsInstanceName& aValue);
    const Linux_SambaPrinterOptionsInstanceName& getGroupComponent() const;

    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaGroupInstanceName& aValue);
    const Linux_SambaGroupInstanceName& getPartComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement {
  	Linux_SambaForceGroupForPrinterInstanceName* m_elementP;
  	Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaForceGroupForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaForceGroupForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaForceGroupForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaForceGroupForPrinterInstanceNameEnumeration(const Linux_SambaForceGroupForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaForceGroupForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaForceGroupForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaForceGroupForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaForceGroupForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

