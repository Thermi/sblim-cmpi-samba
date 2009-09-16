// =======================================================================
// Linux_SambaShareBrowseOptionsManualInstance.h
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
#ifndef Linux_SambaShareBrowseOptionsManualInstance_h
#define Linux_SambaShareBrowseOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareBrowseOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareBrowseOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaShareBrowseOptionsInstanceName m_instanceName;
    CMPIBoolean m_Browsable;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Browsable:1;

    } isSet;
    
    public:
    Linux_SambaShareBrowseOptionsManualInstance();
    Linux_SambaShareBrowseOptionsManualInstance(
      const Linux_SambaShareBrowseOptionsManualInstance& anInstance);
    Linux_SambaShareBrowseOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareBrowseOptionsManualInstance();
       
    Linux_SambaShareBrowseOptionsManualInstance& operator=(
      const Linux_SambaShareBrowseOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareBrowseOptionsInstanceName& getInstanceName() const;

    unsigned int isBrowsableSet() const;
    void setBrowsable(const CMPIBoolean aValue);
    const CMPIBoolean getBrowsable() const;


  };
  
  struct Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement {

    Linux_SambaShareBrowseOptionsManualInstance* m_elementP;
    Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement();
    ~Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareBrowseOptionsManualInstanceEnumeration {

    private:
    Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareBrowseOptionsManualInstanceEnumeration();
    Linux_SambaShareBrowseOptionsManualInstanceEnumeration(
      const Linux_SambaShareBrowseOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareBrowseOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareBrowseOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaShareBrowseOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareBrowseOptionsManualInstance& anInstance);

  };

}

#endif
