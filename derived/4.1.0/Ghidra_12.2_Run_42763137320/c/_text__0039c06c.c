/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039c06c; name: FUN_.text__0039c06c
 */


bool FUN__text__0039c06c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x170));
  if (*(long *)(param_1 + 0x150) == 0) {
    plVar4 = *(long **)(param_1 + 0x98);
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0xb0,0x10);
    uVar6 = tpidr_el0;
    uVar6 = uVar6 & 0xffffffffffffe000;
    if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = plVar4;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__0039f934(lVar2,*(undefined8 *)(param_1 + 0xa0),param_2,param_1 + 0xa8);
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar5 = *(long *)(param_1 + 0x150);
    *(long *)(param_1 + 0x150) = lVar2;
    if (lVar5 != 0) {
      pcVar3 = *(code **)(lVar5 + 0x38);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar5 + 0x40) = 0;
        *(undefined8 *)(lVar5 + 0x48) = 0;
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(undefined8 *)(lVar5 + 0x38) = 0;
        (*pcVar3)(lVar5 + 0x50);
      }
      if (*(long *)(lVar5 + 0x20) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar5 + 0x20) + 0x48) + 0x18))();
        *(undefined8 *)(lVar5 + 0x20) = 0;
      }
      if (*(long *)(lVar5 + 0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar5 + 0x18) + 0x48) + 0x18))();
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x158) + 0x18))
                (*(long **)(param_1 + 0x158),lVar5,*(undefined8 *)(param_1 + 0x160),
                 *(undefined8 *)(param_1 + 0x168));
      lVar2 = *(long *)(param_1 + 0x150);
    }
    *(long **)(param_1 + 0x158) = plVar4;
    *(undefined8 *)(param_1 + 0x160) = 0xb0;
    *(undefined8 *)(param_1 + 0x168) = 0x10;
    if (lVar2 != 0) {
      FUN__text__0039fb48(lVar2,param_1 + 0x280);
      FUN__text__0039fbc0(*(undefined8 *)(param_1 + 0x150),param_1 + 0x300);
      bVar1 = *(long *)(param_1 + 0x150) != 0;
      goto LAB__text__0039c1b0;
    }
  }
  bVar1 = false;
LAB__text__0039c1b0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x170));
  return bVar1;
}


