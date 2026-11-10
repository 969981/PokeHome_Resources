/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005abf98; name: FUN_.text__005abf98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005abf98(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  param_1[7] = 0;
  lVar4 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar4 + 0x10;
  lVar4 = _DAT_008a5748;
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  param_1[0xb] = 0;
  param_1[10] = lVar4 + 0xa8;
  *param_1 = lVar4 + 0x10;
  param_1[1] = lVar5;
  param_1[9] = lVar4 + 0x50;
  if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar6 = *(long **)(*_DAT_0089f7d0 + 8);
  *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = plVar6;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x68,8);
  lVar4 = _DAT_0089f7d8;
  if (plVar2 != (long *)0x0) {
    plVar2[7] = 0;
    *(undefined4 *)(plVar2 + 8) = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    plVar2[0xc] = (long)(param_1 + 10);
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[9] = lVar4 + 0x48;
    *plVar2 = lVar4 + 0x10;
    plVar2[1] = (long)plVar6;
    plVar2[2] = (long)plVar2;
    plVar2[3] = 0x68;
    plVar2[4] = 8;
    plVar2[5] = 0;
    *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
    (**(code **)(plVar2[9] + 0x10))();
    if (param_1[0xb] != 0) {
      (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    }
    param_1[0xb] = (long)plVar2;
    return;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0xb8))(plVar6);
  nn::os::FinalizeLightEvent((LightEventType *)(puVar3 + 0x12));
  lVar4 = puVar3[0xc];
  if (lVar4 != 0) {
    puVar3[0xd] = lVar4;
    (**(code **)(*(long *)puVar3[0xf] + 0x18))((long *)puVar3[0xf],lVar4,puVar3[0xe] - lVar4,8);
  }
  *puVar3 = 0x895bb8;
  puVar3[9] = 0x895bf8;
  puVar3[10] = 0x895c50;
  if (puVar3[0xb] != 0) {
    (**(code **)(*(long *)(puVar3[0xb] + 0x48) + 0x18))();
    puVar3[0xb] = 0;
  }
  return;
}


