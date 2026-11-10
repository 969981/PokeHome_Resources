/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dcc20; name: FUN_.text__003dcc20
 */


undefined1 *
FUN__text__003dcc20(undefined1 *param_1,undefined1 *param_2,undefined1 param_3,void *param_4,
                   uint param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  
  if (param_5 < 0x100) {
    if (param_5 - 1 < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x003dcc48 */
                    /* WARNING: Treating indirect jump as call */
      puVar2 = (undefined1 *)
               (*(code *)(&UNK__text__003dcc54 +
                         (ulong)*(byte *)((ulong)(param_5 - 1) + 0x73aafc) * 4))();
      return puVar2;
    }
    if (param_2 < param_1 + (ulong)param_5 + 3) {
      return (undefined1 *)0x0;
    }
    param_1[1] = (char)param_5;
    puVar2 = param_1 + 3;
    *param_1 = 199;
    param_1[2] = param_3;
  }
  else if (param_5 >> 0x10 == 0) {
    if (param_2 < param_1 + (ulong)param_5 + 4) {
      return (undefined1 *)0x0;
    }
    param_1[3] = param_3;
    puVar2 = param_1 + 4;
    *param_1 = 200;
    *(ushort *)(param_1 + 1) = (ushort)(param_5 >> 8) & 0xff | (ushort)((param_5 & 0xff00ff) << 8);
  }
  else {
    if (param_2 < param_1 + (ulong)param_5 + 6) {
      return (undefined1 *)0x0;
    }
    puVar2 = param_1 + 6;
    param_1[5] = param_3;
    *param_1 = 0xc9;
    uVar1 = (param_5 & 0xff00ff00) >> 8 | (param_5 & 0xff00ff) << 8;
    *(uint *)(param_1 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  memcpy(puVar2,param_4,(ulong)param_5);
  return puVar2 + param_5;
}


