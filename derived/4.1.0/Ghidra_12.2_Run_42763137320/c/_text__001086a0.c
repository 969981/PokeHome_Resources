/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001086a0; name: FUN_.text__001086a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__001086a0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,800,0x10);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)(**(code **)(*param_2 + 0xb8))(param_2);
    if ((code *)plVar2[2] == (code *)0x0) {
      return plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00108858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar2 = (long *)(*(code *)plVar2[2])(plVar2 + 6);
    return plVar2;
  }
  memset(plVar2,0,800);
  *(undefined4 *)(plVar2 + 6) = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = 0x8677a8;
  if (uVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(uVar4 + 0x98) != 0) {
      lVar3 = *(long *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8 + -8);
    }
  }
  *_DAT_0089f6d0 = 1;
  lVar1 = _DAT_0089f6d8;
  *plVar2 = _DAT_0089f6d8 + 0x10;
  plVar2[1] = lVar3;
  plVar2[9] = lVar1 + 0x40;
  nn::os::InitializeMutex((MutexType *)(plVar2 + 10),false,0);
  plVar2[0x22] = 0;
  plVar2[0x23] = 0;
  plVar2[0x20] = 0;
  plVar2[0x21] = 0;
  plVar2[0x10] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0x13] = 0;
  lVar3 = _DAT_0089f6e0 + 0x10;
  plVar2[0x32] = 0;
  *(undefined2 *)(plVar2 + 0x33) = 0;
  *(undefined4 *)(plVar2 + 0x36) = 0;
  plVar2[0xe] = lVar3;
  plVar2[0xf] = 0;
  plVar2[0x30] = 0;
  plVar2[0x31] = 0;
  plVar2[0x37] = 0;
  plVar2[0x38] = 0;
  plVar2[0x39] = 0;
  plVar2[0x3a] = 0;
  nn::os::InitializeLightEvent(plVar2 + 0x3b,0,0);
  nn::os::InitializeLightEvent((long)plVar2 + 0x1e4,0,0);
  plVar2[0x3f] = 0;
  plVar2[0x40] = 0;
  *(undefined8 *)((long)plVar2 + 0x206) = 0;
  *(undefined1 *)(plVar2 + 0x3e) = 0;
  *(undefined4 *)(plVar2 + 0x42) = 0;
  *(undefined2 *)((long)plVar2 + 0x214) = 0;
  plVar2[0x44] = 0;
  plVar2[0x45] = 0;
  plVar2[0x46] = 0;
  plVar2[0x47] = 0;
  plVar2[0x54] = 0;
  plVar2[0x55] = 0;
  plVar2[0x56] = 0;
  plVar2[0x57] = 0;
  plVar2[1] = (long)param_2;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 800;
  plVar2[4] = 0x10;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  return plVar2;
}


