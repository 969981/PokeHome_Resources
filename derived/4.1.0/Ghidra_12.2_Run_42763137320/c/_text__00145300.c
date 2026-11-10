/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00145300; name: FUN_.text__00145300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00145300(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar2 = _DAT_0089f690;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar2 + 0x10;
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = 0x86a370;
  param_1[1] = lVar2;
  param_1[9] = 0x86a3a8;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (DAT_008e1b50 != '\0') {
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x220,0x10);
    if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = param_2;
    *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
    FUN__text__001467fc(lVar2,param_1,param_2);
    *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
    lVar3 = param_1[0xb];
    param_1[0xb] = lVar2;
    if (lVar3 != 0) {
      FUN__text__00146d30(lVar3);
      (**(code **)(*(long *)param_1[0xc] + 0x18))
                ((long *)param_1[0xc],lVar3,param_1[0xd],param_1[0xe]);
    }
    param_1[0xc] = (long)param_2;
    param_1[0xd] = 0x220;
    param_1[0xe] = 0x10;
  }
  return;
}


