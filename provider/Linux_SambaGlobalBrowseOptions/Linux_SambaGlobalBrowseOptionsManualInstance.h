/**
 *  Linux_SambaGlobalBrowseOptionsManualInstance.h
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


#ifndef Linux_SambaGlobalBrowseOptionsManualInstance_h
#define Linux_SambaGlobalBrowseOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseOptionsManualInstance {
  public:
       Linux_SambaGlobalBrowseOptionsManualInstance();
  	
       Linux_SambaGlobalBrowseOptionsManualInstance
  	    (const Linux_SambaGlobalBrowseOptionsManualInstance& original);
  	   
       Linux_SambaGlobalBrowseOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalBrowseOptionsManualInstance();
       
       Linux_SambaGlobalBrowseOptionsManualInstance& operator=
  	    (const Linux_SambaGlobalBrowseOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalBrowseOptionsInstanceName& val);        
       const Linux_SambaGlobalBrowseOptionsInstanceName&
        getInstanceName() const;

       unsigned int isBrowsableSet() const;
       void setBrowsable(const CMPIBoolean val);
       const CMPIBoolean getBrowsable() const;

       unsigned int isDomainMasterSet() const;
       void setDomainMaster(const CMPIUint16 val);
       const CMPIUint16 getDomainMaster() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalBrowseOptionsManualInstance& original);
       void reset();
       
       Linux_SambaGlobalBrowseOptionsInstanceName m_instanceName;
       CMPIBoolean m_Browsable;
       CMPIUint16 m_DomainMaster;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Browsable:1;
         unsigned int DomainMaster:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement{
  	Linux_SambaGlobalBrowseOptionsManualInstance* m_elementP;
  	Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement();
  	~Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration(
  	   const Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalBrowseOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalBrowseOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalBrowseOptionsManualInstance& elementP);
  };
}
#endif

