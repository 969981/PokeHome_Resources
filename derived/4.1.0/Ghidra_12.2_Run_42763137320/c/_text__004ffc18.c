/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ffc18; name: FUN_.text__004ffc18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004ffc18(long param_1,long *param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int local_28;
  uint local_24;
  
  lVar6 = *param_2;
  if (*(uint *)(lVar6 + 0x30) < 2) {
    *param_3 = '\0';
    lVar5 = param_2[2];
    if (lVar5 == 0) goto LAB__text__004ffc8c;
    if ((short)*(ushort *)(lVar5 + 10) + 1 != *(int *)(*param_2 + 0x28)) {
      uVar1 = *(ushort *)(lVar5 + 10) + 1;
      uVar4 = (ulong)uVar1;
      *(short *)(lVar5 + 10) = (short)uVar1;
      goto LAB__text__004ffce0;
    }
    *(undefined2 *)(lVar5 + 10) = 0;
    if ((*(byte *)((long)param_2 + 10) & 1) == 0) {
LAB__text__004ffc8c:
      *param_3 = '\x01';
      return 0;
    }
    if ((*(byte *)((long)param_2 + 10) >> 1 & 1) == 0) {
      sVar3 = (short)param_2[1] + -1;
      *(short *)(param_2 + 1) = sVar3;
      if (sVar3 != 0) {
        uVar4 = (ulong)*(ushort *)(lVar5 + 10);
        goto LAB__text__004ffce0;
      }
      goto LAB__text__004ffc8c;
    }
  }
  else if (*(uint *)(lVar6 + 0x30) - 2 < 2) {
    uVar4 = FUN__text__00500870(param_1,param_2,param_3);
    goto LAB__text__004ffce0;
  }
  uVar4 = 0;
LAB__text__004ffce0:
  if (*param_3 != '\0') {
    return uVar4;
  }
  uVar1 = (uint)uVar4 & 0xffff;
  uVar2 = *(uint *)(lVar6 + 0x28);
  local_28 = 0;
  local_24 = uVar1;
  FUN__text__0048d5c0(*_DAT_008a45d8,*(undefined4 *)(param_1 + 8),*(undefined4 *)(lVar6 + 0x10),
                      uVar2,&local_24,&local_28);
  if (uVar2 <= local_24) {
    local_24 = uVar1;
  }
  *param_3 = local_28 != 0;
  return (ulong)local_24;
}


