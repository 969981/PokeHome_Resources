/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002eaad8; name: FUN_.text__002eaad8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002eaad8(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  void *__s;
  long lVar3;
  long *plVar4;
  ulong __n;
  ulong uVar5;
  
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) != 0x10) {
    plVar4 = (long *)param_2[1];
    *(long **)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8) = plVar4;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
    plVar2 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x78,8);
    if (plVar2 == (long *)0x0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
      FUN__text__002ea7b8(0);
      _DAT_00000010 = 0;
      _DAT_00000018 = 0x78;
      _DAT_00000020 = 8;
      _DAT_00000008 = plVar4;
      *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    }
    else {
      FUN__text__002ea7b8(plVar2);
      plVar2[1] = (long)plVar4;
      plVar2[2] = (long)plVar2;
      plVar2[3] = 0x78;
      plVar2[4] = 8;
      *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
      (**(code **)(plVar2[9] + 0x10))();
    }
    plVar4 = (long *)param_2[1];
    uVar1 = (**(code **)(*param_2 + 0x70))(param_2);
    __n = (ulong)uVar1;
    __s = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,__n,1);
    if (*(long *)(uVar5 + 0x98) != 0x10) {
      *(long **)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8) = plVar4;
      lVar3 = *(long *)(uVar5 + 0x98);
      *(long *)(uVar5 + 0x98) = lVar3 + 1;
      if (uVar1 != 0) {
        memset(__s,0,__n);
        lVar3 = *(long *)(uVar5 + 0x98) + -1;
      }
      *(long *)(uVar5 + 0x98) = lVar3;
      (**(code **)(*param_2 + 0x78))(param_2,__s);
      (**(code **)(*plVar2 + 0x80))(plVar2,__s);
      if (__s != (void *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4,__s,__n,1);
      }
      *param_1 = (long)plVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


