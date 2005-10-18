/**
 *  Linux_SambaGlobalOptionsManualInstance.h
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


#ifndef Linux_SambaGlobalOptionsManualInstance_h
#define Linux_SambaGlobalOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalOptionsManualInstance {
  public:
       Linux_SambaGlobalOptionsManualInstance();
  	
       Linux_SambaGlobalOptionsManualInstance
  	    (const Linux_SambaGlobalOptionsManualInstance& original);
  	   
       Linux_SambaGlobalOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalOptionsManualInstance();
       
       Linux_SambaGlobalOptionsManualInstance& operator=
  	    (const Linux_SambaGlobalOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalOptionsInstanceName& val);        
       const Linux_SambaGlobalOptionsInstanceName&
        getInstanceName() const;

       unsigned int isBindInterfacesOnlySet() const;
       void setBindInterfacesOnly(const CMPIBoolean val);
       const CMPIBoolean getBindInterfacesOnly() const;

       unsigned int isInterfacesSet() const;
       void setInterfaces(const char* val, int makeCopy = 1);
       const char* getInterfaces() const;

       unsigned int isNetbiosAliasSet() const;
       void setNetbiosAlias(const char* val, int makeCopy = 1);
       const char* getNetbiosAlias() const;

       unsigned int isNetbiosNameSet() const;
       void setNetbiosName(const char* val, int makeCopy = 1);
       const char* getNetbiosName() const;

       unsigned int isPrintableSet() const;
       void setPrintable(const CMPIBoolean val);
       const CMPIBoolean getPrintable() const;

       unsigned int isServerStringSet() const;
       void setServerString(const char* val, int makeCopy = 1);
       const char* getServerString() const;

       unsigned int isWorkgroupSet() const;
       void setWorkgroup(const char* val, int makeCopy = 1);
       const char* getWorkgroup() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalOptionsManualInstance& original);
       void reset();
       
       Linux_SambaGlobalOptionsInstanceName m_instanceName;
       CMPIBoolean m_BindInterfacesOnly;
       const char* m_Interfaces;
       const char* m_NetbiosAlias;
       const char* m_NetbiosName;
       CMPIBoolean m_Printable;
       const char* m_ServerString;
       const char* m_Workgroup;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int BindInterfacesOnly:1;
         unsigned int Interfaces:1;
         unsigned int NetbiosAlias:1;
         unsigned int NetbiosName:1;
         unsigned int Printable:1;
         unsigned int ServerString:1;
         unsigned int Workgroup:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalOptionsManualInstanceEnumerationElement{
  	Linux_SambaGlobalOptionsManualInstance* m_elementP;
  	Linux_SambaGlobalOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalOptionsManualInstanceEnumerationElement();
  	~Linux_SambaGlobalOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalOptionsManualInstanceEnumeration(
  	   const Linux_SambaGlobalOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalOptionsManualInstance& elementP);
  };
}
#endif

