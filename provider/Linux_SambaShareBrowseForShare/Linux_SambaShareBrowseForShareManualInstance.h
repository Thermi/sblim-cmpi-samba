// =======================================================================
// Linux_SambaShareBrowseForShareManualInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareBrowseForShareManualInstance_h
#define Linux_SambaShareBrowseForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareBrowseForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaShareBrowseForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareBrowseForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaShareBrowseForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareBrowseForShareManualInstance();
    Linux_SambaShareBrowseForShareManualInstance(
      const Linux_SambaShareBrowseForShareManualInstance& anInstance);
    Linux_SambaShareBrowseForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareBrowseForShareManualInstance();
       
    Linux_SambaShareBrowseForShareManualInstance& operator=(
      const Linux_SambaShareBrowseForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareBrowseForShareInstanceName& anInstanceName);        
    const Linux_SambaShareBrowseForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareBrowseForShareManualInstanceEnumerationElement {

    Linux_SambaShareBrowseForShareManualInstance* m_elementP;
    Linux_SambaShareBrowseForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaShareBrowseForShareManualInstanceEnumerationElement();
    ~Linux_SambaShareBrowseForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareBrowseForShareManualInstanceEnumeration {

    private:
    Linux_SambaShareBrowseForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareBrowseForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareBrowseForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareBrowseForShareManualInstanceEnumeration();
    Linux_SambaShareBrowseForShareManualInstanceEnumeration(
      const Linux_SambaShareBrowseForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareBrowseForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareBrowseForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaShareBrowseForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareBrowseForShareManualInstance& anInstance);

  };

}

#endif
