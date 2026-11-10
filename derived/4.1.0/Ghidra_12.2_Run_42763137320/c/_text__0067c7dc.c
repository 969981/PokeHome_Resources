/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067c7dc; name: FUN_.text__0067c7dc
 */


ulong FUN__text__0067c7dc(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    uVar6 = 0x70d6bb;
  }
  else {
    if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    if ((int)uVar1 <= iVar2) {
      lVar5 = FUN__text__00680914(param_1);
      if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0xe4) >> 1 & 1) == 0)) &&
         (*(int *)(lVar5 + 0xdc) != 5)) {
        FUN__text__00685b30(lVar5,1);
      }
      if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
         (iVar2 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)),
         iVar2 == 0)) {
        uVar3 = FUN__text__0067aeb8(param_1,*(undefined4 *)(param_2 + 8),
                                    *(undefined4 *)(param_2 + 0x10));
        uVar1 = 0;
        if ((int)uVar3 < -900) {
          uVar1 = uVar3;
        }
        uVar4 = (ulong)uVar1;
      }
      else {
        uVar4 = 0xfffffc7a;
      }
      return uVar4;
    }
    uVar6 = 0x71371a;
  }
  uVar4 = FUN__text__0067c768(param_1,param_2,0xfffffe07,uVar6);
  return uVar4;
}


