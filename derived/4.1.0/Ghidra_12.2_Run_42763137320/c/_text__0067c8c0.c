/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067c8c0; name: FUN_.text__0067c8c0
 */


undefined8 FUN__text__0067c8c0(long param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long local_50;
  uint local_48;
  undefined4 uStack_44;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  bVar1 = false;
  uVar7 = 0;
  puVar4 = (uint *)(param_2 + 4);
  uVar6 = 0xffffffff;
  lVar5 = param_3;
  do {
    if (puVar4[-1] == 4) {
      uVar6 = *puVar4;
    }
    else if (puVar4[-1] == 1) {
      uVar7 = *puVar4;
      bVar1 = true;
      if (uVar7 <= uVar3) {
        uVar3 = uVar7;
      }
    }
    puVar4 = puVar4 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if (bVar1) {
    if ((uVar3 < uVar7) && (uVar2 = FUN__text__00680de0(param_1 + 0x6e8,uVar3), (int)uVar2 != 0)) {
      return uVar2;
    }
    uVar2 = FUN__text__00680de0(param_1 + 0x6e8,uVar7);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  if (uVar6 == 0xffffffff) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    uStack_44 = *(undefined4 *)(param_1 + 0x98c);
    local_50 = param_1;
    local_48 = uVar6;
    uVar2 = FUN__text__00680740(param_1,FUN__text__00680424,&local_50);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (param_3 == 0) {
      return uVar2;
    }
  }
  param_2 = param_2 + 4;
  do {
    uVar3 = *(int *)(param_2 + -4) - 1;
    if (uVar3 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0067c9c4 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&UNK__text__0067c9d0 + (ulong)*(byte *)((ulong)uVar3 + 0x7618cc) * 4))();
      return uVar2;
    }
    param_2 = param_2 + 8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return 0;
}


