// =======================================================================
// Linux_SambaReadListForShareManualInstance.h
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
#ifndef Linux_SambaReadListForShareManualInstance_h
#define Linux_SambaReadListForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaReadListForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaReadListForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaReadListForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaReadListForShareManualInstance();
    Linux_SambaReadListForShareManualInstance(
      const Linux_SambaReadListForShareManualInstance& anInstance);
    Linux_SambaReadListForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaReadListForShareManualInstance();
       
    Linux_SambaReadListForShareManualInstance& operator=(
      const Linux_SambaReadListForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaReadListForShareInstanceName& anInstanceName);        
    const Linux_SambaReadListForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaReadListForShareManualInstanceEnumerationElement {

    Linux_SambaReadListForShareManualInstance* m_elementP;
    Linux_SambaReadListForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaReadListForShareManualInstanceEnumerationElement();
    ~Linux_SambaReadListForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaReadListForShareManualInstanceEnumeration {

    private:
    Linux_SambaReadListForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaReadListForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaReadListForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaReadListForShareManualInstanceEnumeration();
    Linux_SambaReadListForShareManualInstanceEnumeration(
      const Linux_SambaReadListForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaReadListForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaReadListForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaReadListForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaReadListForShareManualInstance& anInstance);

  };

}

#endif
