/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c4910; name: FUN_.text__004c4910
 */


void FUN__text__004c4910(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (DAT_00aeabb0 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)&DAT_00aeab80);
  if (DAT_00aeaba8 != 0) {
    lVar2 = *DAT_00aeaba0;
    if (lVar2 == 0) {
      uVar4 = 0;
      do {
        if (DAT_00aeaba8 - 1 == uVar4) goto LAB__text__004c4a98;
        lVar2 = DAT_00aeaba0[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (lVar2 == 0);
    }
    else {
      uVar4 = 0;
    }
    lVar7 = 0;
    do {
      lVar3 = lVar2;
      lVar6 = *(long *)(lVar3 + 0x78);
      lVar2 = lVar6;
      if (*(long *)(lVar3 + 0x38) == param_1) {
        uVar5 = uVar4 & 0xffffffff;
        lVar3 = lVar7;
        if (lVar6 == 0) {
          uVar1 = (int)uVar4 + 1;
          uVar5 = (ulong)uVar1;
          if (uVar1 < DAT_00aeaba8) {
            plVar8 = DAT_00aeaba0 + uVar1;
            do {
              lVar2 = *plVar8;
              if (lVar2 != 0) {
                lVar3 = 0;
                goto LAB__text__004c49b0;
              }
              uVar1 = (int)uVar5 + 1;
              uVar5 = (ulong)uVar1;
              plVar8 = plVar8 + 1;
            } while (DAT_00aeaba8 != uVar1);
            lVar2 = 0;
            uVar5 = (ulong)DAT_00aeaba8;
            lVar3 = 0;
          }
          else {
            lVar2 = 0;
          }
        }
LAB__text__004c49b0:
        plVar8 = DAT_00aeaba0 + (uVar4 & 0xffffffff);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0x78);
        }
        *plVar8 = lVar6;
        DAT_00aeabb0 = DAT_00aeabb0 + -1;
        FUN__text__004c4750();
      }
      else {
        uVar5 = uVar4;
        if (lVar6 == 0) {
          uVar1 = (int)uVar4 + 1;
          if (DAT_00aeaba8 <= uVar1) break;
          plVar8 = DAT_00aeaba0 + uVar1;
          while( true ) {
            uVar5 = (ulong)uVar1;
            lVar2 = *plVar8;
            if (lVar2 != 0) break;
            uVar1 = uVar1 + 1;
            plVar8 = plVar8 + 1;
            if (DAT_00aeaba8 == uVar1) goto LAB__text__004c4a98;
          }
          lVar3 = 0;
        }
      }
      uVar4 = uVar5;
      lVar7 = lVar3;
    } while (lVar2 != 0);
  }
LAB__text__004c4a98:
  if ((DAT_00aeabb0 == 0) && (DAT_00aeaba0 != (long *)0x0)) {
    DAT_00aeaba8 = 0;
    FUN__text__00400fc0(0);
    DAT_00aeaba0 = (long *)0x0;
    DAT_00aeabac = 0;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_00aeab80);
  return;
}


