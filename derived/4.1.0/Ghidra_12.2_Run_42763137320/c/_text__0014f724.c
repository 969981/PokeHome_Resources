/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014f724; name: FUN_.text__0014f724
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014f724(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar2 = *(long **)(param_1 + 8);
  uVar3 = *(undefined8 *)(*_DAT_008a0228 + 0x10);
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x1b0,8);
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  FUN__text__005d7230(lVar1,param_2,3,param_3,1,uVar3);
  *(long **)(lVar1 + 8) = plVar2;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x1b0;
  *(undefined8 *)(lVar1 + 0x20) = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  if (*(long *)(param_1 + 0xe8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xe8) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0xe8) = lVar1;
  return;
}


