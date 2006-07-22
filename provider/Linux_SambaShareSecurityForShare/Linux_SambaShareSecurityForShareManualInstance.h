// =======================================================================
// Linux_SambaShareSecurityForShareManualInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#ifndef Linux_SambaShareSecurityForShareManualInstance_h
#define Linux_SambaShareSecurityForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaShareSecurityForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaShareSecurityForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareSecurityForShareManualInstance();
    Linux_SambaShareSecurityForShareManualInstance(
      const Linux_SambaShareSecurityForShareManualInstance& anInstance);
    Linux_SambaShareSecurityForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareSecurityForShareManualInstance();
       
    Linux_SambaShareSecurityForShareManualInstance& operator=(
      const Linux_SambaShareSecurityForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareSecurityForShareInstanceName& anInstanceName);        
    const Linux_SambaShareSecurityForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareSecurityForShareManualInstanceEnumerationElement {

    Linux_SambaShareSecurityForShareManualInstance* m_elementP;
    Linux_SambaShareSecurityForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaShareSecurityForShareManualInstanceEnumerationElement();
    ~Linux_SambaShareSecurityForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareSecurityForShareManualInstanceEnumeration {

    private:
    Linux_SambaShareSecurityForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareSecurityForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareSecurityForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareSecurityForShareManualInstanceEnumeration();
    Linux_SambaShareSecurityForShareManualInstanceEnumeration(
      const Linux_SambaShareSecurityForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareSecurityForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareSecurityForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaShareSecurityForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareSecurityForShareManualInstance& anInstance);

  };

}

#endif
