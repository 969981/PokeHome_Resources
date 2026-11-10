/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00438880; name: FUN_.text__00438880
 */


long FUN__text__00438880(long param_1,ulong *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  
  uVar4 = *param_2;
  if ((((uVar4 != 0 || (int)param_2[1] != 0) || ((int)param_2[2] != 0)) || ((char)param_2[3] != -1))
     || (((char)param_2[4] != -1 || (param_2[5] != 0)))) {
    uVar5 = *(uint *)(param_1 + 0x10);
    if (uVar5 != 0) {
      iVar6 = 0;
      do {
        uVar1 = iVar6 + (uVar5 >> 1);
        uVar7 = *(ulong *)(*(long *)(param_1 + 8) +
                          (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5));
        if (uVar7 == uVar4) {
          lVar3 = FUN__text__004389a0(*(long *)(param_1 + 8) + (long)(int)uVar1 * 0x20);
          goto joined_r0x0043894c;
        }
        if (uVar7 < uVar4) {
          iVar6 = uVar1 + 1;
        }
        uVar1 = uVar5 - (uVar7 < uVar4);
        uVar5 = uVar1 >> 1;
      } while (1 < uVar1);
    }
    if (uVar4 != 0) {
      *param_2 = 0;
      if (*(uint *)(param_1 + 0x10) != 0) {
        uVar5 = *(uint *)(param_1 + 0x10);
        do {
          uVar1 = uVar5 >> 1;
          if (*(long *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0x20) == 0) {
            lVar3 = FUN__text__004389a0(*(long *)(param_1 + 8) + (ulong)uVar1 * 0x20);
joined_r0x0043894c:
            if (lVar3 != 0) {
              return lVar3;
            }
            break;
          }
          bVar2 = 1 < uVar5;
          uVar5 = uVar1;
        } while (bVar2);
      }
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_2 + 3) = 0xff;
  *(undefined1 *)(param_2 + 4) = 0xff;
  param_2[5] = 0;
  lVar3 = 0;
  if (*(char *)(param_1 + 4) != '\0') {
    lVar3 = param_1 + 2;
  }
  return lVar3;
}


