/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041754c; name: FUN_.text__0041754c
 */


/* WARNING: Removing unreachable block (ram,0x00417584) */

void FUN__text__0041754c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0xe0) + 0x18);
  uVar1 = *(uint *)(lVar4 + 0x313);
  if (*(int *)(param_1 + 0xf8) == 2) {
    uVar3 = 1;
    uVar5 = 0;
    iVar2 = *(int *)(param_2 + 0x2c);
  }
  else {
    uVar3 = (uint)(*(int *)(lVar4 + 0x380) == -1) & uVar1 >> 0xc;
    uVar5 = 0;
    if (*(int *)(param_1 + 0xf8) == 1) {
      uVar5 = uVar1 >> 0xe & 1;
    }
    iVar2 = *(int *)(param_2 + 0x2c);
    if ((uVar3 == 0) && (iVar2 == 0x11)) {
      lVar4 = *(long *)(param_1 + 0xe8);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0xe8) = 0;
        FUN__text__0044e0c8(param_1,0);
        iVar2 = FUN__text__00451000(param_1,lVar4,1,0);
        if ((iVar2 == 1) && (iVar2 = FUN__text__0044f5b0(param_1), iVar2 == 1)) {
          FUN__text__00428558(lVar4);
          return;
        }
      }
      goto LAB__text__00417624;
    }
  }
  if (((uint)(iVar2 != 2) & (uVar3 ^ 0xffffffff)) != 0) {
    if (uVar5 == 0) {
      return;
    }
    FUN__text__0044e318(param_1);
    return;
  }
LAB__text__00417624:
  FUN__text__0044e198(param_1);
  return;
}


