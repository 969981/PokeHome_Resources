/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00396650; name: FUN_.text__00396650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00396650(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN__text__003a05b4(lVar2,param_2);
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  param_1[1] = 0;
  lVar1 = _DAT_008a33b0;
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
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xf),true,0);
  *(undefined1 *)(param_1 + 0x13) = 0;
  FUN__text__00398570(param_1 + 1,param_3);
  lVar2 = _DAT_008a33b8;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  param_1[0x1c] = 0;
  *param_1 = lVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x19] = (long)param_2;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = (long)param_2;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = (long)param_2;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = (long)param_2;
  FUN__text__003967e0(param_1 + 0x16,param_4);
  FUN__text__002b2fd0(param_1 + 0x1c,param_5);
  FUN__text__002b2fd0(param_1 + 0x22,param_5);
  FUN__text__002b2fd0(param_1 + 0x28,param_5);
  return;
}


