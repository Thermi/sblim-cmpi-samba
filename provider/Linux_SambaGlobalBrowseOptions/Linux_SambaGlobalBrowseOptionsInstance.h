// =======================================================================
// Linux_SambaGlobalBrowseOptionsInstance.h
//     created on Fri, 24 Feb 2006 using ECUTE
// 
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE 
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaGlobalBrowseOptionsInstance_h
#define Linux_SambaGlobalBrowseOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalBrowseOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalBrowseOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalBrowseOptionsInstanceName m_instanceName;
    CMPIBoolean m_Browsable;
    const char* m_Caption;
    const char* m_Description;
    CMPIUint16 m_DomainMaster;
    const char* m_ElementName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Browsable:1;
      unsigned int Caption:1;
      unsigned int Description:1;
      unsigned int DomainMaster:1;
      unsigned int ElementName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalBrowseOptionsInstance();
    Linux_SambaGlobalBrowseOptionsInstance(
      const Linux_SambaGlobalBrowseOptionsInstance& anInstance);
    Linux_SambaGlobalBrowseOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalBrowseOptionsInstance();
       
    Linux_SambaGlobalBrowseOptionsInstance& operator=(
      const Linux_SambaGlobalBrowseOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalBrowseOptionsInstanceName& getInstanceName() const;

    unsigned int isBrowsableSet() const;
    void setBrowsable(const CMPIBoolean aValue);
    const CMPIBoolean getBrowsable() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isDomainMasterSet() const;
    void setDomainMaster(const CMPIUint16 aValue);
    const CMPIUint16 getDomainMaster() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;


  };
  
  struct Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement {

    Linux_SambaGlobalBrowseOptionsInstance* m_elementP;
    Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement();
    ~Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalBrowseOptionsInstanceEnumeration {

    private:
    Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalBrowseOptionsInstanceEnumeration();
    Linux_SambaGlobalBrowseOptionsInstanceEnumeration(
      const Linux_SambaGlobalBrowseOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalBrowseOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalBrowseOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalBrowseOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalBrowseOptionsInstance& anInstance);

  };

}

#endif
