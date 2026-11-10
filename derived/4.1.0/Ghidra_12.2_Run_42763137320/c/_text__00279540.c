/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00279540; name: FUN_.text__00279540
 */


uint FUN__text__00279540(long param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1 + (ulong)param_2 * 0x78b8 + (ulong)param_3 * 0x138 + (ulong)param_4 * 4;
  uVar1 = *(uint *)(lVar4 + 0x30);
  uVar2 = *(uint *)(lVar4 + 0x54);
  uVar3 = FUN__text__00325c30(uVar1,uVar2);
  if (6 < param_2) {
    return 0;
  }
  if (param_2 == 5) {
    lVar4 = 0;
    do {
      if (((uint)*(ushort *)(lVar4 + 0x72d21a) == (uVar1 & 0xffff)) &&
         ((uint)*(ushort *)(lVar4 + 0x72d21c) == (uVar2 & 0xffff))) {
        if (((uint)uVar3 >> 8 & 1) == 0) {
          return 0;
        }
        break;
      }
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0x180);
  }
  return (uint)(uVar3 >> ((ulong)*(uint *)((ulong)param_2 * 4 + 0x72d39c) & 0x3f)) & 1;
}


