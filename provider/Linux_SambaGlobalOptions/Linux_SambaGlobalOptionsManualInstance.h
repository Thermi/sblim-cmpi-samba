// =======================================================================
// Linux_SambaGlobalOptionsManualInstance.h
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
#ifndef Linux_SambaGlobalOptionsManualInstance_h
#define Linux_SambaGlobalOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalOptionsInstanceName m_instanceName;
    CMPIBoolean m_BindInterfacesOnly;
    const char* m_Interfaces;
    const char* m_NetbiosAlias;
    const char* m_NetbiosName;
    CMPIBoolean m_Printable;
    const char* m_ServerString;
    const char* m_Workgroup;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int BindInterfacesOnly:1;
      unsigned int Interfaces:1;
      unsigned int NetbiosAlias:1;
      unsigned int NetbiosName:1;
      unsigned int Printable:1;
      unsigned int ServerString:1;
      unsigned int Workgroup:1;

    } isSet;
    
    public:
    Linux_SambaGlobalOptionsManualInstance();
    Linux_SambaGlobalOptionsManualInstance(
      const Linux_SambaGlobalOptionsManualInstance& anInstance);
    Linux_SambaGlobalOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalOptionsManualInstance();
       
    Linux_SambaGlobalOptionsManualInstance& operator=(
      const Linux_SambaGlobalOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalOptionsInstanceName& getInstanceName() const;

    unsigned int isBindInterfacesOnlySet() const;
    void setBindInterfacesOnly(const CMPIBoolean aValue);
    const CMPIBoolean getBindInterfacesOnly() const;

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
  
  struct Linux_SambaGlobalOptionsManualInstanceEnumerationElement {

    Linux_SambaGlobalOptionsManualInstance* m_elementP;
    Linux_SambaGlobalOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalOptionsManualInstanceEnumerationElement();
    ~Linux_SambaGlobalOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalOptionsManualInstanceEnumeration {

    private:
    Linux_SambaGlobalOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalOptionsManualInstanceEnumeration();
    Linux_SambaGlobalOptionsManualInstanceEnumeration(
      const Linux_SambaGlobalOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalOptionsManualInstance& anInstance);

  };

}

#endif
