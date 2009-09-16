// =======================================================================
// Linux_SambaGlobalBrowseOptionsManualInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaGlobalBrowseOptionsManualInstance_h
#define Linux_SambaGlobalBrowseOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalBrowseOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalBrowseOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalBrowseOptionsInstanceName m_instanceName;
    CMPIBoolean m_Browsable;
    CMPIUint16 m_DomainMaster;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Browsable:1;
      unsigned int DomainMaster:1;

    } isSet;
    
    public:
    Linux_SambaGlobalBrowseOptionsManualInstance();
    Linux_SambaGlobalBrowseOptionsManualInstance(
      const Linux_SambaGlobalBrowseOptionsManualInstance& anInstance);
    Linux_SambaGlobalBrowseOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalBrowseOptionsManualInstance();
       
    Linux_SambaGlobalBrowseOptionsManualInstance& operator=(
      const Linux_SambaGlobalBrowseOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalBrowseOptionsInstanceName& getInstanceName() const;

    unsigned int isBrowsableSet() const;
    void setBrowsable(const CMPIBoolean aValue);
    const CMPIBoolean getBrowsable() const;

    unsigned int isDomainMasterSet() const;
    void setDomainMaster(const CMPIUint16 aValue);
    const CMPIUint16 getDomainMaster() const;


  };
  
  struct Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement {

    Linux_SambaGlobalBrowseOptionsManualInstance* m_elementP;
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement();
    ~Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration {

    private:
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration();
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration(
      const Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalBrowseOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalBrowseOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalBrowseOptionsManualInstance& anInstance);

  };

}

#endif
