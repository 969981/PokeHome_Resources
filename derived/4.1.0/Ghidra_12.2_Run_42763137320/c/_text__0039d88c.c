/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039d88c; name: FUN_.text__0039d88c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0039d88c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  plVar1 = _DAT_008a2c38;
  uVar4 = *param_1;
  lVar2 = *param_2;
  lVar3 = *_DAT_008a2c38;
  if (((lVar2 == *_DAT_008a3248 || lVar2 == *_DAT_008a3250) || lVar2 == *_DAT_008a3258) ||
      lVar2 == lVar3) {
    FUN__text__005e927c(auStack_50,_DAT_008a3150);
    FUN__text__0039b7d0(uVar4,auStack_50);
    FUN__text__003981e0();
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    FUN__text__005e927c(auStack_50,_DAT_008a3150);
    lVar2 = FUN__text__0039b7d0(uVar4,auStack_50);
    *(undefined1 *)(lVar2 + 0x98) = 1;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    lVar2 = *param_2;
    lVar3 = *plVar1;
  }
  if ((lVar2 == *_DAT_008a3260) || (lVar2 == lVar3)) {
    FUN__text__005e927c(auStack_50,_DAT_008a3468);
    FUN__text__0039b7d0(uVar4,auStack_50);
    FUN__text__003981e0();
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    FUN__text__005e927c(auStack_50,_DAT_008a3468);
    lVar2 = FUN__text__0039b7d0(uVar4,auStack_50);
    *(undefined1 *)(lVar2 + 0x98) = 1;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


