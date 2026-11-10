/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00215790; name: FUN_.text__00215790
 */


void FUN__text__00215790(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                        int param_5,undefined4 param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *local_58;
  
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x178,8);
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  FUN__text__00215ccc();
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  FUN__text__00215e18(lVar2,param_2,param_3,param_4,param_5,param_6);
  if (1 < param_5 - 0xbU) {
    lVar3 = *(long *)(lVar2 + 0xe8);
    *param_1 = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    if (lVar3 != 0) {
      (**(code **)(**(long **)(lVar2 + 0xf0) + 0x18))
                (*(long **)(lVar2 + 0xf0),lVar3,*(undefined8 *)(lVar2 + 0xf8),
                 *(undefined8 *)(lVar2 + 0x100));
    }
    lVar3 = *(long *)(lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0x48) = 0;
    if (lVar3 != 0) {
      (**(code **)(**(long **)(lVar2 + 0x50) + 0x18))
                (*(long **)(lVar2 + 0x50),lVar3,*(undefined8 *)(lVar2 + 0x58),
                 *(undefined8 *)(lVar2 + 0x60));
    }
    lVar3 = *(long *)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))
                (*(long **)(lVar2 + 0x10),lVar3,*(undefined8 *)(lVar2 + 0x18),
                 *(undefined8 *)(lVar2 + 0x20));
    }
                    /* WARNING: Could not recover jumptable at 0x002159b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2,lVar2,0x178,8);
    return;
  }
  FUN__text__002159c0(&local_58,param_2);
  plVar1 = local_58;
  lVar3 = local_58[0xc];
  local_58[0xc] = lVar2;
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0xe8);
    *(undefined8 *)(lVar3 + 0xe8) = 0;
    if (lVar2 != 0) {
      (**(code **)(**(long **)(lVar3 + 0xf0) + 0x18))
                (*(long **)(lVar3 + 0xf0),lVar2,*(undefined8 *)(lVar3 + 0xf8),
                 *(undefined8 *)(lVar3 + 0x100));
    }
    lVar2 = *(long *)(lVar3 + 0x48);
    *(undefined8 *)(lVar3 + 0x48) = 0;
    if (lVar2 != 0) {
      (**(code **)(**(long **)(lVar3 + 0x50) + 0x18))
                (*(long **)(lVar3 + 0x50),lVar2,*(undefined8 *)(lVar3 + 0x58),
                 *(undefined8 *)(lVar3 + 0x60));
    }
    lVar2 = *(long *)(lVar3 + 8);
    *(undefined8 *)(lVar3 + 8) = 0;
    if (lVar2 != 0) {
      (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))
                (*(long **)(lVar3 + 0x10),lVar2,*(undefined8 *)(lVar3 + 0x18),
                 *(undefined8 *)(lVar3 + 0x20));
    }
    (**(code **)(*(long *)plVar1[0xd] + 0x18))((long *)plVar1[0xd],lVar3,plVar1[0xe],plVar1[0xf]);
    lVar2 = plVar1[0xc];
  }
  plVar1[0xd] = (long)param_2;
  plVar1[0xe] = 0x178;
  plVar1[0xf] = 8;
  uVar4 = FUN__text__00215f48(lVar2);
  if ((uVar4 & 1) != 0) {
    (**(code **)(*plVar1 + 0x128))(plVar1);
  }
  *param_1 = local_58;
  return;
}


