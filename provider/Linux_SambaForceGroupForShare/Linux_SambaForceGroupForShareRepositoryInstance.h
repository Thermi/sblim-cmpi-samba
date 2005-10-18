/**
 *  Linux_SambaForceGroupForShareRepositoryInstance.h
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


#ifndef Linux_SambaForceGroupForShareRepositoryInstance_h
#define Linux_SambaForceGroupForShareRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForShareRepositoryInstance {
  public:
       Linux_SambaForceGroupForShareRepositoryInstance();
  	
       Linux_SambaForceGroupForShareRepositoryInstance
  	    (const Linux_SambaForceGroupForShareRepositoryInstance& original);
  	   
       Linux_SambaForceGroupForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceGroupForShareRepositoryInstance();
       
       Linux_SambaForceGroupForShareRepositoryInstance& operator=
  	    (const Linux_SambaForceGroupForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceGroupForShareInstanceName& val);        
       const Linux_SambaForceGroupForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaForceGroupForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaForceGroupForShareRepositoryInstance* m_elementP;
  	Linux_SambaForceGroupForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaForceGroupForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaForceGroupForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaForceGroupForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaForceGroupForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceGroupForShareRepositoryInstance& elementP);
  };
}
#endif

