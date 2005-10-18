/**
 *  Linux_SambaReadListForPrinterInstance.h
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


#ifndef Linux_SambaReadListForPrinterInstance_h
#define Linux_SambaReadListForPrinterInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaReadListForPrinterInstance {
  public:
       Linux_SambaReadListForPrinterInstance();
  	
       Linux_SambaReadListForPrinterInstance
  	    (const Linux_SambaReadListForPrinterInstance& original);
  	   
       Linux_SambaReadListForPrinterInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaReadListForPrinterInstance();
       
       Linux_SambaReadListForPrinterInstance& operator=
  	    (const Linux_SambaReadListForPrinterInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaReadListForPrinterInstanceName& val);        
       const Linux_SambaReadListForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaReadListForPrinterInstance& original);
       void reset();
       
       Linux_SambaReadListForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaReadListForPrinterInstanceEnumerationElement{
  	Linux_SambaReadListForPrinterInstance* m_elementP;
  	Linux_SambaReadListForPrinterInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForPrinterInstanceEnumerationElement();
  	~Linux_SambaReadListForPrinterInstanceEnumerationElement();  	
  };
  

  class Linux_SambaReadListForPrinterInstanceEnumeration {
  	private:
  	  Linux_SambaReadListForPrinterInstanceEnumerationElement* firstElementP;
  	  Linux_SambaReadListForPrinterInstanceEnumerationElement* currentElementP;
  	  Linux_SambaReadListForPrinterInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaReadListForPrinterInstanceEnumeration();
  	  
  	  Linux_SambaReadListForPrinterInstanceEnumeration(
  	   const Linux_SambaReadListForPrinterInstanceEnumeration& original);
  	  
  	  ~Linux_SambaReadListForPrinterInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaReadListForPrinterInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaReadListForPrinterInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaReadListForPrinterInstance& elementP);
  };
}
#endif

