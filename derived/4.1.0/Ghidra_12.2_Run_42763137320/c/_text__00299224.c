/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00299224; name: FUN_.text__00299224
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00299224(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  FUN__text__0028ea5c();
  lVar1 = _DAT_008a21d8;
  plVar2 = (long *)param_1[1];
  *(undefined1 *)(param_1 + 0x10d) = 0;
  *(undefined2 *)(param_1 + 0x10f) = 0;
  param_1[0x116] = 0;
  param_1[0x110] = (long)plVar2;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[9] = lVar1 + 0xb8;
  param_1[10] = lVar1 + 0xf8;
  param_1[0x10e] = -0x340d631b7bddd9bb;
  param_1[0x111] = 0x7ffffffffffffff;
  pvVar3 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,0x180,8);
  pvVar4 = (void *)param_1[0x118];
  if ((pvVar4 == (void *)0x0) || (pvVar3 == (void *)0x0 || param_1[0x119] == 0)) {
    if (pvVar4 != (void *)0x0) goto LAB__text__002992d8;
  }
  else {
    memmove(pvVar3,pvVar4,param_1[0x119] << 5);
    pvVar4 = (void *)param_1[0x118];
LAB__text__002992d8:
    (**(code **)(*(long *)param_1[0x110] + 0x18))
              ((long *)param_1[0x110],pvVar4,param_1[0x11a] << 5,8);
  }
  plVar2 = (long *)param_1[1];
  param_1[0x118] = (long)pvVar3;
  param_1[0x11a] = 0xc;
  param_1[0x11d] = 0x7ffffffffffffff;
  param_1[0x122] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x11c] = (long)plVar2;
  pvVar3 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,0xc60,8);
  pvVar4 = (void *)param_1[0x124];
  if (((pvVar4 == (void *)0x0) || (pvVar3 == (void *)0x0)) || (param_1[0x125] == 0)) {
    if (pvVar4 == (void *)0x0) goto LAB__text__0029937c;
  }
  else {
    memmove(pvVar3,pvVar4,param_1[0x125] << 5);
    pvVar4 = (void *)param_1[0x124];
  }
  (**(code **)(*(long *)param_1[0x11c] + 0x18))((long *)param_1[0x11c],pvVar4,param_1[0x126] << 5,8)
  ;
LAB__text__0029937c:
  param_1[0x124] = (long)pvVar3;
  param_1[0x126] = 99;
  *(undefined4 *)(param_1 + 0x128) = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  *(undefined1 *)(param_1 + 0x13e) = 1;
  *(undefined4 *)((long)param_1 + 0x9f4) = 0;
  return;
}


