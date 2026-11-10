/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067d354; name: FUN_.text__0067d354
 */


undefined8 FUN__text__0067d354(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_38;
  long local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_2 + 8) == 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    if ((((int)uVar1 < 1) || (((uVar1 ^ *(char *)(param_1 + 0x9aa) == '\0') & 1) == 0)) &&
       ((int)uVar1 <= *(int *)(param_1 + 0x948))) {
      *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) | 8;
      *(undefined4 *)(param_1 + 0x948) = *(undefined4 *)(param_2 + 0x10);
      if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
         (iVar2 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)),
         iVar2 != 0)) {
        return 0xfffffc7a;
      }
      local_28 = *(undefined4 *)(param_2 + 0x10);
      uStack_24 = 0;
      local_30 = 0;
      local_38 = param_1;
      FUN__text__00680740(param_1,&LAB__text__0068052c,&local_38);
      lVar4 = local_30;
      do {
        if (lVar4 == 0) {
          return 0;
        }
        lVar5 = *(long *)(lVar4 + 0x98);
        *(undefined8 *)(lVar4 + 0x98) = 0;
        uVar3 = FUN__text__0067aeb8(param_1,*(undefined4 *)(lVar4 + 0xb8),7);
        lVar4 = lVar5;
      } while (-0x385 < (int)uVar3);
      while (lVar5 != 0) {
        lVar4 = *(long *)(lVar5 + 0x98);
        *(undefined8 *)(lVar5 + 0x98) = 0;
        lVar5 = lVar4;
      }
      return uVar3;
    }
    uVar3 = 0x7164f2;
  }
  else {
    uVar3 = 0x71be93;
  }
  uVar3 = FUN__text__0067c768(param_1,param_2,0xfffffe07,uVar3);
  return uVar3;
}


