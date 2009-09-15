// =======================================================================
// Linux_SambaShareFileNameHandlingOptionsRepositoryInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareFileNameHandlingOptionsRepositoryInstance_h
#define Linux_SambaShareFileNameHandlingOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareFileNameHandlingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareFileNameHandlingOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaShareFileNameHandlingOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstance();
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstance(
      const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& anInstance);
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareFileNameHandlingOptionsRepositoryInstance();
       
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& operator=(
      const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaShareFileNameHandlingOptionsRepositoryInstance* m_elementP;
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration();
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration(
      const Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& anInstance);

  };

}

#endif
