/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ec6b0; name: FUN_.text__002ec6b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ec6b0(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined4 local_44;
  long local_40 [3];
  long local_28;
  
  uVar4 = *_DAT_008a2580;
  FUN__text__005e927c(local_40,_DAT_008a2688);
  lVar2 = FUN__text__002f95a0(uVar4,local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_44 = 0x1720a5e0;
  local_40[0] = param_1 + 0x60;
  local_50 = 0x400;
  cVar1 = FUN__text__002ed190(lVar2,&local_44,local_40,&local_50);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,&local_44);
    return;
  }
  return;
}


