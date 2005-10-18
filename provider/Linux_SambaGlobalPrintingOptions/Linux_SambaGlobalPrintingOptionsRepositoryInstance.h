/**
 *  Linux_SambaGlobalPrintingOptionsRepositoryInstance.h
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


#ifndef Linux_SambaGlobalPrintingOptionsRepositoryInstance_h
#define Linux_SambaGlobalPrintingOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingOptionsRepositoryInstance {
  public:
       Linux_SambaGlobalPrintingOptionsRepositoryInstance();
  	
       Linux_SambaGlobalPrintingOptionsRepositoryInstance
  	    (const Linux_SambaGlobalPrintingOptionsRepositoryInstance& original);
  	   
       Linux_SambaGlobalPrintingOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalPrintingOptionsRepositoryInstance();
       
       Linux_SambaGlobalPrintingOptionsRepositoryInstance& operator=
  	    (const Linux_SambaGlobalPrintingOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalPrintingOptionsInstanceName& val);        
       const Linux_SambaGlobalPrintingOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalPrintingOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalPrintingOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalPrintingOptionsRepositoryInstance* m_elementP;
  	Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalPrintingOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalPrintingOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalPrintingOptionsRepositoryInstance& elementP);
  };
}
#endif

