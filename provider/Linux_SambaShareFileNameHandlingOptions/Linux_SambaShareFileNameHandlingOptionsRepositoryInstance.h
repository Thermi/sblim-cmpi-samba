/**
 *  Linux_SambaShareFileNameHandlingOptionsRepositoryInstance.h
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
  public:
       Linux_SambaShareFileNameHandlingOptionsRepositoryInstance();
  	
       Linux_SambaShareFileNameHandlingOptionsRepositoryInstance
  	    (const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& original);
  	   
       Linux_SambaShareFileNameHandlingOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareFileNameHandlingOptionsRepositoryInstance();
       
       Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& operator=
  	    (const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareFileNameHandlingOptionsInstanceName& val);        
       const Linux_SambaShareFileNameHandlingOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaShareFileNameHandlingOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaShareFileNameHandlingOptionsRepositoryInstance* m_elementP;
  	Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& elementP);
  };
}
#endif

