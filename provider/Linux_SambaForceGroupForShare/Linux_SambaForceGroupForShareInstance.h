// =======================================================================
// Linux_SambaForceGroupForShareInstance.h
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
#ifndef Linux_SambaForceGroupForShareInstance_h
#define Linux_SambaForceGroupForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaForceGroupForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceGroupForShareInstance& anInstance);
    void reset();
       
    Linux_SambaForceGroupForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceGroupForShareInstance();
    Linux_SambaForceGroupForShareInstance(
      const Linux_SambaForceGroupForShareInstance& anInstance);
    Linux_SambaForceGroupForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceGroupForShareInstance();
       
    Linux_SambaForceGroupForShareInstance& operator=(
      const Linux_SambaForceGroupForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceGroupForShareInstanceName& anInstanceName);        
    const Linux_SambaForceGroupForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceGroupForShareInstanceEnumerationElement {

    Linux_SambaForceGroupForShareInstance* m_elementP;
    Linux_SambaForceGroupForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaForceGroupForShareInstanceEnumerationElement();
    ~Linux_SambaForceGroupForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceGroupForShareInstanceEnumeration {

    private:
    Linux_SambaForceGroupForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceGroupForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceGroupForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceGroupForShareInstanceEnumeration();
    Linux_SambaForceGroupForShareInstanceEnumeration(
      const Linux_SambaForceGroupForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceGroupForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceGroupForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaForceGroupForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceGroupForShareInstance& anInstance);

  };

}

#endif
