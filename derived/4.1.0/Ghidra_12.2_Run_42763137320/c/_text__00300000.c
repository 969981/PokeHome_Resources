/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00300000; name: FUN_.text__00300000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00300000(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  param_1[7] = 0;
  lVar5 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar5 + 0x10;
  lVar5 = _DAT_008a2a10;
  if ((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
  }
  lVar2 = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = lVar5 + 0x10;
  param_1[1] = lVar3;
  param_1[9] = lVar5 + 0x48;
  plVar4 = param_1 + 0xb;
  do {
    lVar5 = 0x1e;
    lVar3 = lVar2;
    do {
      lVar5 = lVar5 + -1;
      *(undefined8 *)((long)param_1 + lVar3 + 0x318) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x310) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x324) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x308) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x300) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x2f8) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x2f0) = 0;
      *(undefined4 *)((long)param_1 + lVar3 + 800) = 3;
      *(undefined8 *)((long)param_1 + lVar3 + 0x330) = 0;
      *(undefined2 *)((long)param_1 + lVar3 + 0x338) = 0;
      *(undefined1 *)((long)param_1 + lVar3 + 0x32c) = 0;
      *(undefined4 *)((long)param_1 + lVar3 + 0x340) = 0xffffffff;
      *(undefined8 *)((long)param_1 + lVar3 + 0x348) = 0;
      *(undefined1 *)((long)param_1 + lVar3 + 0x350) = 0;
      *(undefined4 *)((long)param_1 + lVar3 + 900) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x354) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x35c) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x364) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x36c) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x374) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x37c) = 0;
      lVar3 = lVar3 + 0x330;
    } while (lVar5 != 0);
    plVar4 = plVar4 + 0xbf4;
    lVar2 = lVar2 + 0x5fa0;
  } while (plVar4 != param_1 + 0xe01fb);
  param_1[0xe01fb] = 0x12c00000000;
  memset(param_1 + 0xe01fc,0,0x2028);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xe0601),false,0);
  memset(param_1 + 0xb,0,0x700f80);
  FUN__text__00300180(param_1);
  return;
}


