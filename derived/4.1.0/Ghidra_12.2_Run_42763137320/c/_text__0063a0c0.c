/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063a0c0; name: FUN_.text__0063a0c0
 */


void FUN__text__0063a0c0(long param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  ulong uVar3;
  
  if (1 < param_2) {
    param_2 = param_2 >> 1;
    uVar3 = 0;
    if (param_2 != 1) {
      do {
        iVar2 = param_3 * 0x41c64e6d + 0x6073;
        puVar1 = (ushort *)(param_1 + uVar3 * 2);
        uVar3 = uVar3 + 2;
        param_3 = iVar2 * 0x41c64e6d + 0x6073;
        *puVar1 = *puVar1 ^ (ushort)((uint)iVar2 >> 0x10);
        puVar1[1] = puVar1[1] ^ (ushort)((uint)param_3 >> 0x10);
      } while (((ulong)param_2 & 0x7ffffffe) != uVar3);
    }
    if ((param_2 & 1) != 0) {
      *(ushort *)(param_1 + uVar3 * 2) =
           *(ushort *)(param_1 + uVar3 * 2) ^
           (ushort)((uint)(param_3 * 0x41c64e6d + 0x6073) >> 0x10);
    }
  }
  return;
}


