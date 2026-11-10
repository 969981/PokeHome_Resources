/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00147300; name: FUN_.text__00147300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00147300(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long local_48;
  
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  uVar3 = *_DAT_0089f4f0;
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x158,8);
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN__text__00152ba4(lVar1,param_2,param_3 & 1);
  *(long **)(lVar1 + 8) = param_2;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x158;
  *(undefined8 *)(lVar1 + 0x20) = 8;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  plVar4 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  lVar2 = *plVar4;
  *param_1 = lVar1;
  local_48 = lVar1;
  (**(code **)(lVar2 + 0x10))(plVar4);
  FUN__text__0010fb80(uVar3,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


