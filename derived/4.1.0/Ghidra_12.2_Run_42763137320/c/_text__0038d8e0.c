/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038d8e0; name: FUN_.text__0038d8e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0038d8e0(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  long local_18;
  
  puVar1 = _DAT_0089f518;
  uVar6 = *_DAT_0089f518;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar6,auStack_50);
  local_18 = param_1 + 0x60;
  local_58 = 0x8130;
  cVar2 = FUN__text__00391400(lVar4,0x7379cc,&local_18,&local_58);
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,0x7379cc);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar6 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar6,auStack_50);
  uVar3 = FUN__text__00388580(lVar4,0x7379d0);
  if (((uVar3 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,0x7379d0);
  }
  *(bool *)(param_1 + 0x8190) = 0xff < uVar3;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


