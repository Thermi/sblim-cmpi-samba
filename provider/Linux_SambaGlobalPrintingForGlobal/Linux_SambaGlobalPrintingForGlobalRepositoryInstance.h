/**
 *  Linux_SambaGlobalPrintingForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaGlobalPrintingForGlobalRepositoryInstance_h
#define Linux_SambaGlobalPrintingForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingForGlobalRepositoryInstance {
  public:
       Linux_SambaGlobalPrintingForGlobalRepositoryInstance();
  	
       Linux_SambaGlobalPrintingForGlobalRepositoryInstance
  	    (const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& original);
  	   
       Linux_SambaGlobalPrintingForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalPrintingForGlobalRepositoryInstance();
       
       Linux_SambaGlobalPrintingForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalPrintingForGlobalInstanceName& val);        
       const Linux_SambaGlobalPrintingForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalPrintingForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalPrintingForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& elementP);
  };
}
#endif

