/**
 *  Linux_SambaHostInstance.h
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


#ifndef Linux_SambaHostInstance_h
#define Linux_SambaHostInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaHostInstanceName.h"

namespace genProvider {

  class Linux_SambaHostInstance {
  public:
       Linux_SambaHostInstance();
  	
       Linux_SambaHostInstance
  	    (const Linux_SambaHostInstance& original);
  	   
       Linux_SambaHostInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaHostInstance();
       
       Linux_SambaHostInstance& operator=
  	    (const Linux_SambaHostInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaHostInstanceName& val);        
       const Linux_SambaHostInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaHostInstance& original);
       void reset();
       
       Linux_SambaHostInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaHostInstanceEnumerationElement{
  	Linux_SambaHostInstance* m_elementP;
  	Linux_SambaHostInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaHostInstanceEnumerationElement();
  	~Linux_SambaHostInstanceEnumerationElement();  	
  };
  

  class Linux_SambaHostInstanceEnumeration {
  	private:
  	  Linux_SambaHostInstanceEnumerationElement* firstElementP;
  	  Linux_SambaHostInstanceEnumerationElement* currentElementP;
  	  Linux_SambaHostInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaHostInstanceEnumeration();
  	  
  	  Linux_SambaHostInstanceEnumeration(
  	   const Linux_SambaHostInstanceEnumeration& original);
  	  
  	  ~Linux_SambaHostInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaHostInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaHostInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaHostInstance& elementP);
  };
}
#endif

