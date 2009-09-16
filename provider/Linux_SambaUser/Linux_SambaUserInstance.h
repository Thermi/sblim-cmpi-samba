// =======================================================================
// Linux_SambaUserInstance.h
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
#ifndef Linux_SambaUserInstance_h
#define Linux_SambaUserInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaUserInstanceName.h"


namespace genProvider {

  class Linux_SambaUserInstance {
       
    private:
    void init();
    void init(const Linux_SambaUserInstance& anInstance);
    void reset();
       
    Linux_SambaUserInstanceName m_instanceName;
    const char* m_Caption;
    const char* m_Description;
    const char* m_ElementName;
    const char* m_SambaUserPassword;
    const char* m_SystemUserName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Caption:1;
      unsigned int Description:1;
      unsigned int ElementName:1;
      unsigned int SambaUserPassword:1;
      unsigned int SystemUserName:1;

    } isSet;
    
    public:
    Linux_SambaUserInstance();
    Linux_SambaUserInstance(
      const Linux_SambaUserInstance& anInstance);
    Linux_SambaUserInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaUserInstance();
       
    Linux_SambaUserInstance& operator=(
      const Linux_SambaUserInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaUserInstanceName& anInstanceName);        
    const Linux_SambaUserInstanceName& getInstanceName() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;

    unsigned int isSambaUserPasswordSet() const;
    void setSambaUserPassword(const char* aValue, int aCopyFlag = 1);
    const char* getSambaUserPassword() const;

    unsigned int isSystemUserNameSet() const;
    void setSystemUserName(const char* aValue, int aCopyFlag = 1);
    const char* getSystemUserName() const;


  };
  
  struct Linux_SambaUserInstanceEnumerationElement {

    Linux_SambaUserInstance* m_elementP;
    Linux_SambaUserInstanceEnumerationElement* m_nextP;

    Linux_SambaUserInstanceEnumerationElement();
    ~Linux_SambaUserInstanceEnumerationElement();  

  };
  

  class Linux_SambaUserInstanceEnumeration {

    private:
    Linux_SambaUserInstanceEnumerationElement* m_firstElementP;
    Linux_SambaUserInstanceEnumerationElement* m_currentElementP;
    Linux_SambaUserInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaUserInstanceEnumeration();
    Linux_SambaUserInstanceEnumeration(
      const Linux_SambaUserInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaUserInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaUserInstance& getNext();
    int getSize() const;
    const Linux_SambaUserInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaUserInstance& anInstance);

  };

}

#endif
