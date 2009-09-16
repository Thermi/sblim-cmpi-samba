// =======================================================================
// Linux_SambaShareSecurityOptionsManualInstance.h
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
#ifndef Linux_SambaShareSecurityOptionsManualInstance_h
#define Linux_SambaShareSecurityOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareSecurityOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaShareSecurityOptionsInstanceName m_instanceName;
    CMPIUint16 m_CreateMask;
    CMPIUint16 m_DirectoryMask;
    CMPIUint16 m_DirectorySecurityMask;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int CreateMask:1;
      unsigned int DirectoryMask:1;
      unsigned int DirectorySecurityMask:1;

    } isSet;
    
    public:
    Linux_SambaShareSecurityOptionsManualInstance();
    Linux_SambaShareSecurityOptionsManualInstance(
      const Linux_SambaShareSecurityOptionsManualInstance& anInstance);
    Linux_SambaShareSecurityOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareSecurityOptionsManualInstance();
       
    Linux_SambaShareSecurityOptionsManualInstance& operator=(
      const Linux_SambaShareSecurityOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareSecurityOptionsInstanceName& getInstanceName() const;

    unsigned int isCreateMaskSet() const;
    void setCreateMask(const CMPIUint16 aValue);
    const CMPIUint16 getCreateMask() const;

    unsigned int isDirectoryMaskSet() const;
    void setDirectoryMask(const CMPIUint16 aValue);
    const CMPIUint16 getDirectoryMask() const;

    unsigned int isDirectorySecurityMaskSet() const;
    void setDirectorySecurityMask(const CMPIUint16 aValue);
    const CMPIUint16 getDirectorySecurityMask() const;


  };
  
  struct Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement {

    Linux_SambaShareSecurityOptionsManualInstance* m_elementP;
    Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement();
    ~Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareSecurityOptionsManualInstanceEnumeration {

    private:
    Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareSecurityOptionsManualInstanceEnumeration();
    Linux_SambaShareSecurityOptionsManualInstanceEnumeration(
      const Linux_SambaShareSecurityOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareSecurityOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareSecurityOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaShareSecurityOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareSecurityOptionsManualInstance& anInstance);

  };

}

#endif
