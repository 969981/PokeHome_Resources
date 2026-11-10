/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d4dec; name: FUN_.text__002d4dec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d4dec(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar4 = *_DAT_008a2580;
  FUN__text__005e927c(auStack_40,_DAT_008a2688);
  lVar2 = FUN__text__002f95a0(uVar4,auStack_40);
  local_48 = 0x27068;
  cVar1 = FUN__text__002d50f0(lVar2,0x733910,param_1 + 0x60,&local_48);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0x733910);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


