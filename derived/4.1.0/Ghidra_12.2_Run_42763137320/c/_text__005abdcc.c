/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005abdcc; name: FUN_.text__005abdcc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__005abdcc(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = param_2;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x98,8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    _DAT_00000090 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000088 = 0;
    _DAT_00000080 = 0;
    _DAT_00000078 = 0;
    _DAT_00000070 = 0;
    _DAT_00000068 = 0;
    _DAT_00000060 = 0;
    _DAT_00000058 = 0;
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _DAT_00000020 = 0;
    _DAT_00000018 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
    plVar3 = (long *)FUN__text__005abf98();
    plVar3[7] = 0;
    lVar2 = _DAT_0089f690;
    *(undefined4 *)(plVar3 + 8) = 0;
    uVar7 = tpidr_el0;
    uVar7 = uVar7 & 0xffffffffffffe000;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *(undefined4 *)(plVar3 + 6) = 0;
    *plVar3 = lVar2 + 0x10;
    lVar2 = _DAT_008a5748;
    if (uVar7 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (*(long *)(uVar7 + 0x98) != 0) {
        lVar6 = *(long *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x10);
      }
    }
    plVar3[0xb] = 0;
    plVar3[10] = lVar2 + 0xa8;
    *plVar3 = lVar2 + 0x10;
    plVar3[1] = lVar6;
    plVar3[9] = lVar2 + 0x50;
    if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    plVar8 = *(long **)(*_DAT_0089f7d0 + 8);
    *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar8;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    plVar4 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x68,8);
    lVar2 = _DAT_0089f7d8;
    if (plVar4 != (long *)0x0) {
      plVar4[7] = 0;
      *(undefined4 *)(plVar4 + 8) = 0;
      *(undefined4 *)(plVar4 + 6) = 0;
      plVar4[0xc] = (long)(plVar3 + 10);
      plVar4[10] = 0;
      plVar4[0xb] = 0;
      plVar4[9] = lVar2 + 0x48;
      *plVar4 = lVar2 + 0x10;
      plVar4[1] = (long)plVar8;
      plVar4[2] = (long)plVar4;
      plVar4[3] = 0x68;
      plVar4[4] = 8;
      plVar4[5] = 0;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      (**(code **)(plVar4[9] + 0x10))();
      puVar1 = (undefined8 *)0x0;
      if (plVar3[0xb] != 0) {
        puVar1 = (undefined8 *)(**(code **)(*(long *)(plVar3[0xb] + 0x48) + 0x18))();
      }
      plVar3[0xb] = (long)plVar4;
      return puVar1;
    }
    puVar1 = (undefined8 *)(**(code **)(*plVar8 + 0xb8))(plVar8);
    nn::os::FinalizeLightEvent((LightEventType *)(puVar1 + 0x12));
    lVar2 = puVar1[0xc];
    if (lVar2 != 0) {
      puVar1[0xd] = lVar2;
      (**(code **)(*(long *)puVar1[0xf] + 0x18))((long *)puVar1[0xf],lVar2,puVar1[0xe] - lVar2,8);
    }
    *puVar1 = 0x895bb8;
    puVar1[9] = 0x895bf8;
    puVar1[10] = 0x895c50;
    puVar5 = (undefined8 *)0x0;
    if (puVar1[0xb] != 0) {
      puVar5 = (undefined8 *)(**(code **)(*(long *)(puVar1[0xb] + 0x48) + 0x18))();
      puVar1[0xb] = 0;
    }
    return puVar5;
  }
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *puVar1 = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN__text__005abf98();
  puVar1[0xe] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *puVar1 = 0x895ad8;
  puVar1[9] = 0x895b38;
  puVar1[10] = 0x895b90;
  if ((uVar7 != 0) && (*(long *)(uVar7 + 0x98) != 0)) {
    lVar2 = *(long *)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8 + -8);
    if (lVar2 != 0) goto LAB__text__005abe94;
  }
  lVar2 = FUN__text__005f52b0();
LAB__text__005abe94:
  puVar1[0xf] = lVar2;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  nn::os::InitializeLightEvent(puVar1 + 0x12,0,1);
  *(undefined1 *)((long)puVar1 + 0x92) = 0x4f;
  *(undefined1 *)((long)puVar1 + 0x93) = 0;
  puVar1[1] = param_2;
  puVar1[2] = puVar1;
  puVar1[3] = 0x98;
  puVar1[4] = 8;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  return puVar1;
}


