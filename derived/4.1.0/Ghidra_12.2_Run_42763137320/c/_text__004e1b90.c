/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e1b90; name: FUN_.text__004e1b90
 */


void FUN__text__004e1b90(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  iVar2 = *(int *)(param_1 + 0x688);
  do {
    if (iVar2 == 0) {
      if (*(long *)(param_1 + 0x60) != 0) {
        *(undefined4 *)(param_1 + 0x68) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
      }
      if (*(long *)(param_1 + 0xd8) != 0) {
        *(undefined4 *)(param_1 + 0xe0) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
      if (*(long *)(param_1 + 0x150) != 0) {
        *(undefined4 *)(param_1 + 0x158) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x150) = 0;
        *(undefined4 *)(param_1 + 0x15c) = 0;
      }
      if (*(long *)(param_1 + 0x1c8) != 0) {
        *(undefined4 *)(param_1 + 0x1d0) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x1c8) = 0;
        *(undefined4 *)(param_1 + 0x1d4) = 0;
      }
      if (*(long *)(param_1 + 0x240) != 0) {
        *(undefined4 *)(param_1 + 0x248) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x240) = 0;
        *(undefined4 *)(param_1 + 0x24c) = 0;
      }
      if (*(long *)(param_1 + 0x2b8) != 0) {
        *(undefined4 *)(param_1 + 0x2c0) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x2b8) = 0;
        *(undefined4 *)(param_1 + 0x2c4) = 0;
      }
      if (*(long *)(param_1 + 0x330) != 0) {
        *(undefined4 *)(param_1 + 0x338) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x330) = 0;
        *(undefined4 *)(param_1 + 0x33c) = 0;
      }
      if (*(long *)(param_1 + 0x3a8) != 0) {
        *(undefined4 *)(param_1 + 0x3b0) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x3a8) = 0;
        *(undefined4 *)(param_1 + 0x3b4) = 0;
      }
      if (*(long *)(param_1 + 0x420) != 0) {
        *(undefined4 *)(param_1 + 0x428) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x420) = 0;
        *(undefined4 *)(param_1 + 0x42c) = 0;
      }
      if (*(long *)(param_1 + 0x498) != 0) {
        *(undefined4 *)(param_1 + 0x4a0) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x498) = 0;
        *(undefined4 *)(param_1 + 0x4a4) = 0;
      }
      if (*(long *)(param_1 + 0x510) != 0) {
        *(undefined4 *)(param_1 + 0x518) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x510) = 0;
        *(undefined4 *)(param_1 + 0x51c) = 0;
      }
      if (*(long *)(param_1 + 0x588) != 0) {
        *(undefined4 *)(param_1 + 0x590) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x588) = 0;
        *(undefined4 *)(param_1 + 0x594) = 0;
      }
      if (*(long *)(param_1 + 0x600) != 0) {
        *(undefined4 *)(param_1 + 0x608) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x600) = 0;
        *(undefined4 *)(param_1 + 0x60c) = 0;
      }
      if (*(long *)(param_1 + 0x678) != 0) {
        *(undefined4 *)(param_1 + 0x680) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 0x678) = 0;
        *(undefined4 *)(param_1 + 0x684) = 0;
      }
      return;
    }
    if (*(int *)(param_1 + 0x680) == 0) {
LAB__text__004e1d80:
      plVar5 = (long *)0x0;
    }
    else {
      plVar7 = *(long **)(param_1 + 0x678);
      plVar5 = (long *)*plVar7;
      if (plVar5 == (long *)0x0) {
        uVar6 = (ulong)(*(int *)(param_1 + 0x680) - 1);
        do {
          plVar7 = plVar7 + 1;
          if (uVar6 == 0) goto LAB__text__004e1d80;
          plVar5 = (long *)*plVar7;
          uVar6 = uVar6 - 1;
        } while (plVar5 == (long *)0x0);
      }
    }
    piVar1 = (int *)((long)plVar5 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    iVar2 = *(int *)(param_1 + 0x688);
  } while( true );
}


