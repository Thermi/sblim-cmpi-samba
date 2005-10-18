/**
 *  Linux_SambaShareOptionsRepositoryInstance.h
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


#ifndef Linux_SambaShareOptionsRepositoryInstance_h
#define Linux_SambaShareOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareOptionsRepositoryInstance {
  public:
       Linux_SambaShareOptionsRepositoryInstance();
  	
       Linux_SambaShareOptionsRepositoryInstance
  	    (const Linux_SambaShareOptionsRepositoryInstance& original);
  	   
       Linux_SambaShareOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareOptionsRepositoryInstance();
       
       Linux_SambaShareOptionsRepositoryInstance& operator=
  	    (const Linux_SambaShareOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareOptionsInstanceName& val);        
       const Linux_SambaShareOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaShareOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaShareOptionsRepositoryInstance* m_elementP;
  	Linux_SambaShareOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaShareOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaShareOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaShareOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaShareOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareOptionsRepositoryInstance& elementP);
  };
}
#endif

