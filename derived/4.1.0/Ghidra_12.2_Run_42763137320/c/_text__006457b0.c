/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006457b0; name: FUN_.text__006457b0
 */


void FUN__text__006457b0(int *param_1,ushort *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar2 = *param_1;
  lVar4 = 0;
  iVar5 = iVar2;
  do {
    iVar3 = iVar5 * 0x41c64e6d + 0x6073;
    lVar1 = lVar4 + 4;
    iVar5 = iVar3 * 0x41c64e6d + 0x6073;
    *(ushort *)((long)param_1 + lVar4 + 8) =
         *(ushort *)((long)param_1 + lVar4 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
    *(ushort *)((long)param_1 + lVar4 + 10) =
         *(ushort *)((long)param_1 + lVar4 + 10) ^ (ushort)((uint)iVar5 >> 0x10);
    lVar4 = lVar1;
  } while (lVar1 != 0x140);
  if (param_2 != (ushort *)0x0) {
    iVar2 = iVar2 * 0x41c64e6d + 0x6073;
    iVar5 = iVar2 * 0x41c64e6d + 0x6073;
    *param_2 = *param_2 ^ (ushort)((uint)iVar2 >> 0x10);
    iVar2 = iVar5 * 0x41c64e6d + 0x6073;
    param_2[1] = param_2[1] ^ (ushort)((uint)iVar5 >> 0x10);
    iVar5 = iVar2 * 0x41c64e6d + 0x6073;
    param_2[2] = param_2[2] ^ (ushort)((uint)iVar2 >> 0x10);
    iVar2 = iVar5 * 0x41c64e6d + 0x6073;
    param_2[3] = param_2[3] ^ (ushort)((uint)iVar5 >> 0x10);
    iVar5 = iVar2 * 0x41c64e6d + 0x6073;
    param_2[4] = param_2[4] ^ (ushort)((uint)iVar2 >> 0x10);
    iVar2 = iVar5 * 0x41c64e6d + 0x6073;
    param_2[5] = param_2[5] ^ (ushort)((uint)iVar5 >> 0x10);
    param_2[6] = param_2[6] ^ (ushort)((uint)iVar2 >> 0x10);
    param_2[7] = param_2[7] ^ (ushort)((uint)(iVar2 * 0x41c64e6d + 0x6073) >> 0x10);
  }
  return;
}


