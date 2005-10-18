/**
 *  Linux_SambaForceUserForPrinterInstance.h
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


#ifndef Linux_SambaForceUserForPrinterInstance_h
#define Linux_SambaForceUserForPrinterInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaForceUserForPrinterInstance {
  public:
       Linux_SambaForceUserForPrinterInstance();
  	
       Linux_SambaForceUserForPrinterInstance
  	    (const Linux_SambaForceUserForPrinterInstance& original);
  	   
       Linux_SambaForceUserForPrinterInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceUserForPrinterInstance();
       
       Linux_SambaForceUserForPrinterInstance& operator=
  	    (const Linux_SambaForceUserForPrinterInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceUserForPrinterInstanceName& val);        
       const Linux_SambaForceUserForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceUserForPrinterInstance& original);
       void reset();
       
       Linux_SambaForceUserForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceUserForPrinterInstanceEnumerationElement{
  	Linux_SambaForceUserForPrinterInstance* m_elementP;
  	Linux_SambaForceUserForPrinterInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForPrinterInstanceEnumerationElement();
  	~Linux_SambaForceUserForPrinterInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceUserForPrinterInstanceEnumeration {
  	private:
  	  Linux_SambaForceUserForPrinterInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceUserForPrinterInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceUserForPrinterInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceUserForPrinterInstanceEnumeration();
  	  
  	  Linux_SambaForceUserForPrinterInstanceEnumeration(
  	   const Linux_SambaForceUserForPrinterInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceUserForPrinterInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceUserForPrinterInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceUserForPrinterInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceUserForPrinterInstance& elementP);
  };
}
#endif

