/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003938b0; name: FUN_.text__003938b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003938b0(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_58;
  long lStack_50;
  undefined4 local_44;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar4 = *_DAT_0089f518;
  FUN__text__005e927c(auStack_40,_DAT_008a3150);
  lVar2 = FUN__text__0039b7d0(uVar4,auStack_40);
  local_44 = 0xe3e89bd1;
  lStack_50 = param_1 + 0x60;
  local_58 = 0x68;
  cVar1 = FUN__text__00393e70(lVar2,&local_44,&lStack_50,&local_58);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,&local_44);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


