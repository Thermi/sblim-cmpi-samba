// =======================================================================
// Linux_SambaShareSecurityOptionsInstance.h
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
#ifndef Linux_SambaShareSecurityOptionsInstance_h
#define Linux_SambaShareSecurityOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareSecurityOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaShareSecurityOptionsInstanceName m_instanceName;
    const char* m_Caption;
    CMPIUint16 m_CreateMask;
    const char* m_Description;
    CMPIUint16 m_DirectoryMask;
    CMPIUint16 m_DirectorySecurityMask;
    const char* m_ElementName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Caption:1;
      unsigned int CreateMask:1;
      unsigned int Description:1;
      unsigned int DirectoryMask:1;
      unsigned int DirectorySecurityMask:1;
      unsigned int ElementName:1;

    } isSet;
    
    public:
    Linux_SambaShareSecurityOptionsInstance();
    Linux_SambaShareSecurityOptionsInstance(
      const Linux_SambaShareSecurityOptionsInstance& anInstance);
    Linux_SambaShareSecurityOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareSecurityOptionsInstance();
       
    Linux_SambaShareSecurityOptionsInstance& operator=(
      const Linux_SambaShareSecurityOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareSecurityOptionsInstanceName& getInstanceName() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isCreateMaskSet() const;
    void setCreateMask(const CMPIUint16 aValue);
    const CMPIUint16 getCreateMask() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isDirectoryMaskSet() const;
    void setDirectoryMask(const CMPIUint16 aValue);
    const CMPIUint16 getDirectoryMask() const;

    unsigned int isDirectorySecurityMaskSet() const;
    void setDirectorySecurityMask(const CMPIUint16 aValue);
    const CMPIUint16 getDirectorySecurityMask() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;


  };
  
  struct Linux_SambaShareSecurityOptionsInstanceEnumerationElement {

    Linux_SambaShareSecurityOptionsInstance* m_elementP;
    Linux_SambaShareSecurityOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaShareSecurityOptionsInstanceEnumerationElement();
    ~Linux_SambaShareSecurityOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareSecurityOptionsInstanceEnumeration {

    private:
    Linux_SambaShareSecurityOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareSecurityOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareSecurityOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareSecurityOptionsInstanceEnumeration();
    Linux_SambaShareSecurityOptionsInstanceEnumeration(
      const Linux_SambaShareSecurityOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareSecurityOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareSecurityOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaShareSecurityOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareSecurityOptionsInstance& anInstance);

  };

}

#endif
