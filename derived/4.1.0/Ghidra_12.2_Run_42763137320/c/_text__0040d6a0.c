/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040d6a0; name: FUN_.text__0040d6a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0040d6a0(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  long local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  *_DAT_008a45a0 = 0;
  plVar2 = _DAT_008a45c0;
  if (*_DAT_008a45c0 == 0) {
    FUN__text__00409260();
    plVar3 = (long *)*_DAT_008a4630;
    plVar1 = _DAT_008a4630;
  }
  else {
    FUN__text__004b7a24();
    plVar3 = (long *)*_DAT_008a4630;
    plVar1 = _DAT_008a4630;
  }
  _DAT_008a4630 = plVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
  }
  local_88 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 4;
  local_90 = 0;
  local_b0[0] = 0;
  FUN__text__004726e0(local_b0,1);
  if (*plVar2 != 0) {
    FUN__text__004b6940(*plVar2,0,0,0);
  }
  plVar3 = _DAT_008a4640;
  if (*_DAT_008a4640 != 0) {
    FUN__text__0046ce18();
  }
  if (*_DAT_008a4450 != 0) {
    FUN__text__004c1490();
  }
  FUN__text__00414e80();
  lVar8 = _DAT_008a45b8;
  lVar6 = *(long *)(_DAT_008a45b8 + 0xb8);
  if (lVar6 != 0) {
    lVar5 = _DAT_008a45f8 + 0x10;
    do {
      local_78 = *(code **)(lVar6 + 8);
      local_70 = *(undefined8 *)(lVar6 + 0x10);
      uStack_68 = *(undefined8 *)(lVar6 + 0x18);
      lVar6 = *(long *)(lVar6 + 0x18);
      local_80 = lVar5;
      (*local_78)(&local_80,0x80,local_70);
    } while (lVar6 != 0);
  }
  lVar6 = 0;
  do {
    piVar9 = (int *)(lVar8 + lVar6 * 0x18);
    plVar10 = (long *)(piVar9 + 4);
    puVar7 = (undefined8 *)*plVar10;
    while (puVar7 != (undefined8 *)0x0) {
      lVar5 = puVar7[3];
      if (lVar5 == 0) {
        piVar9[2] = 0;
        piVar9[3] = 0;
      }
      *plVar10 = lVar5;
      puVar7[3] = 0;
      *piVar9 = *piVar9 + -1;
      (**(code **)*puVar7)(puVar7);
      FUN__text__00400fc0(0x10,puVar7);
      puVar7 = (undefined8 *)*plVar10;
    }
    lVar6 = lVar6 + 1;
    *piVar9 = 0;
    piVar9[2] = 0;
    piVar9[3] = 0;
    piVar9[4] = 0;
    lVar5 = _DAT_008a4600;
    piVar9[5] = 0;
  } while (lVar6 != 0xd);
  lVar8 = 0;
  do {
    piVar9 = (int *)(lVar5 + lVar8 * 0x18);
    plVar10 = (long *)(piVar9 + 4);
    puVar7 = (undefined8 *)*plVar10;
    while (puVar7 != (undefined8 *)0x0) {
      lVar6 = puVar7[3];
      if (lVar6 == 0) {
        piVar9[2] = 0;
        piVar9[3] = 0;
      }
      *plVar10 = lVar6;
      puVar7[3] = 0;
      *piVar9 = *piVar9 + -1;
      (**(code **)*puVar7)(puVar7);
      FUN__text__00400fc0(0x10,puVar7);
      puVar7 = (undefined8 *)*plVar10;
    }
    lVar8 = lVar8 + 1;
    *piVar9 = 0;
    piVar9[2] = 0;
    piVar9[3] = 0;
    piVar9[4] = 0;
    plVar10 = _DAT_008a4650;
    piVar9[5] = 0;
  } while (lVar8 != 0xd);
  if (*_DAT_008a4650 != 0) {
    FUN__text__0047ba50();
    lVar8 = *plVar10;
    if (lVar8 != 0) {
      FUN__text__0047b904(lVar8);
      FUN__text__00400fc0(0x10,lVar8);
    }
    *plVar10 = 0;
  }
  plVar10 = _DAT_008a4648;
  if (*_DAT_008a4648 != 0) {
    FUN__text__0042f090();
    if (*plVar10 != 0) {
      FUN__text__00400fc0(0x10);
    }
    *plVar10 = 0;
  }
  FUN__text__004710a0();
  if (*plVar2 != 0) {
    FUN__text__004af950();
    lVar8 = *plVar2;
    if (lVar8 != 0) {
      FUN__text__004af7b0(lVar8);
      FUN__text__00400fc0(0x10,lVar8);
    }
    *plVar2 = 0;
  }
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 0x18))();
    puVar7 = (undefined8 *)*plVar1;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      FUN__text__00400fc0(0x10,puVar7);
    }
    *plVar1 = 0;
  }
  plVar2 = _DAT_008a45c8;
  if (*_DAT_008a45c8 != 0) {
    FUN__text__004e1dc0();
    FUN__text__004e2010(*plVar2);
  }
  plVar1 = _DAT_008a4620;
  if (*_DAT_008a4620 != 0) {
    FUN__text__00400fc0(0x10);
    *plVar1 = 0;
  }
  plVar1 = _DAT_008a45e0;
  if (*_DAT_008a45e0 != 0) {
    FUN__text__00447620();
    lVar8 = *plVar1;
    if (lVar8 != 0) {
      FUN__text__00447420(lVar8);
      FUN__text__00400fc0(0x10,lVar8);
    }
    *plVar1 = 0;
  }
  plVar1 = _DAT_008a45d8;
  if (*_DAT_008a45d8 != 0) {
    FUN__text__0048ccb0();
    lVar8 = *plVar1;
    if (lVar8 != 0) {
      FUN__text__0048ef58(lVar8 + 0x68);
      nn::os::FinalizeEvent((EventType *)(lVar8 + 0x38));
      nn::os::FinalizeMutex((MutexType *)(lVar8 + 0x18));
      FUN__text__00400fc0(0x10,lVar8);
    }
    *plVar1 = 0;
  }
  plVar1 = _DAT_008a4638;
  if (*_DAT_008a4638 != 0) {
    FUN__text__0048e68c();
    lVar8 = *plVar1;
    if (lVar8 != 0) {
      nn::os::FinalizeMutex((MutexType *)(lVar8 + 0x20));
      FUN__text__00400fc0(0x10,lVar8);
    }
    *plVar1 = 0;
  }
  plVar1 = _DAT_008a4628;
  if (*_DAT_008a4628 != 0) {
    FUN__text__004c757c();
    if (*plVar1 != 0) {
      FUN__text__00400fc0(0x10);
    }
    *plVar1 = 0;
  }
  plVar1 = _DAT_008a4658;
  if (*_DAT_008a4658 != 0) {
    FUN__text__004305c0();
    lVar8 = *plVar1;
    if (lVar8 != 0) {
      FUN__text__004304ec(lVar8);
      FUN__text__00400fc0(0x10,lVar8);
    }
    *plVar1 = 0;
  }
  if (*plVar3 != 0) {
    FUN__text__0046cdd0();
    lVar8 = *plVar3;
    if (lVar8 != 0) {
      FUN__text__0046cd64(lVar8);
      FUN__text__00400fc0(0x10,lVar8);
    }
    *plVar3 = 0;
  }
  plVar3 = _DAT_008a45f0;
  if (*_DAT_008a45f0 != 0) {
    FUN__text__00433dc0();
    lVar8 = *plVar3;
    if (lVar8 != 0) {
      FUN__text__00433dc0(lVar8);
      FUN__text__00400fc0(0x10,lVar8);
    }
    *plVar3 = 0;
  }
  uVar4 = FUN__text__00413940();
  if ((uVar4 & 1) != 0) {
    FUN__text__004137f0();
  }
  if (*plVar2 != 0) {
    FUN__text__004e1b90();
    lVar8 = *plVar2;
    if (lVar8 != 0) {
      FUN__text__004114ac(lVar8);
      FUN__text__00400fc0(0x10,lVar8);
    }
    *plVar2 = 0;
  }
  FUN__text__0047d75c();
  FUN__text__0046c780();
  FUN__text__0041eb90();
  *_DAT_008a4590 = 0;
  *_DAT_008a4598 = 0;
  return;
}


