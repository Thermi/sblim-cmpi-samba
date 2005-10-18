/**
 *  Linux_SambaWriteListForGlobalInstance.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef Linux_SambaWriteListForGlobalInstance_h
#define Linux_SambaWriteListForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaWriteListForGlobalInstance {
  public:
       Linux_SambaWriteListForGlobalInstance();
  	
       Linux_SambaWriteListForGlobalInstance
  	    (const Linux_SambaWriteListForGlobalInstance& original);
  	   
       Linux_SambaWriteListForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaWriteListForGlobalInstance();
       
       Linux_SambaWriteListForGlobalInstance& operator=
  	    (const Linux_SambaWriteListForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaWriteListForGlobalInstanceName& val);        
       const Linux_SambaWriteListForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaWriteListForGlobalInstance& original);
       void reset();
       
       Linux_SambaWriteListForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaWriteListForGlobalInstanceEnumerationElement{
  	Linux_SambaWriteListForGlobalInstance* m_elementP;
  	Linux_SambaWriteListForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForGlobalInstanceEnumerationElement();
  	~Linux_SambaWriteListForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaWriteListForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaWriteListForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaWriteListForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaWriteListForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaWriteListForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaWriteListForGlobalInstanceEnumeration(
  	   const Linux_SambaWriteListForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaWriteListForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaWriteListForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaWriteListForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaWriteListForGlobalInstance& elementP);
  };
}
#endif

