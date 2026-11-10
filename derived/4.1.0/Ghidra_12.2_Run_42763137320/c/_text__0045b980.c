/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045b980; name: FUN_.text__0045b980
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045b980(undefined8 *param_1,undefined4 param_2,undefined8 param_3,
                        undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  
  *param_1 = param_3;
  puVar3 = _DAT_008a4940;
  do {
    uVar4 = *puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *puVar3 = uVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[1] = uVar4 + 1 & 0xffffffffffffff;
  param_1[3] = 0;
  param_1[4] = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x17) = param_2;
  param_1[9] = 0x3f80000000000000;
  param_1[10] = 0xffff3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[5] = 0;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[8] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0;
  *(undefined1 *)((long)param_1 + 0x6e) = 1;
  param_1[0xe] = 0x3f8000003f800000;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0x32;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN__text__00451cac(param_1 + 0x18);
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0xf] = _DAT_008a47f0;
  return;
}


