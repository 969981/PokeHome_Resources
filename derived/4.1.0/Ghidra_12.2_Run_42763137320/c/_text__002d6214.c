/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d6214; name: FUN_.text__002d6214
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d6214(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_58;
  long local_50 [3];
  long local_38;
  undefined4 local_14;
  
  puVar1 = _DAT_008a2580;
  uVar5 = *_DAT_008a2580;
  FUN__text__005e927c(local_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar5,local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_58 = CONCAT44(local_58._4_4_,0x21c9bd44);
  local_50[0] = param_1 + 0x60;
  cVar2 = FUN__text__002d6700(lVar3,&local_58,local_50,0x733918);
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_58);
  }
  uVar5 = *puVar1;
  FUN__text__005e927c(local_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar5,local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_14 = 0x916bca9e;
  local_50[0] = param_1 + 0xbc60;
  local_58 = 0x158;
  cVar2 = FUN__text__002d6970(lVar3,&local_14,local_50,&local_58);
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_14);
    return;
  }
  return;
}


