// =======================================================================
// Linux_SambaGlobalOptionsInstance.h
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
#ifndef Linux_SambaGlobalOptionsInstance_h
#define Linux_SambaGlobalOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalOptionsInstanceName m_instanceName;
    CMPIBoolean m_BindInterfacesOnly;
    const char* m_Caption;
    const char* m_Description;
    const char* m_ElementName;
    const char* m_Interfaces;
    const char* m_NetbiosAlias;
    const char* m_NetbiosName;
    CMPIBoolean m_Printable;
    const char* m_ServerString;
    const char* m_Workgroup;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int BindInterfacesOnly:1;
      unsigned int Caption:1;
      unsigned int Description:1;
      unsigned int ElementName:1;
      unsigned int Interfaces:1;
      unsigned int NetbiosAlias:1;
      unsigned int NetbiosName:1;
      unsigned int Printable:1;
      unsigned int ServerString:1;
      unsigned int Workgroup:1;

    } isSet;
    
    public:
    Linux_SambaGlobalOptionsInstance();
    Linux_SambaGlobalOptionsInstance(
      const Linux_SambaGlobalOptionsInstance& anInstance);
    Linux_SambaGlobalOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalOptionsInstance();
       
    Linux_SambaGlobalOptionsInstance& operator=(
      const Linux_SambaGlobalOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalOptionsInstanceName& getInstanceName() const;

    unsigned int isBindInterfacesOnlySet() const;
    void setBindInterfacesOnly(const CMPIBoolean aValue);
    const CMPIBoolean getBindInterfacesOnly() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;

    unsigned int isInterfacesSet() const;
    void setInterfaces(const char* aValue, int aCopyFlag = 1);
    const char* getInterfaces() const;

    unsigned int isNetbiosAliasSet() const;
    void setNetbiosAlias(const char* aValue, int aCopyFlag = 1);
    const char* getNetbiosAlias() const;

    unsigned int isNetbiosNameSet() const;
    void setNetbiosName(const char* aValue, int aCopyFlag = 1);
    const char* getNetbiosName() const;

    unsigned int isPrintableSet() const;
    void setPrintable(const CMPIBoolean aValue);
    const CMPIBoolean getPrintable() const;

    unsigned int isServerStringSet() const;
    void setServerString(const char* aValue, int aCopyFlag = 1);
    const char* getServerString() const;

    unsigned int isWorkgroupSet() const;
    void setWorkgroup(const char* aValue, int aCopyFlag = 1);
    const char* getWorkgroup() const;


  };
  
  struct Linux_SambaGlobalOptionsInstanceEnumerationElement {

    Linux_SambaGlobalOptionsInstance* m_elementP;
    Linux_SambaGlobalOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalOptionsInstanceEnumerationElement();
    ~Linux_SambaGlobalOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalOptionsInstanceEnumeration {

    private:
    Linux_SambaGlobalOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalOptionsInstanceEnumeration();
    Linux_SambaGlobalOptionsInstanceEnumeration(
      const Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalOptionsInstance& anInstance);

  };

}

#endif
