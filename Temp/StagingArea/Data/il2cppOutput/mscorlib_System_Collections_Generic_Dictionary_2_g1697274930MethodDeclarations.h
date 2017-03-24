#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1697274930;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1284510226;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t598529833;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1225111275;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t400334773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23749587448.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3017299632.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m3997847064_gshared (Dictionary_2_t1697274930 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3997847064(__this, method) ((  void (*) (Dictionary_2_t1697274930 *, const MethodInfo*))Dictionary_2__ctor_m3997847064_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2284756127_gshared (Dictionary_2_t1697274930 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m2284756127(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t1697274930 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2284756127_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3111963761_gshared (Dictionary_2_t1697274930 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m3111963761(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t1697274930 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3111963761_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m965168575_gshared (Dictionary_2_t1697274930 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m965168575(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1697274930 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m965168575_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2945412702_gshared (Dictionary_2_t1697274930 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2945412702(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1697274930 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2945412702_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m941667911_gshared (Dictionary_2_t1697274930 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m941667911(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1697274930 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m941667911_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3189569330_gshared (Dictionary_2_t1697274930 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3189569330(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1697274930 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3189569330_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3199539467_gshared (Dictionary_2_t1697274930 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3199539467(__this, ___key0, method) ((  void (*) (Dictionary_2_t1697274930 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3199539467_gshared)(__this, ___key0, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2487129350_gshared (Dictionary_2_t1697274930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2487129350(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1697274930 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2487129350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1111602362_gshared (Dictionary_2_t1697274930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1111602362(__this, method) ((  bool (*) (Dictionary_2_t1697274930 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1111602362_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1043757703_gshared (Dictionary_2_t1697274930 * __this, KeyValuePair_2_t3749587448  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1043757703(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t1697274930 *, KeyValuePair_2_t3749587448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1043757703_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1927335261_gshared (Dictionary_2_t1697274930 * __this, KeyValuePair_2_t3749587448  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1927335261(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1697274930 *, KeyValuePair_2_t3749587448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1927335261_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3678641635_gshared (Dictionary_2_t1697274930 * __this, KeyValuePair_2U5BU5D_t598529833* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3678641635(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1697274930 *, KeyValuePair_2U5BU5D_t598529833*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3678641635_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m181279132_gshared (Dictionary_2_t1697274930 * __this, KeyValuePair_2_t3749587448  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m181279132(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1697274930 *, KeyValuePair_2_t3749587448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m181279132_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1985034736_gshared (Dictionary_2_t1697274930 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1985034736(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1697274930 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1985034736_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3830548821_gshared (Dictionary_2_t1697274930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3830548821(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1697274930 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3830548821_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m631947640_gshared (Dictionary_2_t1697274930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m631947640(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1697274930 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m631947640_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1284065099_gshared (Dictionary_2_t1697274930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1284065099(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1697274930 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1284065099_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2168147420_gshared (Dictionary_2_t1697274930 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2168147420(__this, method) ((  int32_t (*) (Dictionary_2_t1697274930 *, const MethodInfo*))Dictionary_2_get_Count_m2168147420_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m4277290203_gshared (Dictionary_2_t1697274930 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m4277290203(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1697274930 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m4277290203_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3121864719_gshared (Dictionary_2_t1697274930 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m3121864719(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1697274930 *, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m3121864719_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3666073812_gshared (Dictionary_2_t1697274930 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3666073812(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t1697274930 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3666073812_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3810830177_gshared (Dictionary_2_t1697274930 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3810830177(__this, ___size0, method) ((  void (*) (Dictionary_2_t1697274930 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3810830177_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1541945891_gshared (Dictionary_2_t1697274930 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1541945891(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1697274930 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1541945891_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3749587448  Dictionary_2_make_pair_m90480045_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m90480045(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t3749587448  (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m90480045_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m353965321_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m353965321(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m353965321_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m1956977846_gshared (Dictionary_2_t1697274930 * __this, KeyValuePair_2U5BU5D_t598529833* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1956977846(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1697274930 *, KeyValuePair_2U5BU5D_t598529833*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1956977846_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m2532139610_gshared (Dictionary_2_t1697274930 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2532139610(__this, method) ((  void (*) (Dictionary_2_t1697274930 *, const MethodInfo*))Dictionary_2_Resize_m2532139610_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2839642701_gshared (Dictionary_2_t1697274930 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m2839642701(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1697274930 *, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m2839642701_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m899854001_gshared (Dictionary_2_t1697274930 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m899854001(__this, method) ((  void (*) (Dictionary_2_t1697274930 *, const MethodInfo*))Dictionary_2_Clear_m899854001_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m255952723_gshared (Dictionary_2_t1697274930 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m255952723(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1697274930 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m255952723_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m392092147_gshared (Dictionary_2_t1697274930 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m392092147(__this, ___value0, method) ((  bool (*) (Dictionary_2_t1697274930 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m392092147_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m233109612_gshared (Dictionary_2_t1697274930 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m233109612(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1697274930 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m233109612_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2092139626_gshared (Dictionary_2_t1697274930 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2092139626(__this, ___sender0, method) ((  void (*) (Dictionary_2_t1697274930 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2092139626_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m602713029_gshared (Dictionary_2_t1697274930 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m602713029(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1697274930 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m602713029_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3187691483_gshared (Dictionary_2_t1697274930 * __this, int32_t ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3187691483(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t1697274930 *, int32_t, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m3187691483_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C"  ValueCollection_t400334773 * Dictionary_2_get_Values_m372946023_gshared (Dictionary_2_t1697274930 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m372946023(__this, method) ((  ValueCollection_t400334773 * (*) (Dictionary_2_t1697274930 *, const MethodInfo*))Dictionary_2_get_Values_m372946023_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m2900575080_gshared (Dictionary_2_t1697274930 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2900575080(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t1697274930 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2900575080_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m14471464_gshared (Dictionary_2_t1697274930 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14471464(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t1697274930 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m14471464_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m790970878_gshared (Dictionary_2_t1697274930 * __this, KeyValuePair_2_t3749587448  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m790970878(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t1697274930 *, KeyValuePair_2_t3749587448 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m790970878_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C"  Enumerator_t3017299632  Dictionary_2_GetEnumerator_m706253773_gshared (Dictionary_2_t1697274930 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m706253773(__this, method) ((  Enumerator_t3017299632  (*) (Dictionary_2_t1697274930 *, const MethodInfo*))Dictionary_2_GetEnumerator_m706253773_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m741309042_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m741309042(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m741309042_gshared)(__this /* static, unused */, ___key0, ___value1, method)
