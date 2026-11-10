/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8634; name: FUN_.text__005e8634
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e8634(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar2 = _DAT_0089f690;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar2 + 0x10;
  if ((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a5b40;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = lVar2 + 0x10;
  param_1[1] = (long)plVar5;
  param_1[9] = lVar2 + 0x88;
  param_1[0xb] = lVar2 + 0xb8;
  param_1[0xc] = 0;
  memset(param_1 + 0x14,0,0x1a0);
  param_1[0x48] = (long)plVar5;
  param_1[0x49] = param_2;
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2,0x1000);
  lVar4 = param_1[0x44];
  param_1[0x44] = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_1[0x45] + 0x18))
              ((long *)param_1[0x45],lVar4,param_1[0x46],param_1[0x47]);
  }
  param_1[0x45] = (long)plVar5;
  param_1[0x46] = param_2;
  param_1[0x47] = 0x1000;
  *param_1 = lVar2 + 0x10;
  param_1[9] = lVar2 + 0x88;
  param_1[0xb] = lVar2 + 0xb8;
  nn::os::InitializeLightEvent(param_1 + 0x4a,0,1);
  *(undefined1 *)((long)param_1 + 0x252) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x253) = 0;
  *(undefined2 *)(param_1 + 0x4b) = 0x100;
  *(undefined1 *)((long)param_1 + 0x25a) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((long)param_1 + 0x25c) = 0;
  return;
}


