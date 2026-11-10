/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f1de4; name: FUN_.text__002f1de4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002f1de4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x10,8);
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  FUN__text__002fee94(lVar2,param_2);
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  param_1[1] = 0;
  lVar1 = _DAT_008a28d8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (long)param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = lVar2;
  param_1[8] = (long)param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0x10;
  param_1[10] = 8;
  nn::os::InitializeLightEvent(param_1 + 0xf,0,1);
  *(undefined1 *)((long)param_1 + 0x7a) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN__text__002f4800(param_1 + 1,param_3);
  lVar2 = _DAT_008a28e0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  *param_1 = lVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x29] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x16] = (long)param_2;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = (long)param_2;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = (long)param_2;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = (long)param_2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = (long)param_2;
  FUN__text__002f1fa0(param_1 + 0x13,param_4);
  FUN__text__002b2fd0(param_1 + 0x19,param_5);
  FUN__text__002b2fd0(param_1 + 0x1f,param_5);
  FUN__text__002b2fd0(param_1 + 0x25,param_5);
  FUN__text__002f2140(param_1 + 0x2b,param_5);
  return;
}


