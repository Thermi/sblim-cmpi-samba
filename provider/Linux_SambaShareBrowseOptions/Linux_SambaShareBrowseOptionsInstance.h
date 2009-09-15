// =======================================================================
// Linux_SambaShareBrowseOptionsInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareBrowseOptionsInstance_h
#define Linux_SambaShareBrowseOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareBrowseOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareBrowseOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaShareBrowseOptionsInstanceName m_instanceName;
    CMPIBoolean m_Browsable;
    const char* m_Caption;
    const char* m_Description;
    const char* m_ElementName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Browsable:1;
      unsigned int Caption:1;
      unsigned int Description:1;
      unsigned int ElementName:1;

    } isSet;
    
    public:
    Linux_SambaShareBrowseOptionsInstance();
    Linux_SambaShareBrowseOptionsInstance(
      const Linux_SambaShareBrowseOptionsInstance& anInstance);
    Linux_SambaShareBrowseOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareBrowseOptionsInstance();
       
    Linux_SambaShareBrowseOptionsInstance& operator=(
      const Linux_SambaShareBrowseOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareBrowseOptionsInstanceName& getInstanceName() const;

    unsigned int isBrowsableSet() const;
    void setBrowsable(const CMPIBoolean aValue);
    const CMPIBoolean getBrowsable() const;

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
  
  struct Linux_SambaShareBrowseOptionsInstanceEnumerationElement {

    Linux_SambaShareBrowseOptionsInstance* m_elementP;
    Linux_SambaShareBrowseOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaShareBrowseOptionsInstanceEnumerationElement();
    ~Linux_SambaShareBrowseOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareBrowseOptionsInstanceEnumeration {

    private:
    Linux_SambaShareBrowseOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareBrowseOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareBrowseOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareBrowseOptionsInstanceEnumeration();
    Linux_SambaShareBrowseOptionsInstanceEnumeration(
      const Linux_SambaShareBrowseOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareBrowseOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareBrowseOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaShareBrowseOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareBrowseOptionsInstance& anInstance);

  };

}

#endif
