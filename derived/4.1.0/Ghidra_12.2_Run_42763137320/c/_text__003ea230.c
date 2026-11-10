/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ea230; name: FUN_.text__003ea230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__003ea230(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long *local_38;
  
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,400,0x10);
  lVar3 = _DAT_0089f690;
  if (plVar2 != (long *)0x0) {
    plVar2[7] = 0;
    *(undefined4 *)(plVar2 + 8) = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    *plVar2 = lVar3 + 0x10;
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if (*(long *)(uVar5 + 0x98) != 0) {
        lVar3 = *(long *)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8 + -8);
      }
    }
    *(undefined4 *)(plVar2 + 10) = 0;
    lVar1 = _DAT_008a52d8;
    plVar2[0x21] = 0;
    plVar2[0xf] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0x14] = 0;
    plVar2[9] = lVar1 + 0x50;
    *plVar2 = lVar1 + 0x10;
    plVar2[1] = lVar3;
    plVar2[0x10] = 0;
    plVar2[0x11] = 0;
    plVar2[0x12] = 0;
    plVar2[0x13] = 0;
    plVar2[0x15] = 0;
    plVar2[0x16] = 0;
    plVar2[0x17] = 0;
    plVar2[0x18] = 0;
    plVar2[0x19] = 0;
    plVar2[0x1a] = 0;
    plVar2[0x1b] = 0;
    plVar2[0x1c] = 0;
    plVar2[0x1d] = 0;
    plVar2[0x1e] = 0;
    plVar2[0x1f] = 0;
    plVar2[0x20] = 0;
    FUN__text__006f45e4();
    FUN__text__006f4828(plVar2 + 0x14);
    FUN__text__006f4410((long)plVar2 + 0xbc);
    plVar2[0x20] = -1;
    plVar2[0x21] = 0;
    plVar2[0x1e] = 0;
    plVar2[0x1f] = 0;
    plVar2[0x22] = 0;
    plVar2[0x23] = 0;
    plVar2[0x24] = 0;
    plVar2[0x25] = 0;
    plVar2[1] = (long)param_2;
    plVar2[2] = (long)plVar2;
    plVar2[3] = 400;
    plVar2[4] = 0x10;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    return plVar2;
  }
  plVar2 = (long *)(**(code **)(*param_2 + 0xb8))(param_2);
  lVar3 = _DAT_008a52d8 + 0x10;
  plVar2[9] = _DAT_008a52d8 + 0x50;
  *plVar2 = lVar3;
  if ((code *)plVar2[0x22] != (code *)0x0) {
    local_38 = plVar2 + 0xb;
    (*(code *)plVar2[0x22])(plVar2 + 0x26,&local_38);
  }
  pcVar4 = (code *)plVar2[0x23];
  if (pcVar4 != (code *)0x0) {
    plVar2[0x24] = 0;
    plVar2[0x25] = 0;
    plVar2[0x22] = 0;
    plVar2[0x23] = 0;
    (*pcVar4)(plVar2 + 0x26);
  }
  FUN__text__005b509c(plVar2 + 0x1e);
  if (plVar2[0x1f] != 0) {
    (**(code **)(*(long *)(plVar2[0x1f] + 0x48) + 0x18))();
    plVar2[0x1f] = 0;
  }
  FUN__text__006f4420((long)plVar2 + 0xbc);
  FUN__text__006f4838(plVar2 + 0x14);
  FUN__text__006f45f4(plVar2 + 0xf);
  lVar3 = plVar2[0xb];
  plVar2[0xb] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)plVar2[0xc] + 0x18))((long *)plVar2[0xc],lVar3,plVar2[0xd],plVar2[0xe]);
  }
  plVar2 = (long *)FUN__text__005b5108(plVar2);
  return plVar2;
}


