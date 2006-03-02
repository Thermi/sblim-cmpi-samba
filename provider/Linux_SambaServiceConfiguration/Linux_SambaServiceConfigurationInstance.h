// =======================================================================
// Linux_SambaServiceConfigurationInstance.h
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
#ifndef Linux_SambaServiceConfigurationInstance_h
#define Linux_SambaServiceConfigurationInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceConfigurationInstanceName.h"


namespace genProvider {

  class Linux_SambaServiceConfigurationInstance {
       
    private:
    void init();
    void init(const Linux_SambaServiceConfigurationInstance& anInstance);
    void reset();
       
    Linux_SambaServiceConfigurationInstanceName m_instanceName;
    const char* m_Caption;
    const char* m_ConfigurationFile;
    const char* m_Description;
    const char* m_ElementName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Caption:1;
      unsigned int ConfigurationFile:1;
      unsigned int Description:1;
      unsigned int ElementName:1;

    } isSet;
    
    public:
    Linux_SambaServiceConfigurationInstance();
    Linux_SambaServiceConfigurationInstance(
      const Linux_SambaServiceConfigurationInstance& anInstance);
    Linux_SambaServiceConfigurationInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaServiceConfigurationInstance();
       
    Linux_SambaServiceConfigurationInstance& operator=(
      const Linux_SambaServiceConfigurationInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaServiceConfigurationInstanceName& anInstanceName);        
    const Linux_SambaServiceConfigurationInstanceName& getInstanceName() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isConfigurationFileSet() const;
    void setConfigurationFile(const char* aValue, int aCopyFlag = 1);
    const char* getConfigurationFile() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;


  };
  
  struct Linux_SambaServiceConfigurationInstanceEnumerationElement {

    Linux_SambaServiceConfigurationInstance* m_elementP;
    Linux_SambaServiceConfigurationInstanceEnumerationElement* m_nextP;

    Linux_SambaServiceConfigurationInstanceEnumerationElement();
    ~Linux_SambaServiceConfigurationInstanceEnumerationElement();  

  };
  

  class Linux_SambaServiceConfigurationInstanceEnumeration {

    private:
    Linux_SambaServiceConfigurationInstanceEnumerationElement* m_firstElementP;
    Linux_SambaServiceConfigurationInstanceEnumerationElement* m_currentElementP;
    Linux_SambaServiceConfigurationInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaServiceConfigurationInstanceEnumeration();
    Linux_SambaServiceConfigurationInstanceEnumeration(
      const Linux_SambaServiceConfigurationInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaServiceConfigurationInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaServiceConfigurationInstance& getNext();
    int getSize() const;
    const Linux_SambaServiceConfigurationInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaServiceConfigurationInstance& anInstance);

  };

}

#endif
