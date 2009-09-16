// =======================================================================
// Linux_SambaShareFileNameHandlingForShareManualInstance.h
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
#ifndef Linux_SambaShareFileNameHandlingForShareManualInstance_h
#define Linux_SambaShareFileNameHandlingForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareFileNameHandlingForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareFileNameHandlingForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaShareFileNameHandlingForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareFileNameHandlingForShareManualInstance();
    Linux_SambaShareFileNameHandlingForShareManualInstance(
      const Linux_SambaShareFileNameHandlingForShareManualInstance& anInstance);
    Linux_SambaShareFileNameHandlingForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareFileNameHandlingForShareManualInstance();
       
    Linux_SambaShareFileNameHandlingForShareManualInstance& operator=(
      const Linux_SambaShareFileNameHandlingForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);        
    const Linux_SambaShareFileNameHandlingForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement {

    Linux_SambaShareFileNameHandlingForShareManualInstance* m_elementP;
    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement();
    ~Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration {

    private:
    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration();
    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration(
      const Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareFileNameHandlingForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaShareFileNameHandlingForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareFileNameHandlingForShareManualInstance& anInstance);

  };

}

#endif
