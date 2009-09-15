// =======================================================================
// Linux_SambaHostInstance.h
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
#ifndef Linux_SambaHostInstance_h
#define Linux_SambaHostInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaHostInstanceName.h"


namespace genProvider {

  class Linux_SambaHostInstance {
       
    private:
    void init();
    void init(const Linux_SambaHostInstance& anInstance);
    void reset();
       
    Linux_SambaHostInstanceName m_instanceName;
    const char* m_Caption;
    const char* m_Description;
    const char* m_ElementName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Caption:1;
      unsigned int Description:1;
      unsigned int ElementName:1;

    } isSet;
    
    public:
    Linux_SambaHostInstance();
    Linux_SambaHostInstance(
      const Linux_SambaHostInstance& anInstance);
    Linux_SambaHostInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaHostInstance();
       
    Linux_SambaHostInstance& operator=(
      const Linux_SambaHostInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaHostInstanceName& anInstanceName);        
    const Linux_SambaHostInstanceName& getInstanceName() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;


  };
  
  struct Linux_SambaHostInstanceEnumerationElement {

    Linux_SambaHostInstance* m_elementP;
    Linux_SambaHostInstanceEnumerationElement* m_nextP;

    Linux_SambaHostInstanceEnumerationElement();
    ~Linux_SambaHostInstanceEnumerationElement();  

  };
  

  class Linux_SambaHostInstanceEnumeration {

    private:
    Linux_SambaHostInstanceEnumerationElement* m_firstElementP;
    Linux_SambaHostInstanceEnumerationElement* m_currentElementP;
    Linux_SambaHostInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaHostInstanceEnumeration();
    Linux_SambaHostInstanceEnumeration(
      const Linux_SambaHostInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaHostInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaHostInstance& getNext();
    int getSize() const;
    const Linux_SambaHostInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaHostInstance& anInstance);

  };

}

#endif
