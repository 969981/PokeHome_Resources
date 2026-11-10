/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fa7d0; name: FUN_.text__003fa7d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__003fa7d0(long param_1,float *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  float *pfVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  
  if (*(long **)(param_1 + 0x278) == (long *)0x0) {
    return (long *)0x0;
  }
  plVar1 = (long *)(param_1 + 0x278);
  plVar9 = *(long **)(param_1 + 0x278);
  plVar7 = (long *)0x0;
  do {
    plVar6 = plVar9;
    if ((char)plVar6[0xd] == '\0') {
      if (*(char *)((long)plVar6 + 0x65) == '\0') {
        nn::os::LockMutex((MutexType *)(plVar6 + 5));
        cVar3 = *(char *)((long)plVar6 + 0x6c);
        nn::os::UnlockMutex((MutexType *)(plVar6 + 5));
        if (cVar3 != '\0') {
          fVar10 = (float)(**(code **)(*plVar6 + 0x38))(plVar6);
          pfVar4 = _DAT_008a46b8;
          if ((long *)plVar6[2] == (long *)0x0) goto LAB__text__003fa9dc;
          plVar9 = (long *)plVar6[2];
          plVar7 = plVar6;
          break;
        }
      }
      plVar9 = (long *)plVar6[2];
    }
    else {
      uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar9 = (long *)plVar6[2];
      if ((uVar5 & 1) != 0) {
        plVar8 = plVar1;
        if ((long *)*plVar1 != plVar6) {
          plVar8 = plVar7 + 2;
        }
        *plVar8 = (long)plVar9;
        (**(code **)*plVar6)(plVar6);
        FUN__text__00400fc0(7,plVar6);
        plVar6 = plVar7;
      }
    }
    plVar7 = plVar6;
    if (plVar9 == (long *)0x0) {
      return (long *)0x0;
    }
  } while( true );
LAB__text__003fa8e8:
  plVar8 = plVar9;
  if ((char)plVar8[0xd] == '\0') {
    if (*(char *)((long)plVar8 + 0x65) == '\0') {
      nn::os::LockMutex((MutexType *)(plVar8 + 5));
      cVar3 = *(char *)((long)plVar8 + 0x6c);
      nn::os::UnlockMutex((MutexType *)(plVar8 + 5));
      if (cVar3 != '\0') {
        fVar11 = (float)(**(code **)(*plVar8 + 0x38))(plVar8);
        if (fVar11 == 0.0) {
          if (((*(char *)((long)plVar6 + 100) < *(char *)((long)plVar8 + 100)) || (0.0 < fVar10)) ||
             ((*(char *)((long)plVar8 + 100) == *(char *)((long)plVar6 + 100) &&
              ((float)(*(long *)(param_1 + 0x270) - plVar6[9]) / *pfVar4 <
               (float)(*(long *)(param_1 + 0x270) - plVar8[9]) / *pfVar4)))) {
LAB__text__003fa9d0:
            plVar6 = plVar8;
            fVar10 = fVar11;
          }
        }
        else if (fVar11 < fVar10) goto LAB__text__003fa9d0;
      }
    }
    plVar9 = (long *)plVar8[2];
  }
  else {
    uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
    plVar9 = (long *)plVar8[2];
    if ((uVar5 & 1) != 0) {
      plVar2 = plVar1;
      if ((long *)*plVar1 != plVar8) {
        plVar2 = plVar7 + 2;
      }
      *plVar2 = (long)plVar9;
      (**(code **)*plVar8)(plVar8);
      FUN__text__00400fc0(7,plVar8);
      plVar8 = plVar7;
    }
  }
  plVar7 = plVar8;
  if (plVar9 == (long *)0x0) {
LAB__text__003fa9dc:
    *param_2 = fVar10;
    return plVar6;
  }
  goto LAB__text__003fa8e8;
}


