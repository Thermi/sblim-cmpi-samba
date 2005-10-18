/**
 *  Linux_SambaShareFileNameHandlingForShareRepositoryInstance.h
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
  public:
       Linux_SambaShareFileNameHandlingForShareRepositoryInstance();
  	
       Linux_SambaShareFileNameHandlingForShareRepositoryInstance
  	    (const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& original);
  	   
       Linux_SambaShareFileNameHandlingForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareFileNameHandlingForShareRepositoryInstance();
       
       Linux_SambaShareFileNameHandlingForShareRepositoryInstance& operator=
  	    (const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareFileNameHandlingForShareInstanceName& val);        
       const Linux_SambaShareFileNameHandlingForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaShareFileNameHandlingForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaShareFileNameHandlingForShareRepositoryInstance* m_elementP;
  	Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& elementP);
  };
}
#endif

