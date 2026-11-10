/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e3ff8; name: FUN_.text__005e3ff8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__005e3ff8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  plVar3 = *(long **)(*_DAT_0089f7d0 + 0x28);
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0x160,8);
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  FUN__text__005e36dc(lVar2,param_1);
  plVar1 = _DAT_008a5b10;
  lVar4 = *_DAT_008a5b10;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  *plVar1 = lVar2;
  if (lVar4 != 0) {
    FUN__text__005e3c7c(lVar4);
    (**(code **)(*(long *)plVar1[1] + 0x18))((long *)plVar1[1],lVar4,plVar1[2],plVar1[3]);
    lVar2 = *plVar1;
  }
  plVar1[1] = (long)plVar3;
  plVar1[2] = 0x160;
  plVar1[3] = 8;
  return lVar2;
}


