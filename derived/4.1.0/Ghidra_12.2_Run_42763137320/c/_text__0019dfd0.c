/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019dfd0; name: FUN_.text__0019dfd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0019dfd0(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x288,8);
  lVar1 = _DAT_008a0e98;
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  *plVar2 = lVar1 + 0x10;
  plVar2[1] = *param_3;
  plVar2[2] = param_3[1];
  lVar4 = param_3[2];
  *(undefined1 *)(plVar2 + 4) = 0;
  lVar1 = _DAT_008a0ea0;
  plVar2[0x4d] = 0;
  plVar2[0x4e] = 0;
  *(undefined8 *)((long)plVar2 + 0x24) = 0;
  *(undefined8 *)((long)plVar2 + 0x2c) = 0;
  *(undefined1 *)((long)plVar2 + 0x34) = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  *(undefined1 *)(plVar2 + 9) = 0;
  *(undefined8 *)((long)plVar2 + 0x4c) = 0;
  *(undefined8 *)((long)plVar2 + 0x54) = 0;
  *(undefined1 *)((long)plVar2 + 0x5c) = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  *(undefined1 *)(plVar2 + 0xe) = 0;
  *(undefined8 *)((long)plVar2 + 0x74) = 0;
  *(undefined8 *)((long)plVar2 + 0x7c) = 0;
  plVar2[3] = lVar4;
  *(undefined8 *)((long)plVar2 + 0x25c) = 0;
  *(undefined8 *)((long)plVar2 + 0x254) = 0;
  *(undefined1 *)((long)plVar2 + 0x84) = 0;
  *(undefined1 *)(plVar2 + 0x13) = 0;
  *(undefined1 *)((long)plVar2 + 0xac) = 0;
  *(undefined8 *)((long)plVar2 + 0xa4) = 0;
  *(undefined8 *)((long)plVar2 + 0x9c) = 0;
  *(undefined1 *)(plVar2 + 0x18) = 0;
  *(undefined1 *)((long)plVar2 + 0xd4) = 0;
  *(undefined8 *)((long)plVar2 + 0xcc) = 0;
  *(undefined8 *)((long)plVar2 + 0xc4) = 0;
  *(undefined1 *)(plVar2 + 0x1d) = 0;
  *(undefined8 *)((long)plVar2 + 0xec) = 0;
  *(undefined8 *)((long)plVar2 + 0xf4) = 0;
  *(undefined1 *)((long)plVar2 + 0xfc) = 0;
  *(undefined1 *)(plVar2 + 0x22) = 0;
  *(undefined8 *)((long)plVar2 + 0x114) = 0;
  *(undefined8 *)((long)plVar2 + 0x11c) = 0;
  *(undefined1 *)((long)plVar2 + 0x124) = 0;
  *(undefined1 *)(plVar2 + 0x27) = 0;
  *(undefined8 *)((long)plVar2 + 0x13c) = 0;
  *(undefined8 *)((long)plVar2 + 0x144) = 0;
  *(undefined1 *)((long)plVar2 + 0x14c) = 0;
  *(undefined1 *)(plVar2 + 0x2c) = 0;
  *(undefined8 *)((long)plVar2 + 0x164) = 0;
  *(undefined8 *)((long)plVar2 + 0x16c) = 0;
  *(undefined1 *)((long)plVar2 + 0x174) = 0;
  *(undefined1 *)(plVar2 + 0x31) = 0;
  *(undefined1 *)((long)plVar2 + 0x19c) = 0;
  *plVar2 = lVar1 + 0x10;
  *(undefined8 *)((long)plVar2 + 0x194) = 0;
  *(undefined8 *)((long)plVar2 + 0x18c) = 0;
  *(undefined1 *)(plVar2 + 0x36) = 0;
  *(undefined1 *)((long)plVar2 + 0x1c4) = 0;
  *(undefined8 *)((long)plVar2 + 0x1bc) = 0;
  *(undefined8 *)((long)plVar2 + 0x1b4) = 0;
  *(undefined1 *)(plVar2 + 0x3b) = 0;
  *(undefined8 *)((long)plVar2 + 0x1dc) = 0;
  *(undefined8 *)((long)plVar2 + 0x1e4) = 0;
  *(undefined1 *)((long)plVar2 + 0x1ec) = 0;
  *(undefined1 *)(plVar2 + 0x40) = 0;
  *(undefined1 *)((long)plVar2 + 0x214) = 0;
  *(undefined8 *)((long)plVar2 + 0x20c) = 0;
  *(undefined8 *)((long)plVar2 + 0x204) = 0;
  *(undefined1 *)(plVar2 + 0x45) = 0;
  plVar2[0x44] = 0;
  plVar2[0x43] = 0;
  *(undefined1 *)((long)plVar2 + 0x23c) = 0;
  *(undefined8 *)((long)plVar2 + 0x234) = 0;
  *(undefined8 *)((long)plVar2 + 0x22c) = 0;
  *(undefined1 *)(plVar2 + 0x4a) = 0;
  plVar2[0x49] = 0;
  plVar2[0x48] = 0;
  *(undefined1 *)((long)plVar2 + 0x264) = 0;
  plVar2[0x4f] = 0x1e;
  *(undefined1 *)(plVar2 + 0x50) = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0x16] = 0;
  plVar2[0x17] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x20] = 0;
  plVar2[0x21] = 0;
  plVar2[0x25] = 0;
  plVar2[0x26] = 0;
  plVar2[0x2a] = 0;
  plVar2[0x2b] = 0;
  plVar2[0x2f] = 0;
  plVar2[0x30] = 0;
  plVar2[0x34] = 0;
  plVar2[0x35] = 0;
  plVar2[0x39] = 0;
  plVar2[0x3a] = 0;
  plVar2[0x3e] = 0;
  plVar2[0x3f] = 0;
  param_1[2] = 0x288;
  param_1[3] = 8;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  *param_1 = plVar2;
  param_1[1] = param_2;
  return;
}


