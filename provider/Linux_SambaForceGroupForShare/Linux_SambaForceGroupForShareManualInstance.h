// =======================================================================
// Linux_SambaForceGroupForShareManualInstance.h
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
#ifndef Linux_SambaForceGroupForShareManualInstance_h
#define Linux_SambaForceGroupForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaForceGroupForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceGroupForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaForceGroupForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceGroupForShareManualInstance();
    Linux_SambaForceGroupForShareManualInstance(
      const Linux_SambaForceGroupForShareManualInstance& anInstance);
    Linux_SambaForceGroupForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceGroupForShareManualInstance();
       
    Linux_SambaForceGroupForShareManualInstance& operator=(
      const Linux_SambaForceGroupForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceGroupForShareInstanceName& anInstanceName);        
    const Linux_SambaForceGroupForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceGroupForShareManualInstanceEnumerationElement {

    Linux_SambaForceGroupForShareManualInstance* m_elementP;
    Linux_SambaForceGroupForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaForceGroupForShareManualInstanceEnumerationElement();
    ~Linux_SambaForceGroupForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceGroupForShareManualInstanceEnumeration {

    private:
    Linux_SambaForceGroupForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceGroupForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceGroupForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceGroupForShareManualInstanceEnumeration();
    Linux_SambaForceGroupForShareManualInstanceEnumeration(
      const Linux_SambaForceGroupForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceGroupForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceGroupForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaForceGroupForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceGroupForShareManualInstance& anInstance);

  };

}

#endif
