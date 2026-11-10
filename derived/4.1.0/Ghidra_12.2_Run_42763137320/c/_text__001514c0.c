/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001514c0; name: FUN_.text__001514c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001514c0(long *param_1,long *param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,400,0x10);
  if (lVar4 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    FUN__text__00598e80(0,*param_3);
    *param_1 = 0;
    _DAT_00000010 = 0;
    _DAT_00000018 = 400;
    _DAT_00000020 = 0x10;
    _DAT_00000008 = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    return;
  }
  FUN__text__00598e80(lVar4,*param_3);
  *param_1 = lVar4;
  *(long **)(lVar4 + 8) = param_2;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 400;
  *(undefined8 *)(lVar4 + 0x20) = 0x10;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  lVar4 = *(long *)(lVar4 + 0x58);
  if (*(long *)(lVar4 + 0x58) == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x60))();
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
  }
  piVar1 = (int *)(lVar4 + 0x54);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


