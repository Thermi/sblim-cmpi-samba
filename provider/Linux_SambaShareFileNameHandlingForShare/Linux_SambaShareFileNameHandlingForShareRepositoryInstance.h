// =======================================================================
// Linux_SambaShareFileNameHandlingForShareRepositoryInstance.h
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
#ifndef Linux_SambaShareFileNameHandlingForShareRepositoryInstance_h
#define Linux_SambaShareFileNameHandlingForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareFileNameHandlingForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaShareFileNameHandlingForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareFileNameHandlingForShareRepositoryInstance();
    Linux_SambaShareFileNameHandlingForShareRepositoryInstance(
      const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& anInstance);
    Linux_SambaShareFileNameHandlingForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareFileNameHandlingForShareRepositoryInstance();
       
    Linux_SambaShareFileNameHandlingForShareRepositoryInstance& operator=(
      const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);        
    const Linux_SambaShareFileNameHandlingForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement {

    Linux_SambaShareFileNameHandlingForShareRepositoryInstance* m_elementP;
    Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration();
    Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration(
      const Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& anInstance);

  };

}

#endif
