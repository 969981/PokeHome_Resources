/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cde24; name: FUN_.text__005cde24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cde24(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(param_2 + 0xb8);
  if (*(long *)(param_2 + 0xb0) != lVar2) {
    lVar3 = *(long *)(lVar2 + -8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      lVar2 = *(long *)(param_2 + 0xb8);
    }
    *param_1 = lVar3;
    *(long *)(param_2 + 0xb8) = lVar2 + -8;
    return;
  }
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar4 = *(long **)(param_2 + 8);
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar4;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0xe8,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
    FUN__text__005cf6d4(0,*(undefined4 *)(param_2 + 0x118));
    _DAT_00000010 = 0;
    _DAT_00000018 = 0xe8;
    _DAT_00000020 = 8;
    _DAT_00000008 = plVar4;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  }
  else {
    FUN__text__005cf6d4(lVar2,*(undefined4 *)(param_2 + 0x118));
    *(long **)(lVar2 + 8) = plVar4;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0xe8;
    *(undefined8 *)(lVar2 + 0x20) = 8;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  iVar1 = *(int *)(param_2 + 0x118);
  *param_1 = lVar2;
  *(int *)(param_2 + 0x118) = iVar1 + 1;
  return;
}


