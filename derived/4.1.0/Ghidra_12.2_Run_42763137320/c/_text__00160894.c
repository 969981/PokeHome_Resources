/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00160894; name: FUN_.text__00160894
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00160894(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x98,8);
  if (plVar1 != (long *)0x0) {
    plVar1[0x11] = 0;
    plVar1[0x12] = 0;
    plVar1[4] = 0;
    plVar1[0xf] = 0;
    plVar1[0x10] = 0;
    plVar1[0xd] = 0;
    plVar1[0xe] = 0;
    plVar1[0xb] = 0;
    plVar1[0xc] = 0;
    plVar1[9] = 0;
    plVar1[10] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    lVar2 = _DAT_0089f690 + 0x10;
    *(undefined4 *)(plVar1 + 6) = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    *plVar1 = lVar2;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    lVar2 = _DAT_008a0418;
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if (*(long *)(uVar5 + 0x98) != 0) {
        lVar3 = *(long *)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8 + -8);
      }
    }
    *(undefined4 *)(plVar1 + 10) = 0;
    plVar1[0xb] = 0;
    plVar4 = plVar1 + 9;
    *plVar4 = lVar2 + 0x48;
    *plVar1 = lVar2 + 0x10;
    plVar1[1] = lVar3;
    FUN__text__0068d718(plVar1 + 0xc);
    *param_1 = plVar1;
    plVar1[1] = (long)param_2;
    plVar1[2] = (long)plVar1;
    plVar1[3] = 0x98;
    plVar1[4] = 8;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
                    /* WARNING: Could not recover jumptable at 0x001609b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2);
  if (*(long *)(lVar2 + 0x1c0) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x1d0) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x1d8) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x1e0) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x1e8) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x1f0) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x1f8) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x200) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x208) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x210) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x218) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x220) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x228) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x230) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x238) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x240) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x248) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 0x250) != 0) {
    FUN__text__001625a8();
  }
  if (*(long *)(lVar2 + 600) != 0) {
    FUN__text__001625a8();
  }
  FUN__text__00162cc8(*(undefined8 *)(lVar2 + 0x260));
  FUN__text__00162cc8(*(undefined8 *)(lVar2 + 0x268));
  return;
}


