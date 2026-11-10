/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040d190; name: FUN_.text__0040d190
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0040d190(void *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  time_t tVar4;
  void *__s;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = _DAT_008a45c8;
  if (*_DAT_008a45c8 == 0) {
    __s = (void *)FUN__text__00400f80(0x10,0x690);
    if (__s != (void *)0x0) {
      memset(__s,0,0x690);
      FUN__text__00411094(__s);
      *plVar7 = (long)__s;
      uVar2 = FUN__text__004e1a88(__s);
      if ((uVar2 & 1) == 0) {
        return 0x34;
      }
      goto LAB__text__0040d1b4;
    }
    goto LAB__text__0040d654;
  }
LAB__text__0040d1b4:
  uVar2 = FUN__text__00413940();
  if (((uVar2 & 1) == 0) && (iVar1 = FUN__text__00413610((long)param_1 + 0x38), iVar1 != 1))
  goto joined_r0x0040d68c;
  plVar7 = _DAT_008a45f0;
  if (*_DAT_008a45f0 == 0) {
    puVar3 = (undefined8 *)FUN__text__00400f80(0x10,0xf0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x1c] = 0;
      puVar3[0x1d] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      *plVar7 = (long)puVar3;
      iVar1 = FUN__text__00433bc0();
      if (iVar1 != 1) goto joined_r0x0040d68c;
      goto LAB__text__0040d1e0;
    }
LAB__text__0040d5c0:
    *plVar7 = 0;
    iVar1 = 0x34;
    goto joined_r0x0040d68c;
  }
LAB__text__0040d1e0:
  plVar7 = _DAT_008a4628;
  if (*_DAT_008a4628 == 0) {
    puVar3 = (undefined8 *)FUN__text__00400f80(0x10,0x98);
    if (puVar3 == (undefined8 *)0x0) goto LAB__text__0040d5c0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    *puVar3 = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 1;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 1;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 1;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)(puVar3 + 0xc) = 1;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    *(undefined4 *)(puVar3 + 0xf) = 1;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    *(undefined4 *)(puVar3 + 0x12) = 1;
    *plVar7 = (long)puVar3;
    iVar1 = FUN__text__004c756c();
    if (iVar1 != 1) goto joined_r0x0040d68c;
  }
  plVar7 = _DAT_008a4630;
  if (*_DAT_008a4630 == 0) {
    if (*(char *)((long)_DAT_008a45b0 + 100) == '\0') {
      *_DAT_008a4660 = 0;
      plVar5 = (long *)FUN__text__00400f80(0x10,0x100);
      if (plVar5 != (long *)0x0) {
        FUN__text__004a22ac();
        goto LAB__text__0040d570;
      }
    }
    else {
      *_DAT_008a4660 = _DAT_008a4668;
      plVar5 = (long *)FUN__text__00400f80(0x10,0x178);
      if (plVar5 != (long *)0x0) {
        FUN__text__004e2290();
LAB__text__0040d570:
        *plVar7 = (long)plVar5;
        iVar1 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if (iVar1 != 1) goto joined_r0x0040d68c;
        goto LAB__text__0040d200;
      }
    }
LAB__text__0040d654:
    *plVar7 = 0;
    iVar1 = 0x34;
  }
  else {
LAB__text__0040d200:
    plVar7 = _DAT_008a45d8;
    if (*_DAT_008a45d8 == 0) {
      puVar3 = (undefined8 *)FUN__text__00400f80(0x10,0xb8);
      if (puVar3 == (undefined8 *)0x0) {
        *plVar7 = 0;
        iVar1 = 0x34;
        goto joined_r0x0040d68c;
      }
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      puVar3[0x13] = 0;
      puVar3[0x14] = 0;
      puVar3[0xe] = 0;
      puVar3[4] = 0;
      *puVar3 = 0;
      puVar3[0xd] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      nn::os::InitializeMutex((MutexType *)(puVar3 + 3),true,0);
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      FUN__text__0048ef30(puVar3 + 0xd);
      *plVar7 = (long)puVar3;
      iVar1 = FUN__text__0048cb20(puVar3);
      if (iVar1 != 1) goto joined_r0x0040d68c;
    }
    plVar7 = _DAT_008a4638;
    if (*_DAT_008a4638 == 0) {
      puVar3 = (undefined8 *)FUN__text__00400f80(0x10,0x48);
      if (puVar3 == (undefined8 *)0x0) goto LAB__text__0040d654;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[4] = 0;
      nn::os::InitializeMutex((MutexType *)(puVar3 + 4),true,0);
      *plVar7 = (long)puVar3;
      iVar1 = FUN__text__0048e650(puVar3);
      if (iVar1 != 1) goto joined_r0x0040d68c;
    }
    plVar7 = _DAT_008a45e0;
    if (*_DAT_008a45e0 == 0) {
      lVar6 = FUN__text__00400f80(0x10,0x48);
      if (lVar6 == 0) goto LAB__text__0040d654;
      FUN__text__00447408();
      *plVar7 = lVar6;
      iVar1 = FUN__text__00447460(lVar6);
      if (iVar1 != 1) goto joined_r0x0040d68c;
    }
    plVar7 = _DAT_008a4640;
    if (*_DAT_008a4640 == 0) {
      puVar3 = (undefined8 *)FUN__text__00400f80(0x10,8);
      if (puVar3 == (undefined8 *)0x0) goto LAB__text__0040d5c0;
      *puVar3 = 0;
      *plVar7 = (long)puVar3;
      iVar1 = FUN__text__0046cd68();
      if (iVar1 != 1) goto joined_r0x0040d68c;
    }
    plVar7 = _DAT_008a4648;
    if (*_DAT_008a4648 == 0) {
      puVar3 = (undefined8 *)FUN__text__00400f80(0x10,0x20);
      if (puVar3 == (undefined8 *)0x0) goto LAB__text__0040d5c0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      *plVar7 = (long)puVar3;
    }
    plVar7 = _DAT_008a4650;
    if (*_DAT_008a4650 == 0) {
      lVar6 = FUN__text__00400f80(0x10,0x18);
      if (lVar6 == 0) goto LAB__text__0040d654;
      FUN__text__0047b8f8();
      *plVar7 = lVar6;
      iVar1 = FUN__text__0047b910(lVar6,*(undefined4 *)((long)_DAT_008a45b0 + 8));
      if (iVar1 != 1) goto joined_r0x0040d68c;
    }
    plVar7 = _DAT_008a4658;
    if (*_DAT_008a4658 == 0) {
      lVar6 = FUN__text__00400f80(0x10,0xa8);
      if (lVar6 == 0) goto LAB__text__0040d654;
      FUN__text__0043048c();
      *plVar7 = lVar6;
      iVar1 = FUN__text__00430500(lVar6);
      if (iVar1 != 1) goto joined_r0x0040d68c;
    }
    plVar7 = _DAT_008a4450;
    if ((*_DAT_008a4450 == 0) && (FUN__text__004c1398(), *plVar7 == 0)) {
      iVar1 = 0x34;
    }
    else {
      tVar4 = time((time_t *)0x0);
      iVar1 = 1;
      *_DAT_008a45e8 = tVar4;
    }
  }
joined_r0x0040d68c:
  if (param_1 == (void *)0x0) {
    return iVar1;
  }
  memcpy(param_1,_DAT_008a45b0,0xb0);
  return iVar1;
}


