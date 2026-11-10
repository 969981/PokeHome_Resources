/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fa520; name: FUN_.text__003fa520
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__003fa520(long param_1,float *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  float *pfVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  uVar6 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0x270) = uVar6;
  if (*(char *)(param_1 + 0x218) != '\0') {
    plVar7 = (long *)FUN__text__003fa7d0(param_1,param_2);
    goto LAB__text__003fa79c;
  }
  if (*(long **)(param_1 + 0x278) != (long *)0x0) {
    plVar1 = (long *)(param_1 + 0x278);
    plVar11 = *(long **)(param_1 + 0x278);
    plVar9 = (long *)0x0;
    do {
      while (plVar7 = plVar11, (char)plVar7[0xd] == '\0') {
        nn::os::LockMutex((MutexType *)(plVar7 + 5));
        cVar3 = *(char *)((long)plVar7 + 0x6c);
        nn::os::UnlockMutex((MutexType *)(plVar7 + 5));
        if (cVar3 != '\0') {
          fVar12 = (float)(**(code **)(*plVar7 + 0x38))(plVar7);
          pfVar4 = _DAT_008a46b8;
          bVar5 = *(char *)((long)plVar7 + 0x6a) != '\0';
          if ((long *)plVar7[2] == (long *)0x0) goto LAB__text__003fa788;
          plVar11 = (long *)plVar7[2];
          plVar9 = plVar7;
          goto LAB__text__003fa66c;
        }
        plVar11 = (long *)plVar7[2];
LAB__text__003fa590:
        plVar9 = plVar7;
        if (plVar11 == (long *)0x0) goto LAB__text__003fa790;
      }
      uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
      plVar11 = (long *)plVar7[2];
      if ((uVar8 & 1) == 0) goto LAB__text__003fa590;
      plVar10 = plVar1;
      if ((long *)*plVar1 != plVar7) {
        plVar10 = plVar9 + 2;
      }
      *plVar10 = (long)plVar11;
      (**(code **)*plVar7)(plVar7);
      FUN__text__00400fc0(7,plVar7);
    } while (plVar11 != (long *)0x0);
  }
  goto LAB__text__003fa790;
LAB__text__003fa66c:
  do {
    plVar10 = plVar11;
    if ((char)plVar10[0xd] == '\0') {
      nn::os::LockMutex((MutexType *)(plVar10 + 5));
      cVar3 = *(char *)((long)plVar10 + 0x6c);
      nn::os::UnlockMutex((MutexType *)(plVar10 + 5));
      if (cVar3 == '\0') {
        plVar11 = (long *)plVar10[2];
      }
      else {
        fVar13 = (float)(**(code **)(*plVar10 + 0x38))(plVar10);
        if (!bVar5) {
          if (*(char *)((long)plVar10 + 0x6a) == '\0') goto LAB__text__003fa710;
          bVar5 = true;
          goto LAB__text__003fa778;
        }
        if (*(char *)((long)plVar10 + 0x6a) == '\0') {
          bVar5 = true;
LAB__text__003fa768:
          fVar13 = fVar12;
        }
        else {
LAB__text__003fa710:
          if (fVar13 == 0.0) {
            if (((*(char *)((long)plVar10 + 100) <= *(char *)((long)plVar7 + 100)) &&
                (fVar12 <= 0.0)) &&
               ((*(char *)((long)plVar10 + 100) != *(char *)((long)plVar7 + 100) ||
                ((float)(*(long *)(param_1 + 0x270) - plVar10[9]) / *pfVar4 <=
                 (float)(*(long *)(param_1 + 0x270) - plVar7[9]) / *pfVar4))))
            goto LAB__text__003fa768;
          }
          else if (fVar12 <= fVar13) goto LAB__text__003fa768;
LAB__text__003fa778:
          plVar7 = plVar10;
        }
        plVar11 = (long *)plVar10[2];
        fVar12 = fVar13;
      }
    }
    else {
      uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10);
      plVar11 = (long *)plVar10[2];
      if ((uVar8 & 1) != 0) {
        plVar2 = plVar1;
        if ((long *)*plVar1 != plVar10) {
          plVar2 = plVar9 + 2;
        }
        *plVar2 = (long)plVar11;
        (**(code **)*plVar10)(plVar10);
        FUN__text__00400fc0(7,plVar10);
        plVar10 = plVar9;
      }
    }
    plVar9 = plVar10;
  } while (plVar11 != (long *)0x0);
LAB__text__003fa788:
  *param_2 = fVar12;
  if (bVar5) goto LAB__text__003fa79c;
LAB__text__003fa790:
  plVar7 = (long *)FUN__text__003fa2c0(param_1);
LAB__text__003fa79c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return plVar7;
}


