/**
 *  Linux_SambaSharePrinterBrowseOptionsManualInstance.h
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


#ifndef Linux_SambaSharePrinterBrowseOptionsManualInstance_h
#define Linux_SambaSharePrinterBrowseOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseOptionsManualInstance {
  public:
       Linux_SambaSharePrinterBrowseOptionsManualInstance();
  	
       Linux_SambaSharePrinterBrowseOptionsManualInstance
  	    (const Linux_SambaSharePrinterBrowseOptionsManualInstance& original);
  	   
       Linux_SambaSharePrinterBrowseOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaSharePrinterBrowseOptionsManualInstance();
       
       Linux_SambaSharePrinterBrowseOptionsManualInstance& operator=
  	    (const Linux_SambaSharePrinterBrowseOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaSharePrinterBrowseOptionsInstanceName& val);        
       const Linux_SambaSharePrinterBrowseOptionsInstanceName&
        getInstanceName() const;

       unsigned int isBrowsableSet() const;
       void setBrowsable(const CMPIBoolean val);
       const CMPIBoolean getBrowsable() const;
       
  private:
       void init();
       void init(const Linux_SambaSharePrinterBrowseOptionsManualInstance& original);
       void reset();
       
       Linux_SambaSharePrinterBrowseOptionsInstanceName m_instanceName;
       CMPIBoolean m_Browsable;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Browsable:1;
       } isSet;
  };
  
  
  struct Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement{
  	Linux_SambaSharePrinterBrowseOptionsManualInstance* m_elementP;
  	Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement();
  	~Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration(
  	   const Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaSharePrinterBrowseOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaSharePrinterBrowseOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaSharePrinterBrowseOptionsManualInstance& elementP);
  };
}
#endif

