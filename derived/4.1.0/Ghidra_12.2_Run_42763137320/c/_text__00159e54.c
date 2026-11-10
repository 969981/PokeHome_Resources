/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00159e54; name: FUN_.text__00159e54
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00159e54(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  lVar1 = _DAT_0089f690;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = lVar1 + 0x10;
  uVar4 = tpidr_el0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  param_1[4] = 0;
  param_1[5] = 0;
  plVar3 = *(long **)((uVar4 | 0x18) + *(long *)(uVar4 + 0x98) * 8 + -8);
  *(undefined4 *)(param_1 + 10) = 0;
  plVar6 = param_1 + 0xb;
  *plVar6 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0x86b280;
  *param_1 = 0x86b248;
  param_1[1] = (long)plVar3;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x38,8);
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)((uVar4 | 0x18) + *(long *)(uVar4 + 0x98) * 8) = plVar3;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  FUN__text__0068e568();
  lVar1 = _DAT_008a03a8;
  plVar2[3] = 0;
  *(undefined1 *)(plVar2 + 4) = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  *plVar2 = lVar1 + 0x10;
  plVar2[1] = -0xffffff01000000;
  *(undefined4 *)((long)plVar2 + 0x24) = 1;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  plVar5 = (long *)*plVar6;
  *plVar6 = (long)plVar2;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],plVar5,param_1[0xd],param_1[0xe]);
  }
  param_1[0xc] = (long)plVar3;
  param_1[0xd] = 0x38;
  param_1[0xe] = 8;
  return;
}


