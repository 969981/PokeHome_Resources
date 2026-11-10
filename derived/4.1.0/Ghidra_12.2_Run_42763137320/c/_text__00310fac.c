/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00310fac; name: FUN_.text__00310fac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00310fac(long *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  
  param_1[7] = 0;
  lVar4 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar4 + 0x10;
  lVar4 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *param_1 = 0x87d420;
  param_1[1] = lVar4;
  param_1[9] = 0x87d478;
  param_1[10] = 0x100000000;
  uVar2 = FUN__text__0016a510();
  uVar3 = FUN__text__0016ad94(uVar2,0);
  *(uint *)((long)param_1 + 0x54) =
       *(uint *)((long)param_1 + 0x54) & 0x40000 |
       *(uint *)((long)param_1 + 0x54) & 0xf | (uVar3 & 0xf) << 4 | 0x2db00;
  return;
}


